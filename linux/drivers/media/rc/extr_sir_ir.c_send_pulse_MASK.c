
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_6)
{
 long VAR_7 = VAR_6 / VAR_1;

 if (VAR_7 == 0)
  VAR_7++;

 while (VAR_7--) {
  FUNC_1(VAR_0, VAR_5 + VAR_4);

  while (!(FUNC_0(VAR_5 + VAR_2) & VAR_3))
   ;
 }
}
