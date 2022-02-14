
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw2100_priv {int config; TYPE_1__* net_dev; int mac_addr; } ;
struct host_command {int host_command_parameters; int host_command_length; int host_command_sequence; int host_command; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ipw2100_priv *VAR_3, int VAR_4)
{
 struct host_command VAR_5 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = VAR_2
 };
 int VAR_6;

 FUNC_0("SET_MAC_ADDRESS\n");

 FUNC_1("enter\n");

 if (VAR_3->config & VAR_1) {
  FUNC_3(VAR_5.host_command_parameters, VAR_3->mac_addr, VAR_2);
  FUNC_3(VAR_3->net_dev->dev_addr, VAR_3->mac_addr, VAR_2);
 } else
  FUNC_3(VAR_5.host_command_parameters, VAR_3->net_dev->dev_addr,
         VAR_2);

 VAR_6 = FUNC_2(VAR_3, &VAR_5);

 FUNC_1("exit\n");
 return VAR_6;
}
