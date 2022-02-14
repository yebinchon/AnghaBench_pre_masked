
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int len; scalar_t__ dma_addr; } ;
struct TYPE_7__ {TYPE_2__ buf; } ;
struct efx_tx_queue {int queue; int timestamping; int ptr_mask; int insert_count; int write_count; int tso_version; int handle_tso; TYPE_4__* buffer; TYPE_3__ txd; struct efx_nic* efx; struct efx_channel* channel; } ;
struct efx_nic {int net_dev; TYPE_1__* type; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int licensed_features; int datapath_caps2; int vport_id; int datapath_caps; } ;
struct efx_channel {int channel; } ;
typedef int efx_qword_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {int flags; } ;
struct TYPE_5__ {int (* ptp_set_ts_sync_events ) (struct efx_nic*,int,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int,int ,int,int ,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,int ,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int,scalar_t__) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t FUNC_6 (size_t) ;
 scalar_t__ VAR_28 ;
 int FUNC_7 (struct efx_tx_queue*,int *) ;
 int VAR_29 ;
 int FUNC_8 (struct efx_nic*,int ,int ,int *,int ,int) ;
 int FUNC_9 (struct efx_nic*,int ,int ,size_t,int *,int ,int *) ;
 int * FUNC_10 (struct efx_tx_queue*,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (struct efx_nic*,int ,int ,char*,int,...) ;
 int FUNC_13 (struct efx_nic*,int ,int ,char*) ;
 int VAR_32 ;
 int FUNC_14 (struct efx_nic*,int,int) ;
 int FUNC_15 () ;

__attribute__((used)) static void FUNC_16(struct efx_tx_queue *VAR_33)
{
 FUNC_2(VAR_31, FUNC_6(VAR_1 * 8 /
             VAR_0));
 bool VAR_34 = VAR_33->queue & VAR_2;
 size_t VAR_35 = VAR_33->txd.buf.len / VAR_0;
 struct efx_channel *VAR_36 = VAR_33->channel;
 struct efx_nic *VAR_37 = VAR_33->efx;
 struct efx_ef10_nic_data *VAR_38 = VAR_37->nic_data;
 bool VAR_39 = 0;
 size_t VAR_40;
 dma_addr_t VAR_41;
 efx_qword_t *VAR_42;
 int VAR_43;
 int VAR_44;
 FUNC_0(VAR_28 != 0);




 if (!(VAR_38->licensed_features &
       (1 << VAR_23))) {
  VAR_33->timestamping = 0;

  if (VAR_37->type->ptp_set_ts_sync_events)
   VAR_37->type->ptp_set_ts_sync_events(VAR_37, 0, 0);
 }






 if (VAR_34 && (VAR_38->datapath_caps2 &
   (1 << VAR_25)) &&
     !VAR_33->timestamping) {
  VAR_39 = 1;
  FUNC_12(VAR_37, VAR_30, VAR_37->net_dev, "Using TSOv2 for channel %u\n",
    VAR_36->channel);
 }

 FUNC_5(VAR_31, VAR_21, VAR_33->ptr_mask + 1);
 FUNC_5(VAR_31, VAR_22, VAR_36->channel);
 FUNC_5(VAR_31, VAR_18, VAR_33->queue);
 FUNC_5(VAR_31, VAR_17, VAR_33->queue);
 FUNC_5(VAR_31, VAR_19, 0);
 FUNC_5(VAR_31, VAR_20, VAR_38->vport_id);

 VAR_41 = VAR_33->txd.buf.dma_addr;

 FUNC_12(VAR_37, VAR_30, VAR_37->net_dev, "pushing TXQ %d. %zu entries (%llx)\n",
    VAR_33->queue, VAR_35, (u64)VAR_41);

 for (VAR_44 = 0; VAR_44 < VAR_35; ++VAR_44) {
  FUNC_4(VAR_31, VAR_13, VAR_44, VAR_41);
  VAR_41 += VAR_0;
 }

 VAR_40 = FUNC_6(VAR_35);

 do {
  FUNC_3(VAR_31, VAR_14,




    VAR_12, VAR_39,
    VAR_15, !VAR_34,
    VAR_16, !VAR_34,
    VAR_11,
      VAR_33->timestamping);

  VAR_43 = FUNC_9(VAR_37, VAR_26, VAR_31, VAR_40,
     ((void*)0), 0, ((void*)0));
  if (VAR_43 == -VAR_4 && VAR_39) {

   VAR_39 = 0;
   FUNC_13(VAR_37, VAR_32, VAR_37->net_dev,
       "TSOv2 context not available to segment in hardware. TCP performance may be reduced.\n");
  } else if (VAR_43) {
   FUNC_8(VAR_37, VAR_26,
            VAR_27,
            ((void*)0), 0, VAR_43);
   goto fail;
  }
 } while (VAR_43);







 VAR_33->buffer[0].flags = VAR_3;
 VAR_33->insert_count = 1;
 VAR_42 = FUNC_10(VAR_33, 0);
 FUNC_1(*VAR_42,
        VAR_6, 1,
        VAR_8,
        VAR_5,
        VAR_9, VAR_34,
        VAR_7, VAR_34,
        VAR_10, VAR_33->timestamping);
 VAR_33->write_count = 1;

 if (VAR_39) {
  VAR_33->handle_tso = VAR_29;
  VAR_33->tso_version = 2;
 } else if (VAR_38->datapath_caps &
   (1 << VAR_24)) {
  VAR_33->tso_version = 1;
 }

 FUNC_15();
 FUNC_7(VAR_33, VAR_42);

 return;

fail:
 FUNC_11(VAR_37->net_dev, "failed to initialise TXQ %d\n",
      VAR_33->queue);
}
