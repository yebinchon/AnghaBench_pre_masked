
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ coreid; } ;
struct ssb_device {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ssb_device*) ;
 int FUNC_1 (struct ssb_device*,int) ;
 int FUNC_2 (struct ssb_device*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ssb_device *VAR_1)
{
 if (VAR_1->id.coreid == VAR_0) {







  FUNC_2(VAR_1, 0x200, 0x7ff);


  FUNC_2(VAR_1, 0x400, FUNC_1(VAR_1, 0x400) & ~8);
  FUNC_1(VAR_1, 0x400);


  FUNC_2(VAR_1, 0x304, FUNC_1(VAR_1, 0x304) & ~0x100);
  FUNC_1(VAR_1, 0x304);

  FUNC_3(1);

  FUNC_0(VAR_1);
 }
}
