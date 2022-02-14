
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int bNeedRecover0x948; int backup0x948; } ;
struct TYPE_14__ {int (* fBtcRead4Byte ) (TYPE_1__*,int) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcSet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int) ;
 TYPE_5__* VAR_5 ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;
 int FUNC_8 (TYPE_1__*,int ,int*) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_10(PBTC_COEXIST VAR_6)
{
 bool VAR_7 = 0;
 bool VAR_8 = 1;

 VAR_6->fBtcSet(VAR_6, VAR_2, &VAR_8);
 VAR_6->fBtcGet(VAR_6, VAR_1, &VAR_7);

 if (VAR_7) {
  FUNC_0(VAR_6, VAR_4, 7);
  FUNC_3(VAR_6, VAR_4, 1, 3);
 } else {
  FUNC_0(VAR_6, VAR_4, 0);
  FUNC_3(VAR_6, VAR_4, 0, 1);
 }

 FUNC_2(VAR_6, VAR_3, 6);
 FUNC_1(VAR_6, VAR_4, 0);

 FUNC_5(VAR_6, 0, 0, 0, 0);
 FUNC_6(VAR_6, 0, 0, 0, 0x18);

 VAR_5->bNeedRecover0x948 = 1;
 VAR_5->backup0x948 = VAR_6->fBtcRead4Byte(VAR_6, 0x948);

 FUNC_4(VAR_6, VAR_0, 0, 0);
}
