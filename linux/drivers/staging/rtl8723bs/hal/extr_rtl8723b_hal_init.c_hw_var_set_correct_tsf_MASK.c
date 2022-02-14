
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct mlme_ext_info {int bcn_interval; int state; } ;
struct mlme_ext_priv {int TSFValue; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,scalar_t__,int) ;
 int FUNC_5 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_5, u8 VAR_6, u8 *VAR_7)
{
 u8 VAR_8;
 u64 VAR_9;
 struct mlme_ext_priv *VAR_10;
 struct mlme_ext_info *VAR_11;


 VAR_10 = &VAR_5->mlmeextpriv;
 VAR_11 = &VAR_10->mlmext_info;

 VAR_9 = VAR_10->TSFValue-FUNC_2(VAR_10->TSFValue, (VAR_11->bcn_interval*1024))-1024;

 if (
  ((VAR_11->state&0x03) == VAR_3) ||
  ((VAR_11->state&0x03) == VAR_4)
 )
  FUNC_1(VAR_5);

 {

  VAR_8 = FUNC_3(VAR_5, VAR_1);
  VAR_8 &= ~VAR_0;
  FUNC_5(VAR_5, VAR_1, VAR_8);

  FUNC_4(VAR_5, VAR_2, VAR_9);
  FUNC_4(VAR_5, VAR_2+4, VAR_9>>32);


  VAR_8 = FUNC_3(VAR_5, VAR_1);
  VAR_8 |= VAR_0;
  FUNC_5(VAR_5, VAR_1, VAR_8);
 }

 if (
  ((VAR_11->state&0x03) == VAR_3) ||
  ((VAR_11->state&0x03) == VAR_4)
 )
  FUNC_0(VAR_5);
}
