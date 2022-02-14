
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_scsi_event_header {int wwnn; int wwpn; scalar_t__ lun; int subcategory; int event_type; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {int nlp_nodename; int nlp_portname; int nlp_fcp_info; int nlp_flag; } ;
struct lpfc_name {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef int scsi_event ;
struct TYPE_2__ {unsigned int id; int lun; struct Scsi_Host* host; } ;


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
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsi_Host*,int ,int,char*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct scsi_cmnd*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_5 (struct lpfc_vport*,unsigned int,int ,int ) ;
 struct lpfc_rport_data* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct lpfc_vport*,struct scsi_cmnd*,unsigned int,int ,int ) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct scsi_cmnd *VAR_12)
{
 struct Scsi_Host *VAR_13 = VAR_12->device->host;
 struct lpfc_vport *VAR_14 = (struct lpfc_vport *) VAR_13->hostdata;
 struct lpfc_rport_data *VAR_15;
 struct lpfc_nodelist *VAR_16;
 unsigned VAR_17 = VAR_12->device->id;
 uint64_t VAR_18 = VAR_12->device->lun;
 struct lpfc_scsi_event_header VAR_19;
 int VAR_20;

 VAR_15 = FUNC_6(VAR_12->device);
 if (!VAR_15 || !VAR_15->pnode) {
  FUNC_4(VAR_14, VAR_4, VAR_5,
     "0799 Target Reset rdata failure: rdata x%px\n",
     VAR_15);
  return VAR_0;
 }
 VAR_16 = VAR_15->pnode;
 VAR_20 = FUNC_0(VAR_12);
 if (VAR_20 != 0 && VAR_20 != VAR_11)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_14, VAR_12);
 if (VAR_20 == VAR_0) {
  FUNC_4(VAR_14, VAR_4, VAR_5,
   "0722 Target Reset rport failure: rdata x%px\n", VAR_15);
  if (VAR_16) {
   FUNC_9(VAR_13->host_lock);
   VAR_16->nlp_flag &= ~VAR_10;
   VAR_16->nlp_fcp_info &= ~VAR_9;
   FUNC_10(VAR_13->host_lock);
  }
  FUNC_5(VAR_14, VAR_17, VAR_18,
       VAR_6);
  return VAR_1;
 }

 VAR_19.event_type = VAR_3;
 VAR_19.subcategory = VAR_7;
 VAR_19.lun = 0;
 FUNC_8(VAR_19.wwpn, &VAR_16->nlp_portname, sizeof(struct lpfc_name));
 FUNC_8(VAR_19.wwnn, &VAR_16->nlp_nodename, sizeof(struct lpfc_name));

 FUNC_2(VAR_13, FUNC_1(),
  sizeof(VAR_19), (char *)&VAR_19, VAR_8);

 VAR_20 = FUNC_7(VAR_14, VAR_12, VAR_17, VAR_18,
     VAR_2);

 FUNC_4(VAR_14, VAR_4, VAR_5,
    "0723 SCSI layer issued Target Reset (%d, %llu) "
    "return x%x\n", VAR_17, VAR_18, VAR_20);







 if (VAR_20 == VAR_11)
  VAR_20 = FUNC_5(VAR_14, VAR_17, VAR_18,
       VAR_6);
 return VAR_20;
}
