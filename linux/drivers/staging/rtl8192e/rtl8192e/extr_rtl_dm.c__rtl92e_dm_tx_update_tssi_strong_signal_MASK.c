
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {int rfa_txpowertrackingindex; int rfc_txpowertrackingindex; size_t rfa_txpowertrackingindex_real; size_t rfc_txpowertrackingindex_real; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6,
          u8 VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_1(VAR_6);

 if (VAR_7 == VAR_0) {
  if ((VAR_8->rfa_txpowertrackingindex < VAR_1 - 1) &&
      (VAR_8->rfc_txpowertrackingindex < VAR_1 - 1)) {
   VAR_8->rfa_txpowertrackingindex++;
   VAR_8->rfa_txpowertrackingindex_real++;
   FUNC_0(VAR_6, VAR_4,
       VAR_2,
       VAR_3[VAR_8->rfa_txpowertrackingindex_real]);
   VAR_8->rfc_txpowertrackingindex++;
   VAR_8->rfc_txpowertrackingindex_real++;
   FUNC_0(VAR_6, VAR_5,
       VAR_2,
       VAR_3[VAR_8->rfc_txpowertrackingindex_real]);
  } else {
   FUNC_0(VAR_6, VAR_4,
       VAR_2,
       VAR_3[VAR_1 - 1]);
   FUNC_0(VAR_6, VAR_5,
       VAR_2,
       VAR_3[VAR_1 - 1]);
  }
 } else {
  if (VAR_8->rfa_txpowertrackingindex < (VAR_1 - 1)) {
   VAR_8->rfa_txpowertrackingindex++;
   VAR_8->rfa_txpowertrackingindex_real++;
   FUNC_0(VAR_6, VAR_4,
       VAR_2,
       VAR_3[VAR_8->rfa_txpowertrackingindex_real]);
  } else {
   FUNC_0(VAR_6, VAR_4,
       VAR_2,
       VAR_3[VAR_1 - 1]);
  }
 }
}
