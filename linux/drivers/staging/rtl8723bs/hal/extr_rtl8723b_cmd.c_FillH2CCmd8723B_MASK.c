
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hal_com_data {int LastHMEBoxNum; } ;
struct adapter {scalar_t__ bSurpriseRemoved; } ;
typedef int s32 ;
struct TYPE_2__ {int h2c_fwcmd_mutex; } ;


 int FUNC_0 (char*) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 struct adapter* FUNC_2 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct adapter*,int) ;
 TYPE_1__* FUNC_4 (struct adapter*) ;
 int FUNC_5 (int*,int*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct adapter*,int,int) ;

s32 FUNC_9(struct adapter *VAR_8, u8 VAR_9, u32 VAR_10, u8 *VAR_11)
{
 u8 VAR_12;
 u32 VAR_13;
 u32 VAR_14 = 0;
 struct hal_com_data *VAR_15;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 s32 VAR_18 = VAR_6;

 VAR_8 = FUNC_2(VAR_8);
 VAR_15 = FUNC_1(VAR_8);
 if (FUNC_6(&(FUNC_4(VAR_8)->h2c_fwcmd_mutex)))
  return VAR_18;

 if (!VAR_11) {
  goto exit;
 }

 if (VAR_10 > VAR_5) {
  goto exit;
 }

 if (VAR_8->bSurpriseRemoved)
  goto exit;


 do {
  VAR_12 = VAR_15->LastHMEBoxNum;

  if (!FUNC_3(VAR_8, VAR_12)) {
   FUNC_0(" fw read cmd failed...\n");


   goto exit;
  }

  if (VAR_10 <= 3)
   FUNC_5((u8 *)(&VAR_16)+1, VAR_11, VAR_10);
  else {
   FUNC_5((u8 *)(&VAR_16)+1, VAR_11, 3);
   FUNC_5((u8 *)(&VAR_17), VAR_11+3, VAR_10-3);

  }

  *(u8 *)(&VAR_16) |= VAR_9;

  if (VAR_10 > 3) {
   VAR_14 = VAR_3 + (VAR_12*VAR_4);
   FUNC_8(VAR_8, VAR_14, VAR_17);
  }
  VAR_13 = VAR_2 + (VAR_12*VAR_1);
  FUNC_8(VAR_8, VAR_13, VAR_16);




  VAR_15->LastHMEBoxNum = (VAR_12+1) % VAR_0;

 } while (0);

 VAR_18 = VAR_7;

exit:

 FUNC_7(&(FUNC_4(VAR_8)->h2c_fwcmd_mutex));
 return VAR_18;
}
