
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlme_ext_info {int bcn_interval; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct adapter*) ;
 int VAR_7 ;
 int FUNC_2 (struct adapter*,int,int) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int ) ;
 int FUNC_7 (struct adapter*,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int) ;

void FUNC_9(struct adapter *VAR_8)
{
 u32 VAR_9;
 struct mlme_ext_priv *VAR_10 = &VAR_8->mlmeextpriv;
 struct mlme_ext_info *VAR_11 = &VAR_10->mlmext_info;
 u32 VAR_12 = VAR_1;



 FUNC_6(VAR_8, VAR_2, VAR_11->bcn_interval);
 FUNC_8(VAR_8, VAR_0, 0x02);

 FUNC_3(VAR_8);

 FUNC_8(VAR_8, VAR_5, 0x09);

 VAR_9 = FUNC_4(VAR_8, VAR_6);
 VAR_9 &= ~VAR_7;
 FUNC_7(VAR_8, VAR_6, VAR_9);

 VAR_9 |= VAR_7;
 FUNC_7(VAR_8, VAR_6, VAR_9);


 FUNC_8(VAR_8, VAR_3, 0x50);
 FUNC_8(VAR_8, VAR_4, 0x50);

 FUNC_2(VAR_8, 1, 1);

 FUNC_1(VAR_8);

 FUNC_8(VAR_8, VAR_12, FUNC_5(VAR_8, VAR_12) | FUNC_0(1));
}
