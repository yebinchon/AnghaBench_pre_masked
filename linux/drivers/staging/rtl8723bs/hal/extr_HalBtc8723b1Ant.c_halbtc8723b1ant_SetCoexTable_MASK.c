
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int (* fBtcWrite1Byte ) (TYPE_1__*,int,int ) ;int (* fBtcWrite4Byte ) (TYPE_1__*,int,int ) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_5(
 PBTC_COEXIST VAR_2,
 u32 VAR_3,
 u32 VAR_4,
 u32 VAR_5,
 u8 VAR_6
)
{
 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], set coex table, set 0x6c0 = 0x%x\n", VAR_3)
 );
 VAR_2->fBtcWrite4Byte(VAR_2, 0x6c0, VAR_3);

 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], set coex table, set 0x6c4 = 0x%x\n", VAR_4)
 );
 VAR_2->fBtcWrite4Byte(VAR_2, 0x6c4, VAR_4);

 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], set coex table, set 0x6c8 = 0x%x\n", VAR_5)
 );
 VAR_2->fBtcWrite4Byte(VAR_2, 0x6c8, VAR_5);

 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], set coex table, set 0x6cc = 0x%x\n", VAR_6)
 );
 VAR_2->fBtcWrite1Byte(VAR_2, 0x6cc, VAR_6);
}
