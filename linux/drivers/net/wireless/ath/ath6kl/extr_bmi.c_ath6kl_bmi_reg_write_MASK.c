
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_2__ {int max_cmd_size; int * cmd_buf; scalar_t__ done_sent; } ;
struct ath6kl {TYPE_1__ bmi; } ;
typedef int param ;
typedef int cid ;
typedef int addr ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,size_t) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ath6kl*,int *,size_t) ;
 int FUNC_4 (int *,size_t*,int) ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(struct ath6kl *VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_1;
 int VAR_8;
 u32 VAR_9;
 u16 VAR_10;

 if (VAR_4->bmi.done_sent) {
  FUNC_2("bmi done sent already, cmd %d disallowed\n", VAR_7);
  return -VAR_2;
 }

 VAR_10 = sizeof(VAR_7) + sizeof(VAR_5) + sizeof(VAR_6);
 if (VAR_10 > VAR_4->bmi.max_cmd_size) {
  FUNC_0(1);
  return -VAR_3;
 }
 FUNC_5(VAR_4->bmi.cmd_buf, 0, VAR_10);

 FUNC_1(VAR_0,
     "bmi write SOC reg: addr: 0x%x, param: %d\n",
      VAR_5, VAR_6);

 VAR_9 = 0;
 FUNC_4(&(VAR_4->bmi.cmd_buf[VAR_9]), &VAR_7, sizeof(VAR_7));
 VAR_9 += sizeof(VAR_7);
 FUNC_4(&(VAR_4->bmi.cmd_buf[VAR_9]), &VAR_5, sizeof(VAR_5));
 VAR_9 += sizeof(VAR_5);
 FUNC_4(&(VAR_4->bmi.cmd_buf[VAR_9]), &VAR_6, sizeof(VAR_6));
 VAR_9 += sizeof(VAR_6);

 VAR_8 = FUNC_3(VAR_4, VAR_4->bmi.cmd_buf, VAR_9);
 if (VAR_8) {
  FUNC_2("Unable to write to the device: %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
