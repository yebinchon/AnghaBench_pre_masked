
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int work_wait_q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ibmvfc_host*,char*) ;
 int FUNC_2 (struct ibmvfc_host*) ;
 int FUNC_3 (struct ibmvfc_host*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_2)
{
 struct ibmvfc_host *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_5(VAR_1, VAR_0);

 while (1) {
  VAR_4 = FUNC_6(VAR_3->work_wait_q,
           FUNC_3(VAR_3));

  FUNC_0(VAR_4);

  if (FUNC_4())
   break;

  FUNC_2(VAR_3);
 }

 FUNC_1(VAR_3, "ibmvfc kthread exiting...\n");
 return 0;
}
