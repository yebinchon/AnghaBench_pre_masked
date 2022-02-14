
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct i2c_client {int dev; } ;
typedef int int32_t ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static uint32_t FUNC_1(struct i2c_client *VAR_0,
      uint32_t VAR_1)
{
 int32_t VAR_2;
 uint64_t VAR_3;

 if (VAR_1 >= 0x80000000) {
  FUNC_0(&VAR_0->dev, "this is a negative number\n");
  return 0;
 }

 if (VAR_1 == 0x7f800000)
  return ~0;

 if ((VAR_1 & 0x7f800000) == 0x7f800000) {
  FUNC_0(&VAR_0->dev, "NaN or other special number\n");
  return 0;
 }


 if (VAR_1 == 0)
  return 0;

 if (VAR_1 > 0x4f800000)
  return ~0;





 VAR_2 = ((int32_t)VAR_1 >> 23) - 127;


 VAR_3 = ((VAR_1 & 0x7fffff) | 0x800000) * 1000000ULL;

 if (VAR_2 < 0)
  VAR_3 >>= -VAR_2;
 else
  VAR_3 <<= VAR_2;

 VAR_3 >>= 23;

 return VAR_3 & 0xffffffff;
}
