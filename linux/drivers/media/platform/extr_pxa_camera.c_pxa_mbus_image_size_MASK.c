
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_mbus_pixelfmt {scalar_t__ layout; int packing; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


__attribute__((used)) static s32 FUNC_0(const struct pxa_mbus_pixelfmt *VAR_2,
   u32 VAR_3, u32 VAR_4)
{
 if (VAR_2->layout == VAR_1)
  return VAR_3 * VAR_4;

 switch (VAR_2->packing) {
 case 128:
  return VAR_3 * VAR_4 * 2;
 default:
  return -VAR_0;
 }
}
