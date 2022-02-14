
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int btRf0x1eBackup; } ;
struct TYPE_6__ {int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;scalar_t__ bInitilized; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(
 PBTC_COEXIST VAR_4,
 bool VAR_5
)
{
 if (VAR_5) {

  FUNC_0(
   VAR_1,
   VAR_0,
   ("[BTCoex], Shrink RF Rx LPF corner!!\n")
  );
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x1e, 0xfffff, 0xffffc);
 } else {


  if (VAR_4->bInitilized) {
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Resume RF Rx LPF corner!!\n"));
   VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x1e, 0xfffff, VAR_3->btRf0x1eBackup);
  }
 }
}
