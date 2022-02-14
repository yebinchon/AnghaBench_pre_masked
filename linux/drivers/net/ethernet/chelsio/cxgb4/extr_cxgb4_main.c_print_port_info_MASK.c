
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pcaps; } ;
struct port_info {int port_type; TYPE_1__ link_cfg; struct adapter* adapter; } ;
struct net_device {int name; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_2__ vpd; } ;
struct adapter {int name; TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device const*,char*,int ,int ,int ,char*) ;
 struct port_info* FUNC_1 (struct net_device const*) ;
 int FUNC_2 (char*,char*,...) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct net_device *VAR_9)
{
 char VAR_10[80];
 char *VAR_11 = VAR_10;
 const struct port_info *VAR_12 = FUNC_1(VAR_9);
 const struct adapter *VAR_13 = VAR_12->adapter;

 if (VAR_12->link_cfg.pcaps & VAR_1)
  VAR_11 += FUNC_2(VAR_11, "100M/");
 if (VAR_12->link_cfg.pcaps & VAR_3)
  VAR_11 += FUNC_2(VAR_11, "1G/");
 if (VAR_12->link_cfg.pcaps & VAR_2)
  VAR_11 += FUNC_2(VAR_11, "10G/");
 if (VAR_12->link_cfg.pcaps & VAR_5)
  VAR_11 += FUNC_2(VAR_11, "25G/");
 if (VAR_12->link_cfg.pcaps & VAR_7)
  VAR_11 += FUNC_2(VAR_11, "40G/");
 if (VAR_12->link_cfg.pcaps & VAR_8)
  VAR_11 += FUNC_2(VAR_11, "50G/");
 if (VAR_12->link_cfg.pcaps & VAR_0)
  VAR_11 += FUNC_2(VAR_11, "100G/");
 if (VAR_12->link_cfg.pcaps & VAR_4)
  VAR_11 += FUNC_2(VAR_11, "200G/");
 if (VAR_12->link_cfg.pcaps & VAR_6)
  VAR_11 += FUNC_2(VAR_11, "400G/");
 if (VAR_11 != VAR_10)
  --VAR_11;
 FUNC_2(VAR_11, "BASE-%s", FUNC_3(VAR_12->port_type));

 FUNC_0(VAR_9, "%s: Chelsio %s (%s) %s\n",
      VAR_9->name, VAR_13->params.vpd.id, VAR_13->name, VAR_10);
}
