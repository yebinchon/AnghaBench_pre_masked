
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int update_bcn; int bcn_update_lock; } ;
struct mlme_ext_priv {int bstart_bss; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*,int*) ;

void FUNC_10(struct adapter *VAR_0, u8 VAR_1, u8 *VAR_2, u8 VAR_3)
{
 struct mlme_priv *VAR_4;
 struct mlme_ext_priv *VAR_5;




 if (!VAR_0)
  return;

 VAR_4 = &(VAR_0->mlmepriv);
 VAR_5 = &(VAR_0->mlmeextpriv);


 if (!VAR_5->bstart_bss)
  return;

 FUNC_1(&VAR_4->bcn_update_lock);

 switch (VAR_1) {
 case 0xFF:

  FUNC_5(VAR_0);

  break;

 case 129:

  FUNC_3(VAR_0);

  break;

 case 133:

  FUNC_4(VAR_0);

  break;

 case 131:

  FUNC_6(VAR_0);

  break;

 case 130:

  FUNC_8(VAR_0);

  break;

 case 132:

  FUNC_7(VAR_0);

  break;

 case 128:

  FUNC_9(VAR_0, VAR_2);

  break;

 default:
  break;
 }

 VAR_4->update_bcn = 1;

 FUNC_2(&VAR_4->bcn_update_lock);


 if (VAR_3) {

  FUNC_0(VAR_0);
 }

}
