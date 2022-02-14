
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct vnt_private {unsigned int basic_rates; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned short FUNC_0(struct vnt_private *VAR_1,
          unsigned short VAR_2)
{
 unsigned int VAR_3 = (unsigned int)VAR_2;

 while (VAR_3 > VAR_0) {
  if (VAR_1->basic_rates & ((u32)0x1 << VAR_3))
   return (unsigned short)VAR_3;

  VAR_3--;
 }
 return (unsigned short)VAR_0;
}
