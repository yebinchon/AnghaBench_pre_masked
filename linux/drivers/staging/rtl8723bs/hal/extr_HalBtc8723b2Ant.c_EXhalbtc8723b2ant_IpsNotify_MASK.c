
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int bUnderIps; } ;
typedef int PBTC_COEXIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_5 ;

void FUNC_7(PBTC_COEXIST VAR_6, u8 VAR_7)
{
 if (VAR_0 == VAR_7) {
  FUNC_0(VAR_2, VAR_4, ("[BTCoex], IPS ENTER notify\n"));
  VAR_5->bUnderIps = 1;
  FUNC_6(VAR_6);
  FUNC_2(VAR_6, VAR_3, 1);
  FUNC_1(VAR_6);
 } else if (VAR_1 == VAR_7) {
  FUNC_0(VAR_2, VAR_4, ("[BTCoex], IPS LEAVE notify\n"));
  VAR_5->bUnderIps = 0;
  FUNC_4(VAR_6, 0);
  FUNC_3(VAR_6);
  FUNC_5(VAR_6);
 }
}
