
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(void)
{
 bool VAR_2;
 unsigned long VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_4(&VAR_0, VAR_3);

 VAR_2 = FUNC_1();

 if (!VAR_2) {
  FUNC_5(&VAR_0, VAR_3);
  return;
 }

 FUNC_2(&VAR_1);

 FUNC_5(&VAR_0, VAR_3);

 VAR_4 = FUNC_3(500);
 VAR_5 = FUNC_6(&VAR_1, VAR_4);
 if (VAR_5 == 0)
  FUNC_0("timeout in wait_pending_extra_info_updates\n");
}
