
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ size; int * info; } ;
typedef TYPE_1__* PBTCDBGINFO ;
typedef int BTCDBGINFO ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(PBTCDBGINFO VAR_0, u8 *VAR_1, u32 VAR_2)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0, 0, sizeof(BTCDBGINFO));

 if (VAR_1 && VAR_2) {
  VAR_0->info = VAR_1;
  VAR_0->size = VAR_2;
 }
}
