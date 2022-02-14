
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* len; void* addr; int payload; } ;
struct bmi_cmd {TYPE_2__ write_mem; void* id; } ;
struct TYPE_3__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_2 (struct ath10k*,struct bmi_cmd*,int,int *,int *) ;
 int FUNC_3 (struct ath10k*,char*,...) ;
 int FUNC_4 (int ,void const*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct ath10k *VAR_4,
       u32 VAR_5, const void *VAR_6, u32 VAR_7)
{
 struct bmi_cmd VAR_8;
 u32 VAR_9 = sizeof(VAR_8.id) + sizeof(VAR_8.write_mem);
 u32 VAR_10;
 int VAR_11;

 FUNC_1(VAR_4, VAR_0, "bmi write address 0x%x length %d\n",
     VAR_5, VAR_7);

 if (VAR_4->bmi.done_sent) {
  FUNC_3(VAR_4, "command disallowed\n");
  return -VAR_3;
 }

 while (VAR_7) {
  VAR_10 = FUNC_5(VAR_7, VAR_1 - VAR_9);


  FUNC_4(VAR_8.write_mem.payload, VAR_6, VAR_10);
  VAR_10 = FUNC_6(VAR_10, 4);

  VAR_8.id = FUNC_0(VAR_2);
  VAR_8.write_mem.addr = FUNC_0(VAR_5);
  VAR_8.write_mem.len = FUNC_0(VAR_10);

  VAR_11 = FUNC_2(VAR_4, &VAR_8, VAR_9 + VAR_10,
        ((void*)0), ((void*)0));
  if (VAR_11) {
   FUNC_3(VAR_4, "unable to write to the device (%d)\n",
        VAR_11);
   return VAR_11;
  }


  VAR_10 = FUNC_5(VAR_10, VAR_7);

  VAR_5 += VAR_10;
  VAR_6 += VAR_10;
  VAR_7 -= VAR_10;
 }

 return 0;
}
