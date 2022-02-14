
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_mbus_pixelfmt {scalar_t__ layout; int bits_per_sample; int packing; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




__attribute__((used)) static s32 FUNC_0(u32 VAR_2, const struct pxa_mbus_pixelfmt *VAR_3)
{
 if (VAR_3->layout != VAR_1)
  return VAR_2 * VAR_3->bits_per_sample / 8;

 switch (VAR_3->packing) {
 case 128:
  return VAR_2 * VAR_3->bits_per_sample / 8;
 case 130:
 case 129:
  return VAR_2 * 2;
 }
 return -VAR_0;
}
