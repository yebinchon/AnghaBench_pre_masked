
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethsw_port_priv {int flood; int netdev; int idx; TYPE_1__* ethsw_data; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct ethsw_port_priv *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->ethsw_data->mc_io, 0,
       VAR_0->ethsw_data->dpsw_handle,
       VAR_0->idx, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0->netdev,
      "dpsw_if_set_flooding err %d\n", VAR_2);
  return VAR_2;
 }
 VAR_0->flood = VAR_1;

 return 0;
}
