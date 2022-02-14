
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_wwn {int dummy; } ;
struct vhost_scsi_tport {struct se_wwn tport_wwn; int * tport_name; int tport_proto_id; int tport_wwpn; } ;
struct target_fabric_configfs {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_wwn* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct vhost_scsi_tport*) ;
 struct vhost_scsi_tport* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char*) ;
 int FUNC_8 (struct vhost_scsi_tport*) ;

__attribute__((used)) static struct se_wwn *
FUNC_9(struct target_fabric_configfs *VAR_7,
       struct config_group *VAR_8,
       const char *VAR_9)
{
 struct vhost_scsi_tport *VAR_10;
 char *VAR_11;
 u64 VAR_12 = 0;
 int VAR_13 = 0;




 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_4("Unable to allocate struct vhost_scsi_tport");
  return FUNC_0(-VAR_1);
 }
 VAR_10->tport_wwpn = VAR_12;




 VAR_11 = FUNC_7(VAR_9, "naa.");
 if (VAR_11) {
  VAR_10->tport_proto_id = VAR_5;
  goto check_len;
 }
 VAR_11 = FUNC_7(VAR_9, "fc.");
 if (VAR_11) {
  VAR_10->tport_proto_id = VAR_3;
  VAR_13 = 3;
  goto check_len;
 }
 VAR_11 = FUNC_7(VAR_9, "iqn.");
 if (VAR_11) {
  VAR_10->tport_proto_id = VAR_4;
  goto check_len;
 }

 FUNC_4("Unable to locate prefix for emulated Target Port:"
   " %s\n", VAR_9);
 FUNC_1(VAR_10);
 return FUNC_0(-VAR_0);

check_len:
 if (FUNC_6(VAR_9) >= VAR_6) {
  FUNC_4("Emulated %s Address: %s, exceeds"
   " max: %d\n", VAR_9, FUNC_8(VAR_10),
   VAR_6);
  FUNC_1(VAR_10);
  return FUNC_0(-VAR_0);
 }
 FUNC_5(&VAR_10->tport_name[0], VAR_6, "%s", &VAR_9[VAR_13]);

 FUNC_3("TCM_VHost_ConfigFS: Allocated emulated Target"
  " %s Address: %s\n", FUNC_8(VAR_10), VAR_9);

 return &VAR_10->tport_wwn;
}
