
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int entries; int index; } ;
struct efx_tx_queue {int queue; TYPE_3__ txd; TYPE_1__* channel; struct efx_nic* efx; } ;
struct efx_nic {TYPE_2__* type; } ;
typedef int efx_oword_t ;
struct TYPE_5__ {int txd_ptr_tbl_base; } ;
struct TYPE_4__ {int channel; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct efx_nic*,TYPE_3__*) ;
 int FUNC_5 (struct efx_nic*,int *,int ,int) ;

void FUNC_6(struct efx_tx_queue *VAR_18)
{
 int VAR_19 = VAR_18->queue & VAR_1;
 struct efx_nic *VAR_20 = VAR_18->efx;
 efx_oword_t VAR_21;


 FUNC_4(VAR_20, &VAR_18->txd);


 FUNC_1(VAR_21,
         VAR_5, 1,
         VAR_11, 0,
         VAR_12, 0,
         VAR_4, VAR_18->txd.index,
         VAR_6,
         VAR_18->channel->channel,
         VAR_8, 0,
         VAR_7, VAR_18->queue,
         VAR_9,
         FUNC_3(VAR_18->txd.entries),
         VAR_10, 0,
         VAR_14, 1);

 FUNC_2(VAR_21, VAR_13, !VAR_19);
 FUNC_2(VAR_21, VAR_16, !VAR_19);

 FUNC_5(VAR_20, &VAR_21, VAR_20->type->txd_ptr_tbl_base,
    VAR_18->queue);

 FUNC_0(VAR_21,
        VAR_15,
        (VAR_18->queue & VAR_0) ?
        VAR_2 :
        VAR_3);
 FUNC_5(VAR_20, &VAR_21, VAR_17, VAR_18->queue);
}
