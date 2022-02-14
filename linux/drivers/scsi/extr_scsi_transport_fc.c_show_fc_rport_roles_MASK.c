
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {int port_id; scalar_t__ roles; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (char*,int,char*) ;
 struct fc_rport* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3 (struct device *VAR_3, struct device_attribute *VAR_4,
       char *VAR_5)
{
 struct fc_rport *VAR_6 = FUNC_2(VAR_3);


 if ((VAR_6->port_id != -1) &&
     (VAR_6->port_id & VAR_1) ==
     VAR_1) {
  switch (VAR_6->port_id & VAR_2) {
  case 130:
   return FUNC_1(VAR_5, 30, "Fabric Port\n");
  case 131:
   return FUNC_1(VAR_5, 30, "Fabric Controller\n");
  case 132:
   return FUNC_1(VAR_5, 30, "Directory Server\n");
  case 128:
   return FUNC_1(VAR_5, 30, "Time Server\n");
  case 129:
   return FUNC_1(VAR_5, 30, "Management Server\n");
  default:
   return FUNC_1(VAR_5, 30, "Unknown Fabric Entity\n");
  }
 } else {
  if (VAR_6->roles == VAR_0)
   return FUNC_1(VAR_5, 20, "unknown\n");
  return FUNC_0(VAR_6->roles, VAR_5);
 }
}
