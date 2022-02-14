
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct be_vf_cfg {int privileges; int if_handle; } ;
struct be_adapter {TYPE_1__* pdev; struct be_vf_cfg* vf_cfg; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int,int) ;
 int FUNC_1 (struct be_adapter*,int ,int,int ,int ,int ) ;
 int FUNC_2 (struct device*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct be_adapter *VAR_2, int VAR_3)
{
 struct be_vf_cfg *VAR_4 = &VAR_2->vf_cfg[VAR_3];
 struct device *VAR_5 = &VAR_2->pdev->dev;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3 + 1,
           VAR_4->if_handle, 0, 0);
 if (VAR_6)
  return VAR_6;


 if (!(VAR_4->privileges & VAR_0)) {
  VAR_6 = FUNC_0(VAR_2, VAR_4->privileges |
        VAR_0, VAR_3 + 1);
  if (!VAR_6) {
   VAR_4->privileges |= VAR_0;
   FUNC_2(VAR_5, "VF%d: FILTMGMT priv enabled", VAR_3);
  }
 }

 FUNC_2(VAR_5,
   "Disable/re-enable i/f in VM to clear Transparent VLAN tag");
 return 0;
}
