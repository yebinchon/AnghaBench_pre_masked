
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct i40e_vsi {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct i40e_vsi*,scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (size_t,int ) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, u32 *VAR_5, u8 *VAR_6,
    u8 *VAR_7)
{
 struct i40e_netdev_priv *VAR_8 = FUNC_3(VAR_4);
 struct i40e_vsi *VAR_9 = VAR_8->vsi;
 u8 *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12;
 u16 VAR_13;

 if (VAR_7)
  *VAR_7 = VAR_1;

 if (!VAR_5)
  return 0;

 VAR_11 = VAR_6;
 VAR_10 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_10)
  return -VAR_0;
 VAR_12 = FUNC_0(VAR_9, VAR_11, VAR_10, VAR_3);
 if (VAR_12)
  goto out;
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  VAR_5[VAR_13] = (u32)(VAR_10[VAR_13]);

out:
 FUNC_1(VAR_10);

 return VAR_12;
}
