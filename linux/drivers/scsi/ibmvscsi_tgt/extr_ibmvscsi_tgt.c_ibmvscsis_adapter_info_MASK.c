
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint ;
struct TYPE_9__ {int length; void* status; } ;
struct viosrp_adapter_info {int buffer; TYPE_2__ common; } ;
struct TYPE_12__ {TYPE_4__* window; int partition_num; int partition_name; } ;
struct TYPE_10__ {void* os_type; void* mad_version; int partition_name; int srp_version; void* partition_number; } ;
struct scsi_info {int dev; TYPE_6__* dma_dev; TYPE_5__ dds; TYPE_3__ client_data; int flags; } ;
struct mad_adapter_info_data {void** port_max_txu; void* os_type; void* mad_version; void* partition_number; int partition_name; int srp_version; } ;
struct iu_entry {long target; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {struct viosrp_adapter_info adapter_info; } ;
struct TYPE_14__ {TYPE_1__ mad; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_11__ {int liobn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct scsi_info*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,long,...) ;
 int FUNC_7 (int *,char*,long) ;
 int FUNC_8 (int *,char*,long) ;
 struct mad_adapter_info_data* FUNC_9 (int *,int,int *,int ) ;
 int FUNC_10 (int *,int,struct mad_adapter_info_data*,int ) ;
 int FUNC_11 () ;
 long FUNC_12 (int,int ,int ,int ,int ) ;
 int FUNC_13 (struct scsi_info*,int ,int) ;
 int FUNC_14 (void**,int ,int) ;
 int FUNC_15 (int ,int ,int) ;
 TYPE_7__* FUNC_16 (struct iu_entry*) ;

__attribute__((used)) static long FUNC_17(struct scsi_info *VAR_12,
       struct iu_entry *VAR_13)
{
 struct viosrp_adapter_info *VAR_14 = &FUNC_16(VAR_13)->mad.adapter_info;
 struct mad_adapter_info_data *VAR_15;
 uint VAR_16 = 0;
 dma_addr_t VAR_17;
 long VAR_18;

 VAR_14->common.status = FUNC_4(VAR_11);

 if (FUNC_0(VAR_14->common.length) > sizeof(*VAR_15)) {
  VAR_14->common.status = FUNC_4(VAR_10);
  return 0;
 }

 VAR_15 = FUNC_9(&VAR_12->dma_dev->dev, sizeof(*VAR_15), &VAR_17,
      VAR_2);
 if (!VAR_15) {
  FUNC_7(&VAR_12->dev, "bad dma_alloc_coherent %p\n",
   VAR_13->target);
  VAR_14->common.status = FUNC_4(VAR_10);
  return 0;
 }


 VAR_18 = FUNC_12(FUNC_0(VAR_14->common.length),
    VAR_12->dds.window[VAR_7].liobn,
    FUNC_2(VAR_14->buffer),
    VAR_12->dds.window[VAR_4].liobn, VAR_17);

 if (VAR_18 != 128) {
  if (VAR_18 == 130) {
   if (FUNC_3(VAR_12))
    VAR_16 = (VAR_8 | VAR_0);
  }
  FUNC_8(&VAR_12->dev, "adapter_info: h_copy_rdma from client failed, rc %ld\n",
    VAR_18);
  FUNC_6(&VAR_12->dev, "adapter_info: ioba 0x%llx, flags 0x%x, flag_bits 0x%x\n",
   FUNC_2(VAR_14->buffer), VAR_12->flags, VAR_16);
  FUNC_13(VAR_12, VAR_1,
       VAR_16);
  goto free_dma;
 }






 if (VAR_12->client_data.partition_number == 0)
  VAR_12->client_data.partition_number =
   FUNC_1(VAR_15->partition_number);
 FUNC_15(VAR_12->client_data.srp_version, VAR_15->srp_version,
  sizeof(VAR_12->client_data.srp_version));
 FUNC_15(VAR_12->client_data.partition_name, VAR_15->partition_name,
  sizeof(VAR_12->client_data.partition_name));
 VAR_12->client_data.mad_version = FUNC_1(VAR_15->mad_version);
 VAR_12->client_data.os_type = FUNC_1(VAR_15->os_type);


 FUNC_15(VAR_15->srp_version, VAR_9,
  sizeof(VAR_15->srp_version));
 FUNC_15(VAR_15->partition_name, VAR_12->dds.partition_name,
  sizeof(VAR_15->partition_name));
 VAR_15->partition_number = FUNC_5(VAR_12->dds.partition_num);
 VAR_15->mad_version = FUNC_5(VAR_5);
 VAR_15->os_type = FUNC_5(VAR_3);
 FUNC_14(&VAR_15->port_max_txu[0], 0, sizeof(VAR_15->port_max_txu));
 VAR_15->port_max_txu[0] = FUNC_5(VAR_6);

 FUNC_11();
 VAR_18 = FUNC_12(sizeof(*VAR_15), VAR_12->dds.window[VAR_4].liobn,
    VAR_17, VAR_12->dds.window[VAR_7].liobn,
    FUNC_2(VAR_14->buffer));
 switch (VAR_18) {
 case 128:
  break;

 case 129:
 case 131:
 case 130:
  if (FUNC_3(VAR_12))
   VAR_16 = (VAR_8 | VAR_0);

 default:
  FUNC_7(&VAR_12->dev, "adapter_info: h_copy_rdma to client failed, rc %ld\n",
   VAR_18);
  FUNC_13(VAR_12,
       VAR_1,
       VAR_16);
  break;
 }

free_dma:
 FUNC_10(&VAR_12->dma_dev->dev, sizeof(*VAR_15), VAR_15, VAR_17);
 FUNC_6(&VAR_12->dev, "Leaving adapter_info, rc %ld\n", VAR_18);

 return VAR_18;
}
