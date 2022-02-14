
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_2, bool VAR_3
)
{
 u8 VAR_4 = 0x0;

 VAR_2->fBtcGet(VAR_2, VAR_0, &VAR_4);

 if (VAR_4) {
  if (VAR_3) {

  } else
   FUNC_0(VAR_2, VAR_1, 0, 0);
 } else {
  if (VAR_3)
   FUNC_0(VAR_2, VAR_1, 0, 0);
  else {

  }
 }
}
