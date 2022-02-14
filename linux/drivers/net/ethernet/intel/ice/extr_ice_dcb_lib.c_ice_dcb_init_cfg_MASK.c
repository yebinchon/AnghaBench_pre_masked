
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_port_info {int local_dcbx_cfg; } ;
struct TYPE_4__ {struct ice_port_info* port_info; } ;
struct ice_pf {TYPE_1__* pdev; TYPE_2__ hw; } ;
struct ice_dcbx_cfg {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct ice_dcbx_cfg*) ;
 struct ice_dcbx_cfg* FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (struct ice_pf*,struct ice_dcbx_cfg*,int) ;
 int FUNC_4 (struct ice_dcbx_cfg*,int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ice_pf *VAR_3, bool VAR_4)
{
 struct ice_dcbx_cfg *VAR_5;
 struct ice_port_info *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_3->hw.port_info;
 VAR_5 = FUNC_2(&VAR_3->pdev->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_4(VAR_5, &VAR_6->local_dcbx_cfg, sizeof(*VAR_5));
 FUNC_5(&VAR_6->local_dcbx_cfg, 0, sizeof(*VAR_5));

 FUNC_0(&VAR_3->pdev->dev, "Configuring initial DCB values\n");
 if (FUNC_3(VAR_3, VAR_5, VAR_4))
  VAR_7 = -VAR_0;

 FUNC_1(&VAR_3->pdev->dev, VAR_5);

 return VAR_7;
}
