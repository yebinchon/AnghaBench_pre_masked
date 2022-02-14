
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct se_wwn {int dummy; } ;
struct tcm_qla2xxx_lport {int lport_fcport_map; int lport_loopid_map; struct se_wwn lport_wwn; int lport_naa_name; int * lport_name; scalar_t__ lport_wwpn; } ;
struct target_fabric_configfs {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct se_wwn* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcm_qla2xxx_lport*) ;
 struct tcm_qla2xxx_lport* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct tcm_qla2xxx_lport*,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int ,char*,unsigned long long) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (struct tcm_qla2xxx_lport*) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (char const*,scalar_t__*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct se_wwn *FUNC_11(
 struct target_fabric_configfs *VAR_6,
 struct config_group *VAR_7,
 const char *VAR_8)
{
 struct tcm_qla2xxx_lport *VAR_9;
 u64 VAR_10;
 int VAR_11 = -VAR_1;

 if (FUNC_9(VAR_8, &VAR_10, 1) < 0)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_3(sizeof(struct tcm_qla2xxx_lport), VAR_3);
 if (!VAR_9) {
  FUNC_4("Unable to allocate struct tcm_qla2xxx_lport\n");
  return FUNC_0(-VAR_2);
 }
 VAR_9->lport_wwpn = VAR_10;
 FUNC_7(&VAR_9->lport_name[0], VAR_4,
    VAR_10);
 FUNC_6(VAR_9->lport_naa_name, "naa.%016llx", (unsigned long long) VAR_10);

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11 != 0)
  goto out;

 VAR_11 = FUNC_5(VAR_9, VAR_10, 0, 0,
     VAR_5);
 if (VAR_11 != 0)
  goto out_lport;

 return &VAR_9->lport_wwn;
out_lport:
 FUNC_10(VAR_9->lport_loopid_map);
 FUNC_1(&VAR_9->lport_fcport_map);
out:
 FUNC_2(VAR_9);
 return FUNC_0(VAR_11);
}
