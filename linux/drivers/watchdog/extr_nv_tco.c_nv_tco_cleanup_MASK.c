
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
 u32 VAR_6;


 if (!VAR_2)
  FUNC_5();


 FUNC_1(VAR_4, VAR_0, &VAR_6);
 VAR_6 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_0, VAR_6);
 FUNC_1(VAR_4, VAR_0, &VAR_6);
 if (VAR_6 & VAR_1) {
  FUNC_3("Couldn't unset REBOOT bit.  Machine may soon reset\n");
 }


 FUNC_0(&VAR_3);
 FUNC_4(VAR_5, 0x10);
}
