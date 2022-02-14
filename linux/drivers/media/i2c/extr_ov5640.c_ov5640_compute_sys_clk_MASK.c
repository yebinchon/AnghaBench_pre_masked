
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct ov5640_dev {unsigned long xclk_freq; } ;



__attribute__((used)) static unsigned long FUNC_0(struct ov5640_dev *VAR_0,
         u8 VAR_1, u8 VAR_2,
         u8 VAR_3)
{
 unsigned long VAR_4 = VAR_0->xclk_freq / VAR_1 * VAR_2;


 if (VAR_4 / 1000000 > 1000)
  return 0;

 return VAR_4 / VAR_3;
}
