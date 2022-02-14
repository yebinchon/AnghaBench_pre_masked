
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pll_current; } ;
struct TYPE_4__ {int nr; } ;
struct bttv {int tvnorm; int input; TYPE_1__ pll; int s_lock; scalar_t__ errors; TYPE_2__ c; } ;


 int FUNC_0 (struct bttv*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct bttv*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct bttv *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_0)
  FUNC_2("%d: reset, reinitialize\n", VAR_1->c.nr);
 FUNC_4(&VAR_1->s_lock,VAR_2);
 VAR_1->errors=0;
 FUNC_0(VAR_1,0);
 FUNC_5(&VAR_1->s_lock,VAR_2);

 FUNC_1(VAR_1);
 VAR_1->pll.pll_current = -1;
 FUNC_3(VAR_1, VAR_1->input, VAR_1->tvnorm);
}
