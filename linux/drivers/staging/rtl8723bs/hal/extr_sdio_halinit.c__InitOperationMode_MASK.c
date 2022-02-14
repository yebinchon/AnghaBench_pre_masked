
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_ext_priv {int cur_wireless_mode; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_3)
{
 struct mlme_ext_priv *VAR_4;
 u8 VAR_5 = 0;

 VAR_4 = &VAR_3->mlmeextpriv;





 switch (VAR_4->cur_wireless_mode) {
 case 131:
  VAR_5 = VAR_0;
  break;
 case 133:

  break;
 case 130:
  VAR_5 = VAR_0;
  break;
 case 132:
  VAR_5 = VAR_0;
  break;
 case 129:


  VAR_5 = VAR_0;
  break;
 case 128:

  VAR_5 = VAR_1;
  break;

 default:
  break;
 }

 FUNC_0(VAR_3, VAR_2, VAR_5);

}
