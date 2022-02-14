
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int payload; void* len; } ;
struct bmi_cmd {TYPE_2__ lz_data; void* id; } ;
struct TYPE_3__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,void const*,int) ;
 int FUNC_3 (struct ath10k*,struct bmi_cmd*,int,int *,int *) ;
 int FUNC_4 (struct ath10k*,char*) ;
 int FUNC_5 (int ,void const*,int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct ath10k *VAR_4, const void *VAR_5, u32 VAR_6)
{
 struct bmi_cmd VAR_7;
 u32 VAR_8 = sizeof(VAR_7.id) + sizeof(VAR_7.lz_data);
 u32 VAR_9;
 int VAR_10;

 FUNC_2(VAR_4, VAR_0, "bmi lz data buffer 0x%pK length %d\n",
     VAR_5, VAR_6);

 if (VAR_4->bmi.done_sent) {
  FUNC_4(VAR_4, "command disallowed\n");
  return -VAR_3;
 }

 while (VAR_6) {
  VAR_9 = FUNC_6(VAR_6, VAR_2 - VAR_8);

  FUNC_0(VAR_9 & 3);

  VAR_7.id = FUNC_1(VAR_1);
  VAR_7.lz_data.len = FUNC_1(VAR_9);
  FUNC_5(VAR_7.lz_data.payload, VAR_5, VAR_9);

  VAR_10 = FUNC_3(VAR_4, &VAR_7, VAR_8 + VAR_9,
        ((void*)0), ((void*)0));
  if (VAR_10) {
   FUNC_4(VAR_4, "unable to write to the device\n");
   return VAR_10;
  }

  VAR_5 += VAR_9;
  VAR_6 -= VAR_9;
 }

 return 0;
}
