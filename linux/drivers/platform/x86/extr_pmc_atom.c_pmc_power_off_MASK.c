
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 u16 VAR_5;
 u32 VAR_6;

 FUNC_2("Preparing to enter system sleep state S5\n");

 VAR_5 = VAR_4 + VAR_0;

 VAR_6 = FUNC_0(VAR_5);
 VAR_6 &= VAR_2;
 VAR_6 |= VAR_3;
 VAR_6 |= VAR_1;

 FUNC_1(VAR_6, VAR_5);
}
