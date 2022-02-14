
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct ice_pf {int state; int pfr_count; struct ice_hw hw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef enum ice_reset_req { ____Placeholder_ice_reset_req } ice_reset_req ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct ice_pf*) ;
 int FUNC_5 (struct ice_pf*,int) ;
 scalar_t__ FUNC_6 (struct ice_hw*,int) ;
 int FUNC_7 (struct ice_pf*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct ice_pf *VAR_7, enum ice_reset_req VAR_8)
{
 struct device *VAR_9 = &VAR_7->pdev->dev;
 struct ice_hw *VAR_10 = &VAR_7->hw;

 FUNC_2(VAR_9, "reset_type 0x%x requested\n", VAR_8);
 FUNC_0(FUNC_8());

 FUNC_4(VAR_7);


 if (FUNC_6(VAR_10, VAR_8)) {
  FUNC_3(VAR_9, "reset %d failed\n", VAR_8);
  FUNC_9(VAR_5, VAR_7->state);
  FUNC_1(VAR_6, VAR_7->state);
  FUNC_1(VAR_4, VAR_7->state);
  FUNC_1(VAR_3, VAR_7->state);
  FUNC_1(VAR_1, VAR_7->state);
  FUNC_1(VAR_2, VAR_7->state);
  return;
 }





 if (VAR_8 == VAR_0) {
  VAR_7->pfr_count++;
  FUNC_5(VAR_7, VAR_8);
  FUNC_1(VAR_4, VAR_7->state);
  FUNC_1(VAR_3, VAR_7->state);
  FUNC_7(VAR_7, 1);
 }
}
