
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint ;
struct viosrp_crq {int IU_data_ptr; } ;
struct TYPE_8__ {TYPE_2__* window; } ;
struct scsi_info {int dev; int waiting_rsp; TYPE_3__ dds; } ;
struct mad_common {int tag; } ;
struct iu_entry {TYPE_1__* sbuf; } ;
struct TYPE_9__ {int len; int tag; int format; } ;
struct ibmvscsis_cmd {int list; TYPE_4__ rsp; struct iu_entry* iue; } ;
struct TYPE_10__ {int mad; } ;
struct TYPE_7__ {int liobn; } ;
struct TYPE_6__ {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_info*) ;
 int FUNC_2 (int *,char*,long) ;
 int FUNC_3 (int *,char*,long) ;
 int FUNC_4 () ;
 long FUNC_5 (int,int ,int ,int ,int ) ;
 int FUNC_6 (struct scsi_info*,struct ibmvscsis_cmd*) ;
 int FUNC_7 (struct scsi_info*,int ,int) ;
 int FUNC_8 (struct scsi_info*) ;
 int FUNC_9 (int *,int *) ;
 TYPE_5__* FUNC_10 (struct iu_entry*) ;

__attribute__((used)) static void FUNC_11(struct scsi_info *VAR_7,
        struct ibmvscsis_cmd *VAR_8,
        struct viosrp_crq *VAR_9)
{
 struct iu_entry *VAR_10 = VAR_8->iue;
 struct mad_common *VAR_11 = (struct mad_common *)&FUNC_10(VAR_10)->mad;
 uint VAR_12 = 0;
 long VAR_13;

 FUNC_4();
 VAR_13 = FUNC_5(sizeof(struct mad_common),
    VAR_7->dds.window[VAR_3].liobn, VAR_10->sbuf->dma,
    VAR_7->dds.window[VAR_4].liobn,
    FUNC_0(VAR_9->IU_data_ptr));
 if (!VAR_13) {
  VAR_8->rsp.format = VAR_6;
  VAR_8->rsp.len = sizeof(struct mad_common);
  VAR_8->rsp.tag = VAR_11->tag;
  FUNC_9(&VAR_8->list, &VAR_7->waiting_rsp);
  FUNC_8(VAR_7);
 } else {
  FUNC_2(&VAR_7->dev, "Error sending mad response, rc %ld\n",
   VAR_13);
  if (VAR_13 == VAR_2) {
   if (FUNC_1(VAR_7))
    VAR_12 = (VAR_5 | VAR_0);
  }
  FUNC_3(&VAR_7->dev, "mad: failed to copy to client, rc %ld\n",
   VAR_13);

  FUNC_6(VAR_7, VAR_8);
  FUNC_7(VAR_7, VAR_1,
       VAR_12);
 }
}
