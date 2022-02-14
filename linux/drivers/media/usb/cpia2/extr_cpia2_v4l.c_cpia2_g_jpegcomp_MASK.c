
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_jpegcompression {int quality; int jpeg_markers; scalar_t__ APP_len; scalar_t__ COM_len; int COM_data; int APP_data; int APPn; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int inhibit_htables; } ;
struct TYPE_4__ {TYPE_1__ compression; } ;
struct camera_data {scalar_t__ APP_len; scalar_t__ COM_len; int COM_data; int APP_data; int APPn; TYPE_2__ params; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct v4l2_jpegcompression*,int ,int) ;
 struct camera_data* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, struct v4l2_jpegcompression *VAR_7)
{
 struct camera_data *VAR_8 = FUNC_3(VAR_5);

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->quality = 80;

 VAR_7->jpeg_markers = VAR_3 | VAR_4;
 if(!VAR_8->params.compression.inhibit_htables) {
  VAR_7->jpeg_markers |= VAR_2;
 }

 VAR_7->APPn = VAR_8->APPn;
 VAR_7->APP_len = VAR_8->APP_len;
 if(VAR_8->APP_len > 0) {
  FUNC_1(VAR_7->APP_data, VAR_8->APP_data, VAR_8->APP_len);
  VAR_7->jpeg_markers |= VAR_1;
 }

 VAR_7->COM_len = VAR_8->COM_len;
 if(VAR_8->COM_len > 0) {
  FUNC_1(VAR_7->COM_data, VAR_8->COM_data, VAR_8->COM_len);
  VAR_7->jpeg_markers |= VAR_0;
 }

 FUNC_0("G_JPEGCOMP APP_len:%d COM_len:%d\n",
     VAR_7->APP_len, VAR_7->COM_len);

 return 0;
}
