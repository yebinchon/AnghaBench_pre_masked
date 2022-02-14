
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ath_common {int curaid; scalar_t__ curbssid; } ;
struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,scalar_t__) ;
 struct ath_common* FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*,int *,int ) ;
 int FUNC_4 (struct ath5k_hw*,int,int ) ;
 int FUNC_5 (struct ath_common*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8(struct ath5k_hw *VAR_6)
{
 struct ath_common *VAR_7 = FUNC_1(VAR_6);
 u16 VAR_8 = 0;




 if (VAR_6->ah_version == VAR_0)
  FUNC_5(VAR_7);




 FUNC_4(VAR_6,
      FUNC_7(VAR_7->curbssid),
      VAR_3);
 FUNC_4(VAR_6,
      FUNC_6(VAR_7->curbssid + 4) |
      ((VAR_7->curaid & 0x3fff) << VAR_5),
      VAR_4);

 if (VAR_7->curaid == 0) {
  FUNC_2(VAR_6);
  return;
 }

 FUNC_0(VAR_6, VAR_1, VAR_2,
       VAR_8 ? VAR_8 + 4 : 0);

 FUNC_3(VAR_6, ((void*)0), 0);
}
