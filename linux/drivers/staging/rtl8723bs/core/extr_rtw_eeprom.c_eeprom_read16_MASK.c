
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int bSurpriseRemoved; int EepromAddressSize; } ;
typedef TYPE_1__ _adapter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,unsigned char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

u16 FUNC_6(_adapter *VAR_12, u16 VAR_13)
{

 u16 VAR_14;
 u16 VAR_15 = 0;

VAR_9;

 if (VAR_12->bSurpriseRemoved == 1) {
  FUNC_0(VAR_11, VAR_8, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }

 VAR_14 = FUNC_2(VAR_12, VAR_1);

 if (VAR_12->bSurpriseRemoved == 1) {
  FUNC_0(VAR_11, VAR_8, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }

 VAR_14 &= ~(VAR_3 | VAR_4 | VAR_7 | VAR_5);
 VAR_14 |= VAR_6 | VAR_2;
 FUNC_3(VAR_12, VAR_1, (unsigned char)VAR_14);



 FUNC_5(VAR_12, VAR_0, 3);
 FUNC_5(VAR_12, VAR_13, VAR_12->EepromAddressSize);


 VAR_15 = FUNC_4(VAR_12);

 FUNC_1(VAR_12);
out:
VAR_10;
 return VAR_15;


}
