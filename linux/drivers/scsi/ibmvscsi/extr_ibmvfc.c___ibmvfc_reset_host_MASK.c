
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {scalar_t__ action; int work_wait_q; int job_step; int host; scalar_t__ logged_in; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ibmvfc_host*) ;
 int VAR_3 ;
 int FUNC_1 (struct ibmvfc_host*,int ) ;
 int FUNC_2 (struct ibmvfc_host*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ibmvfc_host *VAR_4)
{
 if (VAR_4->logged_in && VAR_4->action != VAR_1 &&
     !FUNC_2(VAR_4, VAR_2)) {
  FUNC_3(VAR_4->host);
  FUNC_1(VAR_4, VAR_0);
  VAR_4->job_step = VAR_3;
  FUNC_4(&VAR_4->work_wait_q);
 } else
  FUNC_0(VAR_4);
}
