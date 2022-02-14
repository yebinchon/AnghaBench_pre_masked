
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {TYPE_2__* adapter; int tx_chan; } ;
struct fw_port_cmd {void* action_to_len16; void* op_to_portid; } ;
typedef int port_cmd ;
typedef int __be64 ;
struct TYPE_3__ {unsigned int fw_caps_support; } ;
struct TYPE_4__ {int mbox; TYPE_1__ params; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_port_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_port_cmd*,int ,int) ;
 int FUNC_6 (struct port_info*,int *) ;
 int FUNC_7 (TYPE_2__*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

int FUNC_8(struct port_info *VAR_6)
{
 unsigned int VAR_7 = VAR_6->adapter->params.fw_caps_support;
 struct fw_port_cmd VAR_8;
 int VAR_9;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.op_to_portid = FUNC_4(FUNC_0(VAR_5) |
         VAR_2 | VAR_1 |
         FUNC_3(VAR_6->tx_chan));
 VAR_8.action_to_len16 = FUNC_4(
  FUNC_2(VAR_7 == VAR_0
         ? VAR_3
         : VAR_4) |
  FUNC_1(VAR_8));
 VAR_9 = FUNC_7(VAR_6->adapter, VAR_6->adapter->mbox,
    &VAR_8, sizeof(VAR_8), &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_6(VAR_6, (__be64 *)&VAR_8);
 return 0;
}
