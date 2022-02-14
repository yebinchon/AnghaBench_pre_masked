
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(u8 VAR_2)
{
 if (VAR_2 & VAR_0) {
  unsigned VAR_3 = 0;

  VAR_2 &= ~VAR_0;
  if (VAR_2 & VAR_1) {
   VAR_3 = 12;
   VAR_2 &= ~VAR_1;
  }
  VAR_3 += FUNC_0(VAR_2);
  return VAR_3 - 1;
 }
 return FUNC_0(VAR_2);
}
