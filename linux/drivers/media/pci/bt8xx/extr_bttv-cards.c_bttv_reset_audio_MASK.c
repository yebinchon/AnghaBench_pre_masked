
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {int id; TYPE_1__ c; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct bttv *VAR_1)
{
 if (VAR_1->id != 878)
  return;

 if (VAR_0)
  FUNC_1("%d: BT878A ARESET\n", VAR_1->c.nr);
 FUNC_0((1<<7), 0x058);
 FUNC_2(10);
 FUNC_0( 0, 0x058);
}
