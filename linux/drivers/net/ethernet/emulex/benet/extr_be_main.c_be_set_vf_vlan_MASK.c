
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct be_vf_cfg {int vlan_tag; } ;
struct be_adapter {int num_vfs; TYPE_1__* pdev; struct be_vf_cfg* vf_cfg; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_adapter*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct be_adapter*,int,int) ;
 int FUNC_3 (int *,char*,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 struct be_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, int VAR_6, u16 VAR_7, u8 VAR_8,
     __be16 VAR_9)
{
 struct be_adapter *VAR_10 = FUNC_5(VAR_5);
 struct be_vf_cfg *VAR_11 = &VAR_10->vf_cfg[VAR_6];
 int VAR_12;

 if (!FUNC_6(VAR_10))
  return -VAR_1;

 if (VAR_6 >= VAR_10->num_vfs || VAR_7 > 4095 || VAR_8 > 7)
  return -VAR_0;

 if (VAR_9 != FUNC_4(VAR_3))
  return -VAR_2;

 if (VAR_7 || VAR_8) {
  VAR_7 |= VAR_8 << VAR_4;
  VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_7);
 } else {
  VAR_12 = FUNC_0(VAR_10, VAR_6);
 }

 if (VAR_12) {
  FUNC_3(&VAR_10->pdev->dev,
   "VLAN %d config on VF %d failed : %#x\n", VAR_7, VAR_6,
   VAR_12);
  return FUNC_1(VAR_12);
 }

 VAR_11->vlan_tag = VAR_7;
 return 0;
}
