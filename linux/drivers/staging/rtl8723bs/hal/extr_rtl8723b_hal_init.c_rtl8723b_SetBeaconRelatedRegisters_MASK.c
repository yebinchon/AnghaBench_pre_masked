
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlme_ext_info {int bcn_interval; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {int mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct adapter*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct adapter*,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int) ;
 int FUNC_7 (struct adapter*,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_12)
{
 u8 VAR_13;
 u32 VAR_14;
 struct mlme_ext_priv *VAR_15 = &VAR_12->mlmeextpriv;
 struct mlme_ext_info *VAR_16 = &VAR_15->mlmext_info;
 u32 VAR_17;
 VAR_17 = VAR_2;




 FUNC_6(VAR_12, VAR_1, 2);




 FUNC_6(VAR_12, VAR_3, VAR_16->bcn_interval);

 FUNC_3(VAR_12);

 FUNC_8(VAR_12, VAR_6, 0x09);




 VAR_14 = FUNC_4(VAR_12, VAR_7);
 VAR_14 &= ~VAR_8;
 FUNC_7(VAR_12, VAR_7, VAR_14);

 VAR_14 |= VAR_8;
 FUNC_7(VAR_12, VAR_7, VAR_14);


 if (FUNC_2(&VAR_12->mlmepriv, VAR_10|VAR_9|VAR_11) == 1) {
  FUNC_8(VAR_12, VAR_4, 0x50);
  FUNC_8(VAR_12, VAR_5, 0x50);
 }

 FUNC_1(VAR_12, 1, 1);

 FUNC_0(VAR_12);
 VAR_13 = FUNC_5(VAR_12, VAR_17);
 VAR_13 |= VAR_0;
 FUNC_8(VAR_12, VAR_17, VAR_13);
}
