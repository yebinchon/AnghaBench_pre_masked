
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int len; scalar_t__ dma_addr; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct efx_rx_queue {TYPE_2__ rxd; scalar_t__ ptr_mask; scalar_t__ scatter_len; scalar_t__ scatter_n; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {scalar_t__ vport_id; } ;
struct efx_channel {scalar_t__ channel; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int VAR_12 ;
 size_t FUNC_5 (size_t) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (struct efx_nic*,int ,int ,size_t,int *,int ,int *) ;
 struct efx_channel* FUNC_7 (struct efx_rx_queue*) ;
 scalar_t__ FUNC_8 (struct efx_rx_queue*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*,scalar_t__,size_t,int ) ;

__attribute__((used)) static void FUNC_11(struct efx_rx_queue *VAR_16)
{
 FUNC_1(VAR_15,
    FUNC_5(VAR_1 * 8 /
      VAR_0));
 struct efx_channel *VAR_17 = FUNC_7(VAR_16);
 size_t VAR_18 = VAR_16->rxd.buf.len / VAR_0;
 struct efx_nic *VAR_19 = VAR_16->efx;
 struct efx_ef10_nic_data *VAR_20 = VAR_19->nic_data;
 size_t VAR_21;
 dma_addr_t VAR_22;
 int VAR_23;
 int VAR_24;
 FUNC_0(VAR_13 != 0);

 VAR_16->scatter_n = 0;
 VAR_16->scatter_len = 0;

 FUNC_4(VAR_15, VAR_10, VAR_16->ptr_mask + 1);
 FUNC_4(VAR_15, VAR_11, VAR_17->channel);
 FUNC_4(VAR_15, VAR_7, FUNC_8(VAR_16));
 FUNC_4(VAR_15, VAR_6,
         FUNC_8(VAR_16));
 FUNC_2(VAR_15, VAR_3,
         VAR_4, 1,
         VAR_5, 1);
 FUNC_4(VAR_15, VAR_8, 0);
 FUNC_4(VAR_15, VAR_9, VAR_20->vport_id);

 VAR_22 = VAR_16->rxd.buf.dma_addr;

 FUNC_10(VAR_19, VAR_14, VAR_19->net_dev, "pushing RXQ %d. %zu entries (%llx)\n",
    FUNC_8(VAR_16), VAR_18, (u64)VAR_22);

 for (VAR_24 = 0; VAR_24 < VAR_18; ++VAR_24) {
  FUNC_3(VAR_15, VAR_2, VAR_24, VAR_22);
  VAR_22 += VAR_0;
 }

 VAR_21 = FUNC_5(VAR_18);

 VAR_23 = FUNC_6(VAR_19, VAR_12, VAR_15, VAR_21,
     ((void*)0), 0, ((void*)0));
 if (VAR_23)
  FUNC_9(VAR_19->net_dev, "failed to initialise RXQ %d\n",
       FUNC_8(VAR_16));
}
