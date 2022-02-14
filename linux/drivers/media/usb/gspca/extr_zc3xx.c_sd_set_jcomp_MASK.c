
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int quality; } ;
struct sd {int jpegqual; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0,
   const struct v4l2_jpegcompression *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 return FUNC_0(VAR_2->jpegqual, VAR_1->quality);
}
