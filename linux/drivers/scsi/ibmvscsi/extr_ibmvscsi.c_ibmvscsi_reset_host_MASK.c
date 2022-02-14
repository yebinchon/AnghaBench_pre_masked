
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int work_wait_q; int action; int request_limit; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ibmvscsi_host_data*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ibmvscsi_host_data *VAR_2)
{
 FUNC_2(VAR_2->host);
 FUNC_0(&VAR_2->request_limit, 0);

 FUNC_1(VAR_2, VAR_0);
 VAR_2->action = VAR_1;
 FUNC_3(&VAR_2->work_wait_q);
}
