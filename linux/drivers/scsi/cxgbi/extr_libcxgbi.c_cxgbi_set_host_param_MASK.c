
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_hba {TYPE_1__* ndev; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;
typedef int __be32 ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct cxgbi_hba*,int ) ;
 int FUNC_1 (char*) ;
 struct cxgbi_hba* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*,int,char*,int) ;
 int FUNC_4 (int,char*,int ,struct cxgbi_hba*,...) ;
 int FUNC_5 (int ,struct Scsi_Host*,char*) ;

int FUNC_6(struct Scsi_Host *VAR_3, enum iscsi_host_param VAR_4,
   char *VAR_5, int VAR_6)
{
 struct cxgbi_hba *VAR_7 = FUNC_2(VAR_3);

 if (!VAR_7->ndev) {
  FUNC_5(VAR_2, VAR_3, "Could not get host param. "
    "netdev for host not set.\n");
  return -VAR_1;
 }

 FUNC_4(1 << VAR_0,
  "shost 0x%p, hba 0x%p,%s, param %d, buf(%d) %s.\n",
  VAR_3, VAR_7, VAR_7->ndev->name, VAR_4, VAR_6, VAR_5);

 switch (VAR_4) {
 case 129:
 {
  __be32 VAR_8 = FUNC_1(VAR_5);
  FUNC_4(1 << VAR_0,
   "hba %s, req. ipv4 %pI4.\n", VAR_7->ndev->name, &VAR_8);
  FUNC_0(VAR_7, VAR_8);
  return 0;
 }
 case 130:
 case 128:
  return 0;
 default:
  return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
