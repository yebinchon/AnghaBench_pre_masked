
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct bttv_ir {int shift_by; int rc5_remote_gap; TYPE_1__ timer; scalar_t__ rc5_gpio; scalar_t__ polling; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bttv_ir *VAR_4)
{
 if (VAR_4->polling) {
  FUNC_2(&VAR_4->timer, VAR_0, 0);
  VAR_4->timer.expires = VAR_3 + FUNC_1(1000);
  FUNC_0(&VAR_4->timer);
 } else if (VAR_4->rc5_gpio) {

  FUNC_2(&VAR_4->timer, VAR_1, 0);
  VAR_4->shift_by = 1;
  VAR_4->rc5_remote_gap = VAR_2;
 }
}
