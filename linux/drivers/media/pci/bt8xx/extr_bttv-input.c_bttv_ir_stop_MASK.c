
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bttv {int c; TYPE_1__* remote; } ;
struct TYPE_2__ {int timer; scalar_t__ rc5_gpio; scalar_t__ polling; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bttv *VAR_0)
{
 if (VAR_0->remote->polling)
  FUNC_2(&VAR_0->remote->timer);

 if (VAR_0->remote->rc5_gpio) {
  u32 VAR_1;

  FUNC_2(&VAR_0->remote->timer);

  VAR_1 = FUNC_0(&VAR_0->c);
  FUNC_1(&VAR_0->c, VAR_1 & ~(1 << 4));
 }
}
