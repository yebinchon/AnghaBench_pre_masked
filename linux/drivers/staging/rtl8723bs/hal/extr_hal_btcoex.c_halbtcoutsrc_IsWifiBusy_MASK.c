
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bBusyTraffic; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;

__attribute__((used)) static u8 FUNC_1(struct adapter *VAR_2)
{
 struct mlme_priv *VAR_3;


 VAR_3 = &VAR_2->mlmepriv;

 if (FUNC_0(VAR_3, VAR_1) == 1) {
  if (FUNC_0(VAR_3, VAR_0) == 1)
   return 1;
  if (VAR_3->LinkDetectInfo.bBusyTraffic)
   return 1;
 }

 return 0;
}
