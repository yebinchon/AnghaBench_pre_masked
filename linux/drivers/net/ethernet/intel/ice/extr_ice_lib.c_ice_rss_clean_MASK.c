
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {int rss_lut_user; int rss_hkey_user; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ice_vsi *VAR_0)
{
 struct ice_pf *VAR_1;

 VAR_1 = VAR_0->back;

 if (VAR_0->rss_hkey_user)
  FUNC_0(&VAR_1->pdev->dev, VAR_0->rss_hkey_user);
 if (VAR_0->rss_lut_user)
  FUNC_0(&VAR_1->pdev->dev, VAR_0->rss_lut_user);
}
