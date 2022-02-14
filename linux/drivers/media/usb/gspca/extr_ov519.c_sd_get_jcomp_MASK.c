
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int jpeg_markers; int quality; } ;
struct sd {scalar_t__ bridge; int jpegqual; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_jpegcompression*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5,
   struct v4l2_jpegcompression *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;

 if (VAR_7->bridge != VAR_0)
  return -VAR_1;

 FUNC_0(VAR_6, 0, sizeof *VAR_6);
 VAR_6->quality = FUNC_1(VAR_7->jpegqual);
 VAR_6->jpeg_markers = VAR_2 | VAR_3 |
         VAR_4;
 return 0;
}
