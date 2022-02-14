
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct typec_device_id {int member_1; int member_0; } ;
struct typec_altmode {int dummy; } ;
struct notifier_block {int dummy; } ;
struct device {int dummy; } ;
struct altmode {struct typec_altmode adev; int nh; } ;


 int VAR_0 ;
 struct typec_altmode* FUNC_0 (struct device*) ;
 struct typec_altmode* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct notifier_block*) ;
 struct device* FUNC_4 (struct device*,int *,int *,int ) ;
 struct device* FUNC_5 (struct device*,struct typec_device_id*,int ) ;
 int FUNC_6 (struct device*) ;
 struct altmode* FUNC_7 (int ) ;
 int FUNC_8 (struct device*) ;
 int VAR_2 ;

struct typec_altmode *
FUNC_9(struct device *VAR_3, u16 VAR_4, u8 VAR_5,
    struct notifier_block *VAR_6)
{
 struct typec_device_id VAR_7 = { VAR_4, VAR_5, };
 struct device *VAR_8;
 struct device *VAR_9;
 struct altmode *VAR_10;
 int VAR_11;


 VAR_9 = FUNC_4(VAR_3, ((void*)0), ((void*)0),
      VAR_2);
 if (FUNC_2(VAR_9))
  return VAR_9 ? FUNC_0(VAR_9) : FUNC_1(-VAR_0);


 VAR_8 = FUNC_5(VAR_9, &VAR_7, VAR_1);

 FUNC_6(VAR_9);

 if (!VAR_8)
  return FUNC_1(-VAR_0);

 VAR_10 = FUNC_7(FUNC_8(VAR_8));


 VAR_11 = FUNC_3(&VAR_10->nh, VAR_6);
 if (VAR_11) {
  FUNC_6(VAR_8);
  return FUNC_1(VAR_11);
 }

 return &VAR_10->adev;
}
