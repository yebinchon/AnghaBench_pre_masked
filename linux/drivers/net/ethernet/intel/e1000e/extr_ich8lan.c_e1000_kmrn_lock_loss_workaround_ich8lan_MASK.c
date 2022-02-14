
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_dev_spec_ich8lan {int kmrn_lock_loss_workaround_enabled; } ;
struct TYPE_2__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_6)
{
 struct e1000_dev_spec_ich8lan *VAR_7 = &VAR_6->dev_spec.ich8lan;
 u32 VAR_8;
 s32 VAR_9;
 u16 VAR_10, VAR_11;
 bool VAR_12;

 if (!VAR_7->kmrn_lock_loss_workaround_enabled)
  return 0;





 VAR_9 = FUNC_2(VAR_6, 1, 0, &VAR_12);
 if (!VAR_12)
  return 0;

 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {

  VAR_9 = FUNC_3(VAR_6, VAR_3, &VAR_11);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_3(VAR_6, VAR_3, &VAR_11);
  if (VAR_9)
   return VAR_9;


  if (!(VAR_11 & VAR_4))
   return 0;


  FUNC_0(VAR_6);
  FUNC_6(5);
 }

 VAR_8 = FUNC_4(VAR_5);
 VAR_8 |= (VAR_1 |
       VAR_2);
 FUNC_5(VAR_5, VAR_8);




 FUNC_1(VAR_6);


 return -VAR_0;
}
