
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_modinfo {int eeprom_len; int type; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_8,
     struct ethtool_modinfo *VAR_9)
{
 int VAR_10;
 int VAR_11;

 switch (FUNC_1(VAR_8)) {
 case 128:
  VAR_10 = FUNC_2(VAR_8);


  if (VAR_10 < 0)
   return -VAR_0;




  VAR_11 = FUNC_0(VAR_8);

  if ((VAR_10 == 0) ||
      (VAR_11 & VAR_7)) {
   VAR_9->type = VAR_1;
   VAR_9->eeprom_len = VAR_2;
  } else {
   VAR_9->type = VAR_5;
   VAR_9->eeprom_len = VAR_6;
  }
  break;

 case 129:
  VAR_9->type = VAR_3;
  VAR_9->eeprom_len = VAR_4;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
