
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct link_config {int pcaps; scalar_t__ autoneg; } ;
struct TYPE_7__ {void* rcap32; } ;
struct TYPE_6__ {void* rcap; } ;
struct TYPE_8__ {TYPE_3__ l1cfg32; TYPE_2__ l1cfg; } ;
struct fw_port_cmd {TYPE_4__ u; void* action_to_len16; void* op_to_portid; } ;
struct TYPE_5__ {unsigned int fw_caps_support; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;
typedef int fw_port_cap32_t ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct fw_port_cmd) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct fw_port_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,unsigned int,struct link_config*) ;
 int FUNC_9 (struct adapter*,unsigned int,struct fw_port_cmd*,int,int *,int ,int) ;

int FUNC_10(struct adapter *VAR_9, unsigned int VAR_10,
         unsigned int VAR_11, struct link_config *VAR_12,
         u8 VAR_13, int VAR_14)
{
 unsigned int VAR_15 = VAR_9->params.fw_caps_support;
 struct fw_port_cmd VAR_16;
 fw_port_cap32_t VAR_17;
 int VAR_18;

 if (!(VAR_12->pcaps & VAR_7) &&
     VAR_12->autoneg == VAR_0) {
  return -VAR_1;
 }




 VAR_17 = FUNC_8(VAR_9, VAR_11, VAR_12);
 FUNC_7(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.op_to_portid = FUNC_4(FUNC_0(VAR_8) |
           VAR_4 | VAR_3 |
           FUNC_3(VAR_11));
 VAR_16.action_to_len16 =
  FUNC_4(FUNC_2(VAR_15 == VAR_2
       ? VAR_5
       : VAR_6) |
       FUNC_1(VAR_16));
 if (VAR_15 == VAR_2)
  VAR_16.u.l1cfg.rcap = FUNC_4(FUNC_6(VAR_17));
 else
  VAR_16.u.l1cfg32.rcap32 = FUNC_4(VAR_17);

 VAR_18 = FUNC_9(VAR_9, VAR_10, &VAR_16, sizeof(VAR_16), ((void*)0),
          VAR_13, VAR_14);







 if (VAR_18) {
  FUNC_5(VAR_9->pdev_dev,
   "Requested Port Capabilities %#x rejected, error %d\n",
   VAR_17, -VAR_18);
  return VAR_18;
 }
 return 0;
}
