
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct fc_lport {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bnx2fc_interface {int tm_timeout; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct fcoe_port* FUNC_1 (struct fc_lport*) ;
 struct fc_lport* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
 char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 struct fc_lport *VAR_4 = FUNC_2(VAR_3);
 struct fcoe_port *VAR_5 = FUNC_1(VAR_4);
 struct bnx2fc_interface *VAR_6 = VAR_5->priv;

 FUNC_3(VAR_2, "%u\n", VAR_6->tm_timeout);
 return FUNC_4(VAR_2);
}
