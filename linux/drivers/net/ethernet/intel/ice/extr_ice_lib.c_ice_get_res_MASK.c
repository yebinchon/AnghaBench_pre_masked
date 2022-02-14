
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ice_res_tracker {scalar_t__ num_entries; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ice_res_tracker*,scalar_t__,scalar_t__) ;

int
FUNC_2(struct ice_pf *VAR_2, struct ice_res_tracker *VAR_3, u16 VAR_4, u16 VAR_5)
{
 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 if (!VAR_4 || VAR_4 > VAR_3->num_entries || VAR_5 >= VAR_1) {
  FUNC_0(&VAR_2->pdev->dev,
   "param err: needed=%d, num_entries = %d id=0x%04x\n",
   VAR_4, VAR_3->num_entries, VAR_5);
  return -VAR_0;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
