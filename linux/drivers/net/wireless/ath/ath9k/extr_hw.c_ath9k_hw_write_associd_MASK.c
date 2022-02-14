
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int curaid; scalar_t__ curbssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_0, FUNC_3(VAR_4->curbssid));
 FUNC_0(VAR_3, VAR_1, FUNC_2(VAR_4->curbssid + 4) |
    ((VAR_4->curaid & 0x3fff) << VAR_2));
}
