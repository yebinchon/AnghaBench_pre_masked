
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_7__ {int bSurpriseRemoved; } ;
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
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int*) ;

void FUNC_6(_adapter *VAR_8, u16 VAR_9, u16 VAR_10)
{
 u16 VAR_11, VAR_12;
VAR_5;

 if (VAR_8->bSurpriseRemoved == 1) {
  FUNC_0(VAR_7, VAR_4, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }
 VAR_12 = 0x01 << (VAR_10 - 1);
 VAR_11 = FUNC_2(VAR_8, VAR_1);

 VAR_11 &= ~(VAR_3 | VAR_2);

 do {
  VAR_11 &= ~VAR_2;
  if (VAR_9 & VAR_12)
   VAR_11 |= VAR_2;
  if (VAR_8->bSurpriseRemoved == 1) {
  FUNC_0(VAR_7, VAR_4, ("padapter->bSurpriseRemoved==true"));
  goto out;
  }
  FUNC_3(VAR_8, VAR_1, (u8)VAR_11);
  FUNC_4(VAR_0);
  FUNC_5(VAR_8, &VAR_11);
  FUNC_1(VAR_8, &VAR_11);
  VAR_12 = VAR_12 >> 1;
 } while (VAR_12);
 if (VAR_8->bSurpriseRemoved == 1) {
  FUNC_0(VAR_7, VAR_4, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }
 VAR_11 &= ~VAR_2;
 FUNC_3(VAR_8, VAR_1, (u8)VAR_11);
out:
VAR_6;
}
