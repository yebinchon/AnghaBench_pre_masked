
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int src_ip; int ip_type; int mac; } ;
struct Scsi_Host {int host_no; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;





 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*,int,char*) ;
 struct qedi_ctx* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_1,
          enum iscsi_host_param VAR_2, char *VAR_3)
{
 struct qedi_ctx *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 130:
  VAR_5 = FUNC_3(VAR_3, VAR_4->mac, 6);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_3, "host%d\n", VAR_1->host_no);
  break;
 case 129:
  if (VAR_4->ip_type == VAR_0)
   VAR_5 = FUNC_2(VAR_3, "%pI4\n", VAR_4->src_ip);
  else
   VAR_5 = FUNC_2(VAR_3, "%pI6\n", VAR_4->src_ip);
  break;
 default:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 }

 return VAR_5;
}
