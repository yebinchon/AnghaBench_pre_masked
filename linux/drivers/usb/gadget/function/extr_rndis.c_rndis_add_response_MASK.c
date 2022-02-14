
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rndis_params {int resp_queue; } ;
struct TYPE_4__ {int list; scalar_t__ send; scalar_t__ length; int * buf; } ;
typedef TYPE_1__ rndis_resp_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static rndis_resp_t *FUNC_2(struct rndis_params *VAR_1, u32 VAR_2)
{
 rndis_resp_t *VAR_3;


 VAR_3 = FUNC_0(sizeof(rndis_resp_t) + VAR_2, VAR_0);
 if (!VAR_3) return ((void*)0);

 VAR_3->buf = (u8 *)(VAR_3 + 1);
 VAR_3->length = VAR_2;
 VAR_3->send = 0;

 FUNC_1(&VAR_3->list, &VAR_1->resp_queue);
 return VAR_3;
}
