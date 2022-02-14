
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ rfa_txpowertrackingindex; scalar_t__ rfc_txpowertrackingindex; int rfa_txpowertrackingindex_real; int rfc_txpowertrackingindex_real; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5,
        u8 VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6 == VAR_0) {
  if ((VAR_7->rfa_txpowertrackingindex > 0) &&
      (VAR_7->rfc_txpowertrackingindex > 0)) {
   VAR_7->rfa_txpowertrackingindex--;
   if (VAR_7->rfa_txpowertrackingindex_real > 4) {
    VAR_7->rfa_txpowertrackingindex_real--;
    FUNC_0(VAR_5, VAR_3,
        VAR_1,
        VAR_2[VAR_7->rfa_txpowertrackingindex_real]);
   }

   VAR_7->rfc_txpowertrackingindex--;
   if (VAR_7->rfc_txpowertrackingindex_real > 4) {
    VAR_7->rfc_txpowertrackingindex_real--;
    FUNC_0(VAR_5,
        VAR_4,
        VAR_1,
        VAR_2[VAR_7->rfc_txpowertrackingindex_real]);
   }
  } else {
   FUNC_0(VAR_5, VAR_3,
       VAR_1,
       VAR_2[4]);
   FUNC_0(VAR_5,
       VAR_4,
       VAR_1, VAR_2[4]);
  }
 } else {
  if (VAR_7->rfa_txpowertrackingindex > 0) {
   VAR_7->rfa_txpowertrackingindex--;
   if (VAR_7->rfa_txpowertrackingindex_real > 4) {
    VAR_7->rfa_txpowertrackingindex_real--;
    FUNC_0(VAR_5,
        VAR_3,
        VAR_1,
        VAR_2[VAR_7->rfa_txpowertrackingindex_real]);
   }
  } else {
   FUNC_0(VAR_5, VAR_3,
       VAR_1, VAR_2[4]);
  }
 }
}
