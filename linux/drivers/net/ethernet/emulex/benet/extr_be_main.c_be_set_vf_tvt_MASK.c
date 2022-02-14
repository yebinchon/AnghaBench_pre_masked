
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct be_vf_cfg {int if_handle; int privileges; } ;
struct be_adapter {TYPE_1__* pdev; struct be_vf_cfg* vf_cfg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int,int) ;
 int FUNC_1 (struct be_adapter*,scalar_t__,int,int,int ,int ) ;
 int FUNC_2 (struct be_adapter*,int,scalar_t__*,int,int) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct be_adapter *VAR_2, int VAR_3, u16 VAR_4)
{
 struct be_vf_cfg *VAR_5 = &VAR_2->vf_cfg[VAR_3];
 u16 VAR_6[VAR_0];
 int VAR_7 = VAR_5->if_handle;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_3 + 1, VAR_7, 0, 0);
 if (VAR_8)
  return VAR_8;


 VAR_6[0] = 0;
 VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_6, 1, VAR_3 + 1);
 if (!VAR_8)
  FUNC_3(&VAR_2->pdev->dev,
    "Cleared guest VLANs on VF%d", VAR_3);


 if (VAR_5->privileges & VAR_1) {
  VAR_8 = FUNC_0(VAR_2, VAR_5->privileges &
        ~VAR_1, VAR_3 + 1);
  if (!VAR_8)
   VAR_5->privileges &= ~VAR_1;
 }
 return 0;
}
