
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int (* fBtcFillH2c ) (TYPE_1__*,int,int,int *) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_3, bool VAR_4
)
{
 u8 VAR_5[1] = {0};

 if (VAR_4)
  VAR_5[0] |= VAR_1;

 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "[BTCoex], set FW for BT Ignore Wlan_Act, FW write 0x63 = 0x%x\n",
   VAR_5[0]
  )
 );

 VAR_3->fBtcFillH2c(VAR_3, 0x63, 1, VAR_5);
}
