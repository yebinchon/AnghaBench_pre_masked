
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ max_data_size; scalar_t__ max_cmd_size; scalar_t__* cmd_buf; scalar_t__ done_sent; } ;
struct ath6kl {TYPE_1__ bmi; } ;
typedef int rx_len ;
typedef int len ;
typedef int cid ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ath6kl*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (struct ath6kl*,scalar_t__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,int ,scalar_t__) ;

int FUNC_7(struct ath6kl *VAR_4, u32 VAR_5, u8 *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_1;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11, VAR_12;
 u16 VAR_13;

 if (VAR_4->bmi.done_sent) {
  FUNC_2("bmi done sent already, cmd %d disallowed\n", VAR_8);
  return -VAR_2;
 }

 VAR_13 = VAR_4->bmi.max_data_size + sizeof(VAR_8) + sizeof(VAR_5) + sizeof(VAR_7);
 if (VAR_13 > VAR_4->bmi.max_cmd_size) {
  FUNC_0(1);
  return -VAR_3;
 }
 FUNC_6(VAR_4->bmi.cmd_buf, 0, VAR_13);

 FUNC_1(VAR_0,
     "bmi read memory: device: addr: 0x%x, len: %d\n",
     VAR_5, VAR_7);

 VAR_11 = VAR_7;

 while (VAR_11) {
  VAR_12 = (VAR_11 < VAR_4->bmi.max_data_size) ?
     VAR_11 : VAR_4->bmi.max_data_size;
  VAR_10 = 0;
  FUNC_5(&(VAR_4->bmi.cmd_buf[VAR_10]), &VAR_8, sizeof(VAR_8));
  VAR_10 += sizeof(VAR_8);
  FUNC_5(&(VAR_4->bmi.cmd_buf[VAR_10]), &VAR_5, sizeof(VAR_5));
  VAR_10 += sizeof(VAR_5);
  FUNC_5(&(VAR_4->bmi.cmd_buf[VAR_10]), &VAR_12, sizeof(VAR_12));
  VAR_10 += sizeof(VAR_7);

  VAR_9 = FUNC_4(VAR_4, VAR_4->bmi.cmd_buf, VAR_10);
  if (VAR_9) {
   FUNC_2("Unable to write to the device: %d\n",
       VAR_9);
   return VAR_9;
  }
  VAR_9 = FUNC_3(VAR_4, VAR_4->bmi.cmd_buf, VAR_12);
  if (VAR_9) {
   FUNC_2("Unable to read from the device: %d\n",
       VAR_9);
   return VAR_9;
  }
  FUNC_5(&VAR_6[VAR_7 - VAR_11], VAR_4->bmi.cmd_buf, VAR_12);
  VAR_11 -= VAR_12; VAR_5 += VAR_12;
 }

 return 0;
}
