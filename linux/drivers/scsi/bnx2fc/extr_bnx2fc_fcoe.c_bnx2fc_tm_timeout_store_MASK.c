
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct fc_lport {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bnx2fc_interface {scalar_t__ tm_timeout; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int*) ;
 struct fcoe_port* FUNC_2 (struct fc_lport*) ;
 struct fc_lport* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct fc_lport *VAR_6 = FUNC_3(VAR_5);
 struct fcoe_port *VAR_7 = FUNC_2(VAR_6);
 struct bnx2fc_interface *VAR_8 = VAR_7->priv;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_3, 10, &VAR_10);
 if (VAR_9)
  return VAR_9;
 if (VAR_10 > 255)
  return -VAR_0;

 VAR_8->tm_timeout = (u8)VAR_10;
 return FUNC_4(VAR_3);
}
