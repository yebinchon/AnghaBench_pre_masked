
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
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int*) ;

void FUNC_5(_adapter *VAR_7)
{
 u16 VAR_8;
VAR_4;
 if (VAR_7->bSurpriseRemoved == 1) {
  FUNC_0(VAR_6, VAR_3, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }
 VAR_8 = FUNC_2(VAR_7, VAR_0);
 if (VAR_7->bSurpriseRemoved == 1) {
  FUNC_0(VAR_6, VAR_3, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }
 VAR_8 &= ~(VAR_1 | VAR_2);
 FUNC_3(VAR_7, VAR_0, (u8)VAR_8);
 if (VAR_7->bSurpriseRemoved == 1) {
  FUNC_0(VAR_6, VAR_3, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }
 FUNC_4(VAR_7, &VAR_8);
  if (VAR_7->bSurpriseRemoved == 1) {
  FUNC_0(VAR_6, VAR_3, ("padapter->bSurpriseRemoved==true"));
  goto out;
 }
 FUNC_1(VAR_7, &VAR_8);
out:
VAR_5;
}
