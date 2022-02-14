
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ curRaMask; scalar_t__ preRaMask; } ;
struct TYPE_5__ {int (* fBtcSet ) (TYPE_1__*,int ,scalar_t__*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(
 PBTC_COEXIST VAR_2, bool VAR_3, u32 VAR_4
)
{
 VAR_1->curRaMask = VAR_4;

 if (VAR_3 || (VAR_1->preRaMask != VAR_1->curRaMask))
  VAR_2->fBtcSet(
   VAR_2,
   VAR_0,
   &VAR_1->curRaMask
  );
 VAR_1->preRaMask = VAR_1->curRaMask;
}
