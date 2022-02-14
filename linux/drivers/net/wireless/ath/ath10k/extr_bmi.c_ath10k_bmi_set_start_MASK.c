
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* addr; } ;
struct bmi_cmd {TYPE_2__ set_app_start; void* id; } ;
struct TYPE_3__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,struct bmi_cmd*,int,int *,int *) ;
 int FUNC_2 (struct ath10k*,char*,...) ;

int FUNC_3(struct ath10k *VAR_2, u32 VAR_3)
{
 struct bmi_cmd VAR_4;
 u32 VAR_5 = sizeof(VAR_4.id) + sizeof(VAR_4.set_app_start);
 int VAR_6;

 if (VAR_2->bmi.done_sent) {
  FUNC_2(VAR_2, "bmi set start command disallowed\n");
  return -VAR_1;
 }

 VAR_4.id = FUNC_0(VAR_0);
 VAR_4.set_app_start.addr = FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_2, &VAR_4, VAR_5, ((void*)0), ((void*)0));
 if (VAR_6) {
  FUNC_2(VAR_2, "unable to set start to the device:%d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
