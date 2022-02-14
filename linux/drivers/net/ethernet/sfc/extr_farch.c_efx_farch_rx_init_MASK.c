
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ entries; scalar_t__ index; } ;
struct efx_rx_queue {TYPE_3__ rxd; scalar_t__ scatter_n; struct efx_nic* efx; } ;
struct efx_nic {int rx_scatter; TYPE_1__* type; int net_dev; } ;
typedef int efx_oword_t ;
struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {int rxd_ptr_tbl_base; } ;


 int FUNC_0 (int ,int ,int,int ,int,int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int) ;
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
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct efx_nic*,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (struct efx_rx_queue*) ;
 int FUNC_4 (struct efx_rx_queue*) ;
 int FUNC_5 (struct efx_nic*,int *,int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,int ,scalar_t__,scalar_t__) ;

void FUNC_7(struct efx_rx_queue *VAR_11)
{
 efx_oword_t VAR_12;
 struct efx_nic *VAR_13 = VAR_11->efx;
 bool VAR_14;


 VAR_14 = VAR_13->rx_scatter;

 FUNC_6(VAR_13, VAR_10, VAR_13->net_dev,
    "RX queue %d ring in special buffers %d-%d\n",
    FUNC_4(VAR_11), VAR_11->rxd.index,
    VAR_11->rxd.index + VAR_11->rxd.entries - 1);

 VAR_11->scatter_n = 0;


 FUNC_2(VAR_13, &VAR_11->rxd);


 FUNC_0(VAR_12,
         VAR_8, 1,
         VAR_9, 1,
         VAR_0, VAR_11->rxd.index,
         VAR_2,
         FUNC_3(VAR_11)->channel,
         VAR_5, 0,
         VAR_4,
         FUNC_4(VAR_11),
         VAR_6,
         FUNC_1(VAR_11->rxd.entries),
         VAR_7, 0 ,
         VAR_3, VAR_14,
         VAR_1, 1);
 FUNC_5(VAR_13, &VAR_12, VAR_13->type->rxd_ptr_tbl_base,
    FUNC_4(VAR_11));
}
