
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int mtu; } ;
struct ethsw_port_priv {int idx; TYPE_1__* ethsw_data; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 struct ethsw_port_priv *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->ethsw_data->mc_io,
        0,
        VAR_2->ethsw_data->dpsw_handle,
        VAR_2->idx,
        (u16)FUNC_0(VAR_1));
 if (VAR_3) {
  FUNC_2(VAR_0,
      "dpsw_if_set_max_frame_length() err %d\n", VAR_3);
  return VAR_3;
 }

 VAR_0->mtu = VAR_1;
 return 0;
}
