
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ef4_nic {TYPE_2__* type; int net_dev; } ;
struct TYPE_4__ {int len; int addr; } ;
struct TYPE_6__ {scalar_t__ index; scalar_t__ entries; TYPE_1__ buf; } ;
struct ef4_channel {int channel; TYPE_3__ eventq; struct ef4_nic* efx; } ;
typedef int ef4_oword_t ;
struct TYPE_5__ {int evq_ptr_tbl_base; } ;


 int FUNC_0 (int ,int ,int,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ef4_nic*,TYPE_3__*) ;
 int FUNC_3 (struct ef4_nic*,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,int ,scalar_t__,scalar_t__) ;

int FUNC_6(struct ef4_channel *VAR_4)
{
 ef4_oword_t VAR_5;
 struct ef4_nic *VAR_6 = VAR_4->efx;

 FUNC_5(VAR_6, VAR_3, VAR_6->net_dev,
    "channel %d event queue in special buffers %d-%d\n",
    VAR_4->channel, VAR_4->eventq.index,
    VAR_4->eventq.index + VAR_4->eventq.entries - 1);


 FUNC_2(VAR_6, &VAR_4->eventq);


 FUNC_4(VAR_4->eventq.buf.addr, 0xff, VAR_4->eventq.buf.len);


 FUNC_0(VAR_5,
        VAR_1, 1,
        VAR_2, FUNC_1(VAR_4->eventq.entries),
        VAR_0, VAR_4->eventq.index);
 FUNC_3(VAR_6, &VAR_5, VAR_6->type->evq_ptr_tbl_base,
    VAR_4->channel);

 return 0;
}
