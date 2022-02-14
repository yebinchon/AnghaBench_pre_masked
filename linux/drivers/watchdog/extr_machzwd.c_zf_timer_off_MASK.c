
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned int VAR_4 = 0;
 unsigned long VAR_5;


 FUNC_0(&VAR_3);

 FUNC_2(&VAR_2, VAR_5);

 VAR_4 = FUNC_4();
 VAR_4 |= (VAR_0|VAR_1);
 VAR_4 &= ~(VAR_0|VAR_1);
 FUNC_5(VAR_4);
 FUNC_3(&VAR_2, VAR_5);

 FUNC_1("Watchdog timer is now disabled\n");
}
