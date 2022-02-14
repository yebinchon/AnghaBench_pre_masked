
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_jpegcompression {int APP_len; int COM_len; int jpeg_markers; int APPn; int COM_data; int APP_data; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int inhibit_htables; } ;
struct TYPE_4__ {TYPE_1__ compression; } ;
struct camera_data {int APPn; int APP_len; int COM_len; int COM_data; int APP_data; TYPE_2__ params; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 struct camera_data* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
  const struct v4l2_jpegcompression *VAR_4)
{
 struct camera_data *VAR_5 = FUNC_3(VAR_2);

 FUNC_0("S_JPEGCOMP APP_len:%d COM_len:%d\n",
     VAR_4->APP_len, VAR_4->COM_len);

 VAR_5->params.compression.inhibit_htables =
  !(VAR_4->jpeg_markers & VAR_1);

 if(VAR_4->APP_len != 0) {
  if(VAR_4->APP_len > 0 &&
     VAR_4->APP_len <= sizeof(VAR_5->APP_data) &&
     VAR_4->APPn >= 0 && VAR_4->APPn <= 15) {
   VAR_5->APPn = VAR_4->APPn;
   VAR_5->APP_len = VAR_4->APP_len;
   FUNC_2(VAR_5->APP_data, VAR_4->APP_data, VAR_4->APP_len);
  } else {
   FUNC_1("Bad APPn Params n=%d len=%d\n",
       VAR_4->APPn, VAR_4->APP_len);
   return -VAR_0;
  }
 } else {
  VAR_5->APP_len = 0;
 }

 if(VAR_4->COM_len != 0) {
  if(VAR_4->COM_len > 0 &&
     VAR_4->COM_len <= sizeof(VAR_5->COM_data)) {
   VAR_5->COM_len = VAR_4->COM_len;
   FUNC_2(VAR_5->COM_data, VAR_4->COM_data, VAR_4->COM_len);
  } else {
   FUNC_1("Bad COM_len=%d\n", VAR_4->COM_len);
   return -VAR_0;
  }
 }

 return 0;
}
