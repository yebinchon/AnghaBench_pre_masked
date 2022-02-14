
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct se_wwn {int dummy; } ;
struct tcm_qla2xxx_lport {int lport_fcport_map; int lport_loopid_map; struct se_wwn lport_wwn; int lport_naa_name; void* lport_npiv_wwnn; void* lport_npiv_wwpn; } ;
struct target_fabric_configfs {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_wwn* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcm_qla2xxx_lport*) ;
 struct tcm_qla2xxx_lport* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct tcm_qla2xxx_lport*,void*,void*,void*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (int ,char*,unsigned long long) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (struct tcm_qla2xxx_lport*) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (char*,scalar_t__,void**,void**) ;
 scalar_t__ FUNC_12 (char*,void**,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct se_wwn *FUNC_14(
 struct target_fabric_configfs *VAR_4,
 struct config_group *VAR_5,
 const char *VAR_6)
{
 struct tcm_qla2xxx_lport *VAR_7;
 u64 VAR_8, VAR_9, VAR_10;
 char *VAR_11, VAR_12[128];
 int VAR_13;

 FUNC_6(VAR_12, 128, "%s", VAR_6);

 VAR_11 = FUNC_8(VAR_12, '@');
 if (!VAR_11) {
  FUNC_4("Unable to locate NPIV '@' separator\n");
  return FUNC_0(-VAR_0);
 }
 *VAR_11++ = '\0';

 if (FUNC_12(VAR_12, &VAR_8, 1) < 0)
  return FUNC_0(-VAR_0);

 if (FUNC_11(VAR_11, FUNC_9(VAR_11)+1,
           &VAR_9, &VAR_10) < 0)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_3(sizeof(struct tcm_qla2xxx_lport), VAR_2);
 if (!VAR_7) {
  FUNC_4("Unable to allocate struct tcm_qla2xxx_lport for NPIV\n");
  return FUNC_0(-VAR_1);
 }
 VAR_7->lport_npiv_wwpn = VAR_9;
 VAR_7->lport_npiv_wwnn = VAR_10;
 FUNC_7(VAR_7->lport_naa_name, "naa.%016llx", (unsigned long long) VAR_9);

 VAR_13 = FUNC_10(VAR_7);
 if (VAR_13 != 0)
  goto out;

 VAR_13 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10,
     VAR_3);
 if (VAR_13 != 0)
  goto out_lport;

 return &VAR_7->lport_wwn;
out_lport:
 FUNC_13(VAR_7->lport_loopid_map);
 FUNC_1(&VAR_7->lport_fcport_map);
out:
 FUNC_2(VAR_7);
 return FUNC_0(VAR_13);
}
