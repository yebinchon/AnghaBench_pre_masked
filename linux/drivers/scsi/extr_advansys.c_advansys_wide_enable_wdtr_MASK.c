
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AdvPortAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned short) ;
 int FUNC_1 (int ,int ,unsigned short) ;

__attribute__((used)) static void
FUNC_2(AdvPortAddr VAR_3, unsigned short VAR_4)
{
 unsigned short VAR_5;
 FUNC_0(VAR_3, VAR_1, VAR_5);
 if ((VAR_5 & VAR_4) != 0)
  return;

 VAR_5 |= VAR_4;
 FUNC_1(VAR_3, VAR_1, VAR_5);







 FUNC_0(VAR_3, VAR_0, VAR_5);
 VAR_5 &= ~VAR_4;
 FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_0(VAR_3, VAR_2, VAR_5);
 VAR_5 &= ~VAR_4;
 FUNC_1(VAR_3, VAR_2, VAR_5);
}
