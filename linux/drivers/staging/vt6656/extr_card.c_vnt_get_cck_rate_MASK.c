
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_private {int basic_rates; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct vnt_private *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = VAR_2;

 while (VAR_3 > VAR_0) {
  if (VAR_1->basic_rates & (1 << VAR_3))
   return VAR_3;
  VAR_3--;
 }

 return VAR_0;
}
