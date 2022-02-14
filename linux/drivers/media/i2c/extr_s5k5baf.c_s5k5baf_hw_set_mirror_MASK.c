
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* vflip; } ;
struct s5k5baf {scalar_t__ streaming; TYPE_2__ ctrls; } ;
struct TYPE_3__ {int val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct s5k5baf*) ;
 int FUNC_2 (struct s5k5baf*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct s5k5baf *VAR_0)
{
 u16 VAR_1 = VAR_0->ctrls.vflip->val | (VAR_0->ctrls.vflip->val << 1);

 FUNC_2(VAR_0, FUNC_0(0), VAR_1);
 if (VAR_0->streaming)
  FUNC_1(VAR_0);
}
