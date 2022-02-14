
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_iface {int iface_type; } ;
struct beiscsi_hba {int ipv6_iface; int ipv4_iface; int state; } ;
struct TYPE_2__ {char addr; } ;
struct be_cmd_get_def_gateway_resp {TYPE_1__ ip_addr; } ;
struct Scsi_Host {int dummy; } ;
typedef int gateway ;
typedef enum iscsi_param_type { ____Placeholder_iscsi_param_type } iscsi_param_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct beiscsi_hba*,struct iscsi_iface*,int,char*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,struct be_cmd_get_def_gateway_resp*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 struct beiscsi_hba* FUNC_4 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_5 (struct iscsi_iface*) ;
 int FUNC_6 (struct be_cmd_get_def_gateway_resp*,int ,int) ;
 int FUNC_7 (char*,char*,char*) ;

int FUNC_8(struct iscsi_iface *VAR_8,
       enum iscsi_param_type VAR_9,
       int VAR_10, char *VAR_11)
{
 struct Scsi_Host *VAR_12 = FUNC_5(VAR_8);
 struct beiscsi_hba *VAR_13 = FUNC_4(VAR_12);
 struct be_cmd_get_def_gateway_resp VAR_14;
 int VAR_15 = -VAR_3;

 if (VAR_9 != VAR_6)
  return 0;
 if (!FUNC_1(VAR_13)) {
  FUNC_3(VAR_13, VAR_7, VAR_1,
       "BS_%d : HBA in error 0x%lx\n", VAR_13->state);
  return -VAR_2;
 }

 switch (VAR_10) {
 case 135:
 case 132:
 case 134:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_15 = FUNC_0(VAR_13, VAR_8, VAR_10, VAR_11);
  break;
 case 136:
  if (VAR_8->iface_type == VAR_4)
   VAR_15 = FUNC_7(VAR_11, "%s\n",
          VAR_13->ipv4_iface ? "enable" : "disable");
  else if (VAR_8->iface_type == VAR_5)
   VAR_15 = FUNC_7(VAR_11, "%s\n",
          VAR_13->ipv6_iface ? "enable" : "disable");
  break;
 case 133:
  FUNC_6(&VAR_14, 0, sizeof(VAR_14));
  VAR_15 = FUNC_2(VAR_13, VAR_0, &VAR_14);
  if (!VAR_15)
   VAR_15 = FUNC_7(VAR_11, "%pI4\n", &VAR_14.ip_addr.addr);
  break;
 }

 return VAR_15;
}
