
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int magic2; int magic; void* len; int offset; } ;
struct TYPE_4__ {void* len; void* offset; } ;
struct p54_eeprom_lm86 {TYPE_2__ v2; TYPE_1__ v1; } ;
struct p54_common {int fw_var; int eeprom_mutex; int * eeprom; TYPE_3__* hw; int eeprom_comp; } ;
struct TYPE_6__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct p54_common*,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (struct p54_common*,struct sk_buff*) ;
 struct p54_eeprom_lm86* FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 long FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,char*) ;

int FUNC_11(struct p54_common *VAR_6, void *VAR_7,
   u16 VAR_8, u16 VAR_9)
{
 struct p54_eeprom_lm86 *VAR_10;
 struct sk_buff *VAR_11;
 size_t VAR_12;
 int VAR_13 = 0;
 long VAR_14;

 if (VAR_6->fw_var >= 0x509)
  VAR_12 = sizeof(*VAR_10);
 else
  VAR_12 = 0x4;

 VAR_11 = FUNC_5(VAR_6, VAR_5, VAR_12 +
       VAR_9, VAR_4,
       VAR_2);
 if (FUNC_8(!VAR_11))
  return -VAR_1;

 FUNC_3(&VAR_6->eeprom_mutex);
 VAR_6->eeprom = VAR_7;
 VAR_10 = FUNC_7(VAR_11, VAR_12 + VAR_9);

 if (VAR_6->fw_var < 0x509) {
  VAR_10->v1.offset = FUNC_0(VAR_8);
  VAR_10->v1.len = FUNC_0(VAR_9);
 } else {
  VAR_10->v2.offset = FUNC_1(VAR_8);
  VAR_10->v2.len = FUNC_0(VAR_9);
  VAR_10->v2.magic2 = 0xf;
  FUNC_2(VAR_10->v2.magic, (const char *)"LOCK", 4);
 }

 FUNC_6(VAR_6, VAR_11);

 VAR_14 = FUNC_9(
   &VAR_6->eeprom_comp, VAR_3);
 if (VAR_14 <= 0) {
  FUNC_10(VAR_6->hw->wiphy,
   "device does not respond or signal received!\n");
  VAR_13 = -VAR_0;
 }
 VAR_6->eeprom = ((void*)0);
 FUNC_4(&VAR_6->eeprom_mutex);
 return VAR_13;
}
