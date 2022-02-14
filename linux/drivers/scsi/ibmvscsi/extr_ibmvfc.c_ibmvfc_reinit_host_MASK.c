
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {scalar_t__ action; int reinit; int work_wait_q; int host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ibmvfc_host*,int ) ;
 int FUNC_1 (struct ibmvfc_host*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ibmvfc_host *VAR_3)
{
 if (VAR_3->action == VAR_0) {
  if (!FUNC_1(VAR_3, VAR_2)) {
   FUNC_2(VAR_3->host);
   FUNC_0(VAR_3, VAR_1);
  }
 } else
  VAR_3->reinit = 1;

 FUNC_3(&VAR_3->work_wait_q);
}
