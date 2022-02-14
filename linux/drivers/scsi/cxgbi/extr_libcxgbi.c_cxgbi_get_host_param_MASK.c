
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char sockaddr ;
struct cxgbi_sock {int saddr; } ;
struct cxgbi_hba {TYPE_1__* ndev; int port_id; int cdev; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;
struct TYPE_2__ {char* name; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 struct cxgbi_sock* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct Scsi_Host*,int,char*) ;
 struct cxgbi_hba* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int,char*,char*,...) ;
 int FUNC_4 (int ,struct Scsi_Host*,char*) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,int ,int) ;

int FUNC_7(struct Scsi_Host *VAR_3, enum iscsi_host_param VAR_4,
   char *VAR_5)
{
 struct cxgbi_hba *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = 0;

 if (!VAR_6->ndev) {
  FUNC_4(VAR_2, VAR_3, "Could not get host param. "
    "netdev for host not set.\n");
  return -VAR_1;
 }

 FUNC_3(1 << VAR_0,
  "shost 0x%p, hba 0x%p,%s, param %d.\n",
  VAR_3, VAR_6, VAR_6->ndev->name, VAR_4);

 switch (VAR_4) {
 case 130:
  VAR_7 = FUNC_6(VAR_5, VAR_6->ndev->dev_addr, 6);
  break;
 case 128:
  VAR_7 = FUNC_5(VAR_5, "%s\n", VAR_6->ndev->name);
  break;
 case 129:
 {
  struct cxgbi_sock *VAR_8 = FUNC_0(VAR_6->cdev,
          VAR_6->port_id);
  if (VAR_8) {
   VAR_7 = FUNC_5(VAR_5, "%pIS",
          (struct sockaddr *)&VAR_8->saddr);
  }
  FUNC_3(1 << VAR_0,
     "hba %s, addr %s.\n", VAR_6->ndev->name, VAR_5);
  break;
 }
 default:
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 return VAR_7;
}
