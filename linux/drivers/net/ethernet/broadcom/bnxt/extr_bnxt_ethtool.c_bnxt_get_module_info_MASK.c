
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_modinfo {void* eeprom_len; int type; } ;
struct TYPE_2__ {scalar_t__ module_status; } ;
struct bnxt {int hwrm_spec_code; TYPE_1__ link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;




 int FUNC_0 (struct bnxt*,int ,int ,int ,int,int*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_10,
    struct ethtool_modinfo *VAR_11)
{
 u8 VAR_12[VAR_9 + 1];
 struct bnxt *VAR_13 = FUNC_1(VAR_10);
 int VAR_14;





 if (VAR_13->link_info.module_status >
  VAR_8)
  return -VAR_0;


 if (VAR_13->hwrm_spec_code < 0x10202)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_13, VAR_7, 0, 0,
           VAR_9 + 1,
           VAR_12);
 if (!VAR_14) {
  u8 VAR_15 = VAR_12[0];
  u8 VAR_16 = VAR_12[VAR_9];

  switch (VAR_15) {
  case 128:
   VAR_11->type = VAR_3;
   VAR_11->eeprom_len = VAR_4;
   if (!VAR_16)
    VAR_11->eeprom_len = VAR_2;
   break;
  case 131:
  case 129:
   VAR_11->type = VAR_1;
   VAR_11->eeprom_len = VAR_2;
   break;
  case 130:
   VAR_11->type = VAR_5;
   VAR_11->eeprom_len = VAR_6;
   break;
  default:
   VAR_14 = -VAR_0;
   break;
  }
 }
 return VAR_14;
}
