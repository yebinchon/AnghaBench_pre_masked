
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_device {struct lpfc_device_data* hostdata; int lun; TYPE_1__* host; } ;
struct lpfc_vport {int cfg_lun_queue_depth; int fc_portname; struct lpfc_hba* phba; } ;
struct TYPE_4__ {int wwn; } ;
struct lpfc_name {TYPE_2__ u; } ;
struct lpfc_hba {scalar_t__ sli_rev; int total_scsi_bufs; int cfg_hba_queue_depth; int sdev_cnt; int devicelock; int luns; int cfg_XLanePriority; scalar_t__ cfg_fof; } ;
struct lpfc_device_data {int available; struct lpfc_device_data* rport_data; int listentry; } ;
struct fc_rport {struct lpfc_device_data* dd_data; int port_name; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct lpfc_device_data* FUNC_0 (struct lpfc_hba*,int *,int *,struct lpfc_name*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct fc_rport*) ;
 int FUNC_3 (int *,int *) ;
 struct lpfc_device_data* FUNC_4 (struct lpfc_hba*,int *,struct lpfc_name*,int ,int ,int) ;
 int FUNC_5 (struct lpfc_vport*,int) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 int FUNC_7 (struct scsi_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct fc_rport* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct scsi_device *VAR_7)
{
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *) VAR_7->host->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 struct fc_rport *VAR_10 = FUNC_10(FUNC_7(VAR_7));
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;
 int VAR_13 = 0;
 uint32_t VAR_14;
 struct lpfc_device_data *VAR_15;
 unsigned long VAR_16;
 struct lpfc_name VAR_17;

 if (!VAR_10 || FUNC_2(VAR_10))
  return -VAR_1;

 if (VAR_9->cfg_fof) {






  FUNC_11(VAR_10->port_name, VAR_17.u.wwn);
  FUNC_8(&VAR_9->devicelock, VAR_16);
  VAR_15 = FUNC_0(VAR_9,
           &VAR_9->luns,
           &VAR_8->fc_portname,
           &VAR_17,
           VAR_7->lun);
  if (!VAR_15) {
   FUNC_9(&VAR_9->devicelock, VAR_16);
   VAR_15 = FUNC_4(VAR_9,
       &VAR_8->fc_portname,
       &VAR_17,
       VAR_7->lun,
       VAR_9->cfg_XLanePriority,
       1);
   if (!VAR_15)
    return -VAR_0;
   FUNC_8(&VAR_9->devicelock, VAR_16);
   FUNC_3(&VAR_15->listentry, &VAR_9->luns);
  }
  VAR_15->rport_data = VAR_10->dd_data;
  VAR_15->available = 1;
  FUNC_9(&VAR_9->devicelock, VAR_16);
  VAR_7->hostdata = VAR_15;
 } else {
  VAR_7->hostdata = VAR_10->dd_data;
 }
 VAR_14 = FUNC_1(&VAR_9->sdev_cnt);


 if (VAR_9->sli_rev == VAR_6)
  return 0;
 VAR_11 = VAR_9->total_scsi_bufs;
 VAR_12 = VAR_8->cfg_lun_queue_depth + 2;


 if ((VAR_14 * (VAR_8->cfg_lun_queue_depth + 2)) < VAR_11)
  return 0;


 if (VAR_11 >= VAR_9->cfg_hba_queue_depth - VAR_5 ) {
  FUNC_6(VAR_8, VAR_3, VAR_4,
     "0704 At limitation of %d preallocated "
     "command buffers\n", VAR_11);
  return 0;

 } else if (VAR_11 + VAR_12 >
  VAR_9->cfg_hba_queue_depth - VAR_5 ) {
  FUNC_6(VAR_8, VAR_3, VAR_4,
     "0705 Allocation request of %d "
     "command buffers will exceed max of %d.  "
     "Reducing allocation request to %d.\n",
     VAR_12, VAR_9->cfg_hba_queue_depth,
     (VAR_9->cfg_hba_queue_depth - VAR_11));
  VAR_12 = VAR_9->cfg_hba_queue_depth - VAR_11;
 }
 VAR_13 = FUNC_5(VAR_8, VAR_12);
 if (VAR_12 != VAR_13) {
   FUNC_6(VAR_8, VAR_2, VAR_4,
      "0708 Allocation request of %d "
      "command buffers did not succeed.  "
      "Allocated %d buffers.\n",
      VAR_12, VAR_13);
 }
 if (VAR_13 > 0)
  VAR_9->total_scsi_bufs += VAR_13;
 return 0;
}
