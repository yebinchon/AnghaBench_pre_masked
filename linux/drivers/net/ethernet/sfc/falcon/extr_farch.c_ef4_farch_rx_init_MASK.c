
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ entries; scalar_t__ index; } ;
struct ef4_rx_queue {TYPE_3__ rxd; scalar_t__ scatter_n; struct ef4_nic* efx; } ;
struct ef4_nic {TYPE_1__* type; int net_dev; scalar_t__ rx_scatter; } ;
typedef int ef4_oword_t ;
struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {int rxd_ptr_tbl_base; } ;


 int FUNC_0 (int ,int ,int,int ,int,int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int) ;
 scalar_t__ VAR_0 ;
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
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ef4_nic*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct ef4_nic*) ;
 TYPE_2__* FUNC_4 (struct ef4_rx_queue*) ;
 int FUNC_5 (struct ef4_rx_queue*) ;
 int FUNC_6 (struct ef4_nic*,int *,int ,int ) ;
 int VAR_11 ;
 int FUNC_7 (struct ef4_nic*,int ,int ,char*,int ,scalar_t__,scalar_t__) ;

void FUNC_8(struct ef4_rx_queue *VAR_12)
{
 ef4_oword_t VAR_13;
 struct ef4_nic *VAR_14 = VAR_12->efx;
 bool VAR_15 = FUNC_3(VAR_14) >= VAR_0;
 bool VAR_16 = VAR_15;
 bool VAR_17;






 VAR_17 = !VAR_15 || VAR_14->rx_scatter;

 FUNC_7(VAR_14, VAR_11, VAR_14->net_dev,
    "RX queue %d ring in special buffers %d-%d\n",
    FUNC_5(VAR_12), VAR_12->rxd.index,
    VAR_12->rxd.index + VAR_12->rxd.entries - 1);

 VAR_12->scatter_n = 0;


 FUNC_2(VAR_14, &VAR_12->rxd);


 FUNC_0(VAR_13,
         VAR_9, VAR_16,
         VAR_10, VAR_16,
         VAR_1, VAR_12->rxd.index,
         VAR_3,
         FUNC_4(VAR_12)->channel,
         VAR_6, 0,
         VAR_5,
         FUNC_5(VAR_12),
         VAR_7,
         FUNC_1(VAR_12->rxd.entries),
         VAR_8, 0 ,
         VAR_4, VAR_17,
         VAR_2, 1);
 FUNC_6(VAR_14, &VAR_13, VAR_14->type->rxd_ptr_tbl_base,
    FUNC_5(VAR_12));
}
