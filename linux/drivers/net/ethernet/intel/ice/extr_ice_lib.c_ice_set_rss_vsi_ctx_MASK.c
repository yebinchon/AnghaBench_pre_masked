
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int q_opt_rss; } ;
struct ice_vsi_ctx {TYPE_2__ info; } ;
struct ice_vsi {int type; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ice_vsi_ctx *VAR_7, struct ice_vsi *VAR_8)
{
 u8 VAR_9, VAR_10;
 struct ice_pf *VAR_11;

 VAR_11 = VAR_8->back;

 switch (VAR_8->type) {
 case 129:

  VAR_9 = VAR_3;
  VAR_10 = VAR_6;
  break;
 case 128:

  VAR_9 = VAR_5;
  VAR_10 = VAR_6;
  break;
 case 130:
  FUNC_0(&VAR_11->pdev->dev, "Unsupported VSI type %d\n", VAR_8->type);
  return;
 default:
  FUNC_1(&VAR_11->pdev->dev, "Unknown VSI type %d\n", VAR_8->type);
  return;
 }

 VAR_7->info.q_opt_rss = ((VAR_9 << VAR_4) &
    VAR_2) |
    ((VAR_10 << VAR_1) &
     VAR_0);
}
