
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vnt_private {int basic_rates; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_1(struct vnt_private *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_0; VAR_3 >= VAR_1; VAR_3--) {
  if ((VAR_2->basic_rates) & ((u32)FUNC_0(VAR_3)))
   return 1;
 }
 return 0;
}
