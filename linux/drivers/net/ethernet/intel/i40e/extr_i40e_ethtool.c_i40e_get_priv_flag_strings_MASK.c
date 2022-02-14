
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_4__ {scalar_t__ pf_id; } ;
struct i40e_pf {TYPE_1__ hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_6__ {char* flag_string; } ;
struct TYPE_5__ {char* flag_string; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5, u8 *VAR_6)
{
 struct i40e_netdev_priv *VAR_7 = FUNC_0(VAR_5);
 struct i40e_vsi *VAR_8 = VAR_7->vsi;
 struct i40e_pf *VAR_9 = VAR_8->back;
 char *VAR_10 = (char *)VAR_6;
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  FUNC_1(VAR_10, VAR_0, "%s",
    VAR_4[VAR_11].flag_string);
  VAR_10 += VAR_0;
 }
 if (VAR_9->hw.pf_id != 0)
  return;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_1(VAR_10, VAR_0, "%s",
    VAR_3[VAR_11].flag_string);
  VAR_10 += VAR_0;
 }
}
