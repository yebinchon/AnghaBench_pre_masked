
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int pkg_size; scalar_t__ pkg_copy; } ;
struct ice_pf {int flags; struct ice_hw hw; TYPE_1__* pdev; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct ice_hw*,int ,int ) ;
 int FUNC_3 (struct ice_hw*,scalar_t__,int ) ;
 int FUNC_4 (struct ice_hw*,int*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(const struct firmware *VAR_2, struct ice_pf *VAR_3)
{
 enum ice_status VAR_4 = VAR_0;
 struct device *VAR_5 = &VAR_3->pdev->dev;
 struct ice_hw *VAR_6 = &VAR_3->hw;


 if (VAR_2 && !VAR_6->pkg_copy) {
  VAR_4 = FUNC_2(VAR_6, VAR_2->data,
            VAR_2->size);
  FUNC_4(VAR_6, &VAR_4);
 } else if (!VAR_2 && VAR_6->pkg_copy) {

  VAR_4 = FUNC_3(VAR_6, VAR_6->pkg_copy, VAR_6->pkg_size);
  FUNC_4(VAR_6, &VAR_4);
 } else {
  FUNC_1(VAR_5,
   "The DDP package file failed to load. Entering Safe Mode.\n");
 }

 if (VAR_4) {

  FUNC_0(VAR_1, VAR_3->flags);
  return;
 }




 FUNC_5(VAR_1, VAR_3->flags);
}
