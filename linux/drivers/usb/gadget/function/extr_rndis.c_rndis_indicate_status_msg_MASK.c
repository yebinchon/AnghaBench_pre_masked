
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rndis_params {scalar_t__ state; int v; int (* resp_avail ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ buf; } ;
typedef TYPE_1__ rndis_resp_t ;
struct TYPE_5__ {void* StatusBufferOffset; void* StatusBufferLength; void* Status; void* MessageLength; void* MessageType; } ;
typedef TYPE_2__ rndis_indicate_status_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct rndis_params*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rndis_params *VAR_4, u32 VAR_5)
{
 rndis_indicate_status_msg_type *VAR_6;
 rndis_resp_t *VAR_7;

 if (VAR_4->state == VAR_3)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_4, sizeof(rndis_indicate_status_msg_type));
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = (rndis_indicate_status_msg_type *)VAR_7->buf;

 VAR_6->MessageType = FUNC_0(VAR_2);
 VAR_6->MessageLength = FUNC_0(20);
 VAR_6->Status = FUNC_0(VAR_5);
 VAR_6->StatusBufferLength = FUNC_0(0);
 VAR_6->StatusBufferOffset = FUNC_0(0);

 VAR_4->resp_avail(VAR_4->v);
 return 0;
}
