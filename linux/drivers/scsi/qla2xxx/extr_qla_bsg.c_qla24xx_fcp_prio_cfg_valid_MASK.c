
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct qla_fcp_prio_entry {int flags; } ;
struct qla_fcp_prio_cfg {int num_entries; struct qla_fcp_prio_entry* entry; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int ,int *,int,char*,...) ;
 int VAR_1 ;

int
FUNC_2(scsi_qla_host_t *VAR_2,
 struct qla_fcp_prio_cfg *VAR_3, uint8_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 uint8_t *VAR_8;
 struct qla_fcp_prio_entry *VAR_9;
 uint32_t *VAR_10, VAR_11;

 VAR_6 = 1;
 VAR_7 = 0;
 VAR_8 = (uint8_t *)VAR_3;
 VAR_10 = (uint32_t *)VAR_3;
 VAR_11 = (uint32_t)(*VAR_10);

 if (VAR_11 == 0xFFFFFFFF) {

  FUNC_1(VAR_1, VAR_2, 0x7051,
      "No FCP Priority config data.\n");
  return 0;
 }

 if (FUNC_0(VAR_8, "HQOS", 4)) {

  FUNC_1(VAR_1, VAR_2, 0x7052,
      "Invalid FCP Priority data header. bcode=0x%x.\n",
      VAR_11);
  return 0;
 }
 if (VAR_4 != 1)
  return VAR_6;

 VAR_9 = &VAR_3->entry[0];
 for (VAR_5 = 0; VAR_5 < VAR_3->num_entries; VAR_5++) {
  if (VAR_9->flags & VAR_0)
   VAR_7++;
  VAR_9++;
 }

 if (VAR_7 == 0) {

  FUNC_1(VAR_1, VAR_2, 0x7053,
      "No valid FCP Priority data entries.\n");
  VAR_6 = 0;
 } else {

  FUNC_1(VAR_1, VAR_2, 0x7054,
      "Valid FCP priority data. num entries = %d.\n",
      VAR_7);
 }

 return VAR_6;
}
