
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {int bUnderIps; } ;
struct TYPE_10__ {scalar_t__ bStopCoexDm; scalar_t__ bManualControl; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 TYPE_2__* VAR_6 ;

void FUNC_7(PBTC_COEXIST VAR_7, u8 VAR_8)
{
 if (VAR_7->bManualControl || VAR_7->bStopCoexDm)
  return;

 if (VAR_1 == VAR_8) {
  FUNC_0(
   VAR_3, VAR_4, ("[BTCoex], IPS ENTER notify\n")
  );
  VAR_6->bUnderIps = 1;

  FUNC_4(VAR_7, VAR_5, 0, 0);
  FUNC_1(VAR_7, VAR_5, 0);
  FUNC_6(VAR_7, VAR_0, 0, 1);
 } else if (VAR_2 == VAR_8) {
  FUNC_0(
   VAR_3, VAR_4, ("[BTCoex], IPS LEAVE notify\n")
  );
  VAR_6->bUnderIps = 0;

  FUNC_3(VAR_7, 0, 0);
  FUNC_2(VAR_7);
  FUNC_5(VAR_7);
 }
}
