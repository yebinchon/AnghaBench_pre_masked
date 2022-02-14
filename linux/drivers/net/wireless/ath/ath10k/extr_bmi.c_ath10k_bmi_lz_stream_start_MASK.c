
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* addr; } ;
struct bmi_cmd {TYPE_2__ lz_start; void* id; } ;
struct TYPE_3__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int) ;
 int FUNC_2 (struct ath10k*,struct bmi_cmd*,int,int *,int *) ;
 int FUNC_3 (struct ath10k*,char*) ;

int FUNC_4(struct ath10k *VAR_3, u32 VAR_4)
{
 struct bmi_cmd VAR_5;
 u32 VAR_6 = sizeof(VAR_5.id) + sizeof(VAR_5.lz_start);
 int VAR_7;

 FUNC_1(VAR_3, VAR_0, "bmi lz stream start address 0x%x\n",
     VAR_4);

 if (VAR_3->bmi.done_sent) {
  FUNC_3(VAR_3, "command disallowed\n");
  return -VAR_2;
 }

 VAR_5.id = FUNC_0(VAR_1);
 VAR_5.lz_start.addr = FUNC_0(VAR_4);

 VAR_7 = FUNC_2(VAR_3, &VAR_5, VAR_6, ((void*)0), ((void*)0));
 if (VAR_7) {
  FUNC_3(VAR_3, "unable to Start LZ Stream to the device\n");
  return VAR_7;
 }

 return 0;
}
