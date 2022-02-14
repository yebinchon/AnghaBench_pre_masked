
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct be_vf_cfg {int mac_addr; int if_handle; int pmac_id; } ;
struct be_adapter {int num_vfs; TYPE_1__* pdev; struct be_vf_cfg* vf_cfg; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct be_adapter*,int *,int ,int *,int) ;
 int FUNC_2 (struct be_adapter*,int ,int ,int) ;
 int FUNC_3 (struct be_adapter*,int *,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int *,int,int) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 struct be_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_9(VAR_2);
 struct be_vf_cfg *VAR_6 = &VAR_5->vf_cfg[VAR_3];
 int VAR_7;

 if (!FUNC_10(VAR_5))
  return -VAR_1;

 if (!FUNC_8(VAR_4) || VAR_3 >= VAR_5->num_vfs)
  return -VAR_0;




 if (FUNC_7(VAR_4, VAR_6->mac_addr))
  return 0;

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_5, VAR_6->if_handle, VAR_6->pmac_id,
    VAR_3 + 1);

  VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_6->if_handle,
      &VAR_6->pmac_id, VAR_3 + 1);
 } else {
  VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_6->if_handle,
     VAR_3 + 1);
 }

 if (VAR_7) {
  FUNC_5(&VAR_5->pdev->dev, "MAC %pM set on VF %d Failed: %#x",
   VAR_4, VAR_3, VAR_7);
  return FUNC_4(VAR_7);
 }

 FUNC_6(VAR_6->mac_addr, VAR_4);

 return 0;
}
