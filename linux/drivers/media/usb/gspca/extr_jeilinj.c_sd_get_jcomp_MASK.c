
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int jpeg_markers; int quality; } ;
struct sd {int jpegqual; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_jpegcompression*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2,
   struct v4l2_jpegcompression *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;

 FUNC_0(VAR_3, 0, sizeof *VAR_3);
 VAR_3->quality = FUNC_1(VAR_4->jpegqual);
 VAR_3->jpeg_markers = VAR_0
   | VAR_1;
 return 0;
}
