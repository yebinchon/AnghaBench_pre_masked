
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct viosrp_crq {int IU_data_ptr; int IU_length; } ;
struct TYPE_5__ {TYPE_1__* window; } ;
struct scsi_info {int dev; TYPE_2__ dds; } ;
struct iu_entry {scalar_t__ iu_len; int remote_token; TYPE_3__* sbuf; } ;
struct ibmvscsis_cmd {int init_time; struct iu_entry* iue; } ;
struct TYPE_6__ {int dma; } ;
struct TYPE_4__ {int liobn; } ;


 int VAR_0 ;
 int VAR_1 ;




 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 long VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_info*) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*,long) ;
 long FUNC_5 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_6 (struct scsi_info*,int ,int) ;
 int FUNC_7 () ;

__attribute__((used)) static long FUNC_8(struct scsi_info *VAR_7,
          struct ibmvscsis_cmd *VAR_8,
          struct viosrp_crq *VAR_9)
{
 struct iu_entry *VAR_10 = VAR_8->iue;
 long VAR_11 = 0;
 u16 VAR_12;

 VAR_12 = FUNC_0(VAR_9->IU_length);
 if ((VAR_12 > VAR_5) || (VAR_12 == 0)) {
  FUNC_4(&VAR_7->dev, "copy_crq: Invalid len %d passed", VAR_12);
  FUNC_6(VAR_7, VAR_1, 0);
  return VAR_6;
 }

 VAR_11 = FUNC_5(VAR_12, VAR_7->dds.window[VAR_3].liobn,
    FUNC_1(VAR_9->IU_data_ptr),
    VAR_7->dds.window[VAR_2].liobn, VAR_10->sbuf->dma);

 switch (VAR_11) {
 case 128:
  VAR_8->init_time = FUNC_7();
  VAR_10->remote_token = VAR_9->IU_data_ptr;
  VAR_10->iu_len = VAR_12;
  FUNC_3(&VAR_7->dev, "copy_crq: ioba 0x%llx, init_time 0x%llx\n",
   FUNC_1(VAR_9->IU_data_ptr), VAR_8->init_time);
  break;
 case 130:
  if (FUNC_2(VAR_7))
   FUNC_6(VAR_7,
        VAR_1,
        (VAR_4 |
         VAR_0));
  else
   FUNC_6(VAR_7,
        VAR_1, 0);

  FUNC_4(&VAR_7->dev, "copy_crq: h_copy_rdma failed, rc %ld\n",
   VAR_11);
  break;
 case 131:
 case 129:
 default:
  FUNC_4(&VAR_7->dev, "copy_crq: h_copy_rdma failed, rc %ld\n",
   VAR_11);
  FUNC_6(VAR_7, VAR_1, 0);
  break;
 }

 return VAR_11;
}
