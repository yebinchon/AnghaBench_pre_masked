
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct be_adapter {int num_vfs; TYPE_2__* vf_cfg; TYPE_1__* pdev; } ;
struct TYPE_4__ {int plink_tracking; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,int) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, int VAR_3,
    int VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (!FUNC_4(VAR_5))
  return -VAR_1;

 if (VAR_3 >= VAR_5->num_vfs)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_3+1);
 if (VAR_6) {
  FUNC_2(&VAR_5->pdev->dev,
   "Link state change on VF %d failed: %#x\n", VAR_3, VAR_6);
  return FUNC_1(VAR_6);
 }

 VAR_5->vf_cfg[VAR_3].plink_tracking = VAR_4;

 return 0;
}
