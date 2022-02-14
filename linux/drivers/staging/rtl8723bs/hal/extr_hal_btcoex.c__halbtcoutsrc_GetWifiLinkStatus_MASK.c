
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlme_priv*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct adapter *VAR_6)
{
 struct mlme_priv *VAR_7;
 u8 VAR_8;
 u32 VAR_9;


 VAR_7 = &VAR_6->mlmepriv;
 VAR_8 = 0;
 VAR_9 = 0;

 if (FUNC_0(VAR_7, VAR_2) == 1) {
  if (FUNC_0(VAR_7, VAR_1) == 1) {
   if (VAR_8)
    VAR_9 |= VAR_4;
   else
    VAR_9 |= VAR_0;
  } else {
   if (VAR_8)
    VAR_9 |= VAR_3;
   else
    VAR_9 |= VAR_5;
  }
 }

 return VAR_9;
}
