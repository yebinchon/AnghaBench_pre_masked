
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int bForceLpsOn; } ;
struct TYPE_11__ {int (* fBtcSet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_7__* VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_7(
 PBTC_COEXIST VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9
)
{
 bool VAR_10 = 0;

 switch (VAR_7) {
 case 128:

  VAR_10 = 0;
  VAR_6->fBtcSet(
   VAR_6, VAR_0, &VAR_10
  );
  VAR_6->fBtcSet(VAR_6, VAR_3, ((void*)0));
  VAR_5->bForceLpsOn = 0;
  break;
 case 129:
  FUNC_1(VAR_6, 1);
  FUNC_0(VAR_6, VAR_4, VAR_8, VAR_9);

  VAR_10 = 1;
  VAR_6->fBtcSet(
   VAR_6, VAR_0, &VAR_10
  );

  VAR_6->fBtcSet(VAR_6, VAR_1, ((void*)0));
  VAR_5->bForceLpsOn = 1;
  break;
 case 130:
  FUNC_1(VAR_6, 0);
  VAR_6->fBtcSet(VAR_6, VAR_2, ((void*)0));
  VAR_5->bForceLpsOn = 0;
  break;
 default:
  break;
 }
}
