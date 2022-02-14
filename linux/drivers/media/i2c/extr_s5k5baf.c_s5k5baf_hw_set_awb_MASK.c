
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5k5baf_ctrls {TYPE_2__* gain_blue; TYPE_1__* gain_red; } ;
struct s5k5baf {struct s5k5baf_ctrls ctrls; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s5k5baf*,int ,int) ;
 int FUNC_1 (struct s5k5baf*,int ,int ,int,int ,int,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct s5k5baf *VAR_3, int VAR_4)
{
 struct s5k5baf_ctrls *VAR_5 = &VAR_3->ctrls;

 if (!VAR_4)
  FUNC_1(VAR_3, VAR_1,
      VAR_5->gain_red->val, 1,
      VAR_2, 1,
      VAR_5->gain_blue->val, 1,
      1);

 FUNC_0(VAR_3, VAR_0, VAR_4);
}
