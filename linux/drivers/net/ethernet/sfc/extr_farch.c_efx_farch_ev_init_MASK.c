
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct efx_nic {TYPE_2__* type; int net_dev; } ;
struct TYPE_4__ {int len; int addr; } ;
struct TYPE_6__ {scalar_t__ index; scalar_t__ entries; TYPE_1__ buf; } ;
struct efx_channel {int channel; TYPE_3__ eventq; struct efx_nic* efx; } ;
typedef int efx_oword_t ;
struct TYPE_5__ {int evq_ptr_tbl_base; } ;


 int FUNC_0 (int ,int ,int,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct efx_nic*,TYPE_3__*) ;
 int FUNC_3 (struct efx_nic*,int *,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,int ,scalar_t__,scalar_t__) ;

int FUNC_6(struct efx_channel *VAR_9)
{
 efx_oword_t VAR_10;
 struct efx_nic *VAR_11 = VAR_9->efx;

 FUNC_5(VAR_11, VAR_8, VAR_11->net_dev,
    "channel %d event queue in special buffers %d-%d\n",
    VAR_9->channel, VAR_9->eventq.index,
    VAR_9->eventq.index + VAR_9->eventq.entries - 1);

 FUNC_0(VAR_10,
        VAR_6, 1,
        VAR_4, 0,
        VAR_5, VAR_0);
 FUNC_3(VAR_11, &VAR_10, VAR_7, VAR_9->channel);


 FUNC_2(VAR_11, &VAR_9->eventq);


 FUNC_4(VAR_9->eventq.buf.addr, 0xff, VAR_9->eventq.buf.len);


 FUNC_0(VAR_10,
        VAR_2, 1,
        VAR_3, FUNC_1(VAR_9->eventq.entries),
        VAR_1, VAR_9->eventq.index);
 FUNC_3(VAR_11, &VAR_10, VAR_11->type->evq_ptr_tbl_base,
    VAR_9->channel);

 return 0;
}
