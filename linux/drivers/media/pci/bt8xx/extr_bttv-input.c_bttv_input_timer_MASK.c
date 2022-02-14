
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct bttv_ir {int polling; int timer; struct bttv* btv; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct bttv {TYPE_1__ c; } ;


 scalar_t__ VAR_0 ;
 struct bttv_ir* FUNC_0 (int ,struct timer_list*,int ) ;
 struct bttv_ir* VAR_1 ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (struct bttv*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct bttv_ir *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct bttv *VAR_6 = VAR_5->btv;

 if (VAR_6->c.type == VAR_0)
  FUNC_1(VAR_6);
 else
  FUNC_2(VAR_6);
 FUNC_3(&VAR_5->timer, VAR_2 + FUNC_4(VAR_5->polling));
}
