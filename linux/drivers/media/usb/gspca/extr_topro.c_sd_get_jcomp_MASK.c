
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int jpeg_markers; int quality; } ;
struct sd {scalar_t__ sensor; int jpegqual; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_jpegcompression*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_4,
   struct v4l2_jpegcompression *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;

 if (VAR_6->sensor != VAR_1)
  return -VAR_0;
 FUNC_0(VAR_5, 0, sizeof *VAR_5);
 VAR_5->quality = FUNC_1(VAR_6->jpegqual);
 VAR_5->jpeg_markers = VAR_2
   | VAR_3;
 return 0;
}
