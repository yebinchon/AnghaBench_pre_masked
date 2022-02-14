
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct be_vf_cfg {int spoofchk; int if_handle; } ;
struct be_adapter {int num_vfs; TYPE_1__* pdev; struct be_vf_cfg* vf_cfg; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct be_adapter*,int ,int,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,int) ;
 struct be_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5, int VAR_6, bool VAR_7)
{
 struct be_adapter *VAR_8 = FUNC_4(VAR_5);
 struct be_vf_cfg *VAR_9 = &VAR_8->vf_cfg[VAR_6];
 u8 VAR_10;
 int VAR_11;

 if (!FUNC_5(VAR_8))
  return -VAR_4;

 if (VAR_6 >= VAR_8->num_vfs)
  return -VAR_1;

 if (FUNC_0(VAR_8))
  return -VAR_3;

 if (VAR_7 == VAR_9->spoofchk)
  return 0;

 VAR_10 = VAR_7 ? VAR_2 : VAR_0;

 VAR_11 = FUNC_1(VAR_8, 0, VAR_6 + 1, VAR_9->if_handle,
           0, VAR_10);
 if (VAR_11) {
  FUNC_3(&VAR_8->pdev->dev,
   "Spoofchk change on VF %d failed: %#x\n", VAR_6, VAR_11);
  return FUNC_2(VAR_11);
 }

 VAR_9->spoofchk = VAR_7;
 return 0;
}
