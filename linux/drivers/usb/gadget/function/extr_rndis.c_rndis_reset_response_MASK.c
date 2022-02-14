
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rndis_params {int v; int (* resp_avail ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ buf; } ;
typedef TYPE_1__ rndis_resp_t ;
typedef int rndis_reset_msg_type ;
struct TYPE_5__ {void* AddressingReset; void* Status; void* MessageLength; void* MessageType; } ;
typedef TYPE_2__ rndis_reset_cmplt_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct rndis_params*,int) ;
 int FUNC_2 (struct rndis_params*,int *) ;
 int * FUNC_3 (struct rndis_params*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rndis_params *VAR_3,
    rndis_reset_msg_type *VAR_4)
{
 rndis_reset_cmplt_type *VAR_5;
 rndis_resp_t *VAR_6;
 u8 *VAR_7;
 u32 VAR_8;


 while ((VAR_7 = FUNC_3(VAR_3, &VAR_8)))
  FUNC_2(VAR_3, VAR_7);

 VAR_6 = FUNC_1(VAR_3, sizeof(rndis_reset_cmplt_type));
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = (rndis_reset_cmplt_type *)VAR_6->buf;

 VAR_5->MessageType = FUNC_0(VAR_1);
 VAR_5->MessageLength = FUNC_0(16);
 VAR_5->Status = FUNC_0(VAR_2);

 VAR_5->AddressingReset = FUNC_0(1);

 VAR_3->resp_avail(VAR_3->v);
 return 0;
}
