
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_fw_core {struct gb_connection* mgmt_connection; } ;
struct gb_connection {int dummy; } ;
struct device {int dummy; } ;


 struct gb_fw_core* FUNC_0 (struct device*) ;

struct gb_connection *FUNC_1(struct device *VAR_0)
{
 struct gb_fw_core *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->mgmt_connection;
}
