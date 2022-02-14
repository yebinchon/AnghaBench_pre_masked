
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc_mbus_pixelfmt {scalar_t__ layout; int bits_per_sample; int packing; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
s32 FUNC_0(u32 VAR_2, const struct soc_mbus_pixelfmt *VAR_3)
{
 if (VAR_3->layout != VAR_1)
  return VAR_2 * VAR_3->bits_per_sample / 8;

 switch (VAR_3->packing) {
 case 129:
  return VAR_2 * VAR_3->bits_per_sample / 8;
 case 133:
 case 132:
 case 131:
  return VAR_2 * 2;
 case 134:
  return VAR_2 * 3 / 2;
 case 128:
  return 0;
 case 130:
  return VAR_2 * 4;
 }
 return -VAR_0;
}
