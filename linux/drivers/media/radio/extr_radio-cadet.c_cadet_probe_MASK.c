
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cadet {int io; } ;
struct TYPE_2__ {scalar_t__ rangelow; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct cadet*) ;
 int FUNC_1 (struct cadet*,scalar_t__) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int,char*) ;

__attribute__((used)) static void FUNC_4(struct cadet *VAR_1)
{
 static int VAR_2[8] = { 0x330, 0x332, 0x334, 0x336, 0x338, 0x33a, 0x33c, 0x33e };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_1->io = VAR_2[VAR_3];
  if (FUNC_3(VAR_1->io, 2, "cadet-probe")) {
   FUNC_1(VAR_1, VAR_0[1].rangelow);
   if (FUNC_0(VAR_1) == VAR_0[1].rangelow) {
    FUNC_2(VAR_1->io, 2);
    return;
   }
   FUNC_2(VAR_1->io, 2);
  }
 }
 VAR_1->io = -1;
}
