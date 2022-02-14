
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8727_platform_data {int * usb; int * ac; } ;
struct lp8727_chg {int devid; int * chg_param; struct lp8727_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lp8727_chg*,int) ;
 int FUNC_1 (struct lp8727_chg*) ;
 int FUNC_2 (struct lp8727_chg*) ;

__attribute__((used)) static void FUNC_3(struct lp8727_chg *VAR_9, u8 VAR_10, int VAR_11)
{
 struct lp8727_platform_data *VAR_12 = VAR_9->pdata;
 u8 VAR_13 = VAR_1;
 u8 VAR_14 = VAR_6 | VAR_8;

 switch (VAR_10) {
 case 0x5:
  VAR_13 = VAR_2;
  VAR_9->chg_param = VAR_12 ? VAR_12->ac : ((void*)0);
  break;
 case 0xB:
  if (FUNC_1(VAR_9)) {
   VAR_9->chg_param = VAR_12 ? VAR_12->ac : ((void*)0);
   VAR_13 = VAR_0;
  } else if (FUNC_2(VAR_9)) {
   VAR_9->chg_param = VAR_12 ? VAR_12->usb : ((void*)0);
   VAR_13 = VAR_3;
   VAR_14 = VAR_5 | VAR_7;
  } else if (VAR_11) {
   VAR_13 = VAR_4;
   VAR_14 = VAR_5 | VAR_7;
  }
  break;
 default:
  VAR_13 = VAR_1;
  VAR_9->chg_param = ((void*)0);
  break;
 }

 VAR_9->devid = VAR_13;
 FUNC_0(VAR_9, VAR_14);
}
