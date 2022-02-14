
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_req {int status; int completion; scalar_t__ erp_action; int (* handler ) (struct zfcp_fsf_req*) ;int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_11(struct zfcp_fsf_req *VAR_1)
{
 if (FUNC_4(FUNC_9(VAR_1))) {
  FUNC_10(VAR_1);
  return;
 }

 FUNC_1(&VAR_1->timer);
 FUNC_7(VAR_1);
 FUNC_6(VAR_1);
 VAR_1->handler(VAR_1);

 if (VAR_1->erp_action)
  FUNC_5(VAR_1->erp_action, 0);

 if (FUNC_2(VAR_1->status & VAR_0))
  FUNC_8(VAR_1);
 else
  FUNC_0(&VAR_1->completion);
}
