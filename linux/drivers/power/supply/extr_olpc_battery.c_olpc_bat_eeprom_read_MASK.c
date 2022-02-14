
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,int,char*,int) ;
 int FUNC_1 (char*,scalar_t__,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_3, struct kobject *VAR_4,
  struct bin_attribute *VAR_5, char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 uint8_t VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_9 = VAR_1 + VAR_7 + VAR_11;
  VAR_10 = FUNC_0(VAR_0, &VAR_9, 1, &VAR_6[VAR_11], 1);
  if (VAR_10) {
   FUNC_1("olpc-battery: "
          "EC_BAT_EEPROM cmd @ 0x%x failed - %d!\n",
          VAR_9, VAR_10);
   return -VAR_2;
  }
 }

 return VAR_8;
}
