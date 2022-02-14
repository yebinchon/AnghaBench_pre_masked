
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;
typedef int sint ;
typedef enum NDIS_802_11_NETWORK_INFRASTRUCTURE { ____Placeholder_NDIS_802_11_NETWORK_INFRASTRUCTURE } NDIS_802_11_NETWORK_INFRASTRUCTURE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlme_priv*) ;
 int FUNC_1 (struct adapter*,int,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_7)
{
 enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR_8 = VAR_3;
 struct mlme_priv *VAR_9 = &(VAR_7->mlmepriv);
 sint VAR_10;

 VAR_10 = FUNC_0(VAR_9);

 if (VAR_10 & VAR_4)
  VAR_8 = VAR_1;
 else if (VAR_10 & VAR_6)
  VAR_8 = VAR_2;
 else if (VAR_10 & VAR_5)
  VAR_8 = VAR_0;
 else
  return;

 FUNC_1(VAR_7, VAR_8, 0);
}
