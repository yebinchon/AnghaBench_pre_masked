
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int quality; } ;
struct sd {scalar_t__ sensor; int jpegqual; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2,
   const struct v4l2_jpegcompression *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;

 if (VAR_4->sensor != VAR_1)
  return -VAR_0;
 FUNC_0(VAR_4->jpegqual, VAR_3->quality);
 return 0;
}
