
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ft_cmd {int req_frame; TYPE_2__* sess; } ;
typedef enum fcp_resp_rsp_codes { ____Placeholder_fcp_resp_rsp_codes } fcp_resp_rsp_codes ;
struct TYPE_4__ {TYPE_1__* tport; } ;
struct TYPE_3__ {int lport; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ft_cmd *VAR_1,
         enum fcp_resp_rsp_codes VAR_2)
{
 FUNC_0(VAR_1->sess->tport->lport,
       VAR_1->req_frame, VAR_0, VAR_2);
}
