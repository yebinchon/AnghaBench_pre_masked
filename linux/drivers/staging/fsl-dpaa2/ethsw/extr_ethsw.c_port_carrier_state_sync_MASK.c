
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethsw_port_priv {int link_state; int idx; TYPE_1__* ethsw_data; } ;
struct dpsw_link_state {int up; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int ,int ,struct dpsw_link_state*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct ethsw_port_priv *VAR_1 = FUNC_3(VAR_0);
 struct dpsw_link_state VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->ethsw_data->mc_io, 0,
         VAR_1->ethsw_data->dpsw_handle,
         VAR_1->idx, &VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_0, "dpsw_if_get_link_state() err %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_0(VAR_2.up > 1, "Garbage read into link_state");

 if (VAR_2.up != VAR_1->link_state) {
  if (VAR_2.up)
   FUNC_5(VAR_0);
  else
   FUNC_4(VAR_0);
  VAR_1->link_state = VAR_2.up;
 }
 return 0;
}
