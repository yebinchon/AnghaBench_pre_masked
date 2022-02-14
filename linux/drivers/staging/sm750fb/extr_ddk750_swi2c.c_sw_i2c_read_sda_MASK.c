
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned char FUNC_2(void)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5 = 1 << VAR_0;


 VAR_3 = FUNC_0(VAR_1);
 if ((VAR_3 & VAR_5) != ~VAR_5) {
  VAR_3 &= ~(1 << VAR_0);
  FUNC_1(VAR_1, VAR_3);
 }


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 & (1 << VAR_0))
  return 1;
 else
  return 0;
}
