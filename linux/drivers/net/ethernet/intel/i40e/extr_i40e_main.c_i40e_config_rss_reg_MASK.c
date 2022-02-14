
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40e_vsi {scalar_t__ vf_id; scalar_t__ type; struct i40e_pf* back; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (size_t) ;
 size_t VAR_3 ;
 int FUNC_2 (size_t,scalar_t__) ;
 size_t VAR_4 ;
 int FUNC_3 (size_t,scalar_t__) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct i40e_vsi *VAR_9, const u8 *VAR_10,
          const u8 *VAR_11, u16 VAR_12)
{
 struct i40e_pf *VAR_13 = VAR_9->back;
 struct i40e_hw *VAR_14 = &VAR_13->hw;
 u16 VAR_15 = VAR_9->vf_id;
 u8 VAR_16;


 if (VAR_10) {
  u32 *VAR_17 = (u32 *)VAR_10;

  if (VAR_9->type == VAR_7) {
   for (VAR_16 = 0; VAR_16 <= VAR_2; VAR_16++)
    FUNC_6(VAR_14, FUNC_0(VAR_16), VAR_17[VAR_16]);
  } else if (VAR_9->type == VAR_8) {
   for (VAR_16 = 0; VAR_16 <= VAR_4; VAR_16++)
    FUNC_6(VAR_14, FUNC_2(VAR_16, VAR_15), VAR_17[VAR_16]);
  } else {
   FUNC_4(&VAR_13->pdev->dev, "Cannot set RSS seed - invalid VSI type\n");
  }
 }

 if (VAR_11) {
  u32 *VAR_18 = (u32 *)VAR_11;

  if (VAR_9->type == VAR_7) {
   if (VAR_12 != VAR_1)
    return -VAR_0;
   for (VAR_16 = 0; VAR_16 <= VAR_3; VAR_16++)
    FUNC_6(VAR_14, FUNC_1(VAR_16), VAR_18[VAR_16]);
  } else if (VAR_9->type == VAR_8) {
   if (VAR_12 != VAR_6)
    return -VAR_0;
   for (VAR_16 = 0; VAR_16 <= VAR_5; VAR_16++)
    FUNC_6(VAR_14, FUNC_3(VAR_16, VAR_15), VAR_18[VAR_16]);
  } else {
   FUNC_4(&VAR_13->pdev->dev, "Cannot set RSS LUT - invalid VSI type\n");
  }
 }
 FUNC_5(VAR_14);

 return 0;
}
