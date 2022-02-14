
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_lite {int state; TYPE_1__* test_pattern; int out_frame; int inp_frame; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fimc_lite*,int *) ;
 int FUNC_2 (struct fimc_lite*,int ) ;
 int FUNC_3 (struct fimc_lite*,int *) ;

__attribute__((used)) static void FUNC_4(struct fimc_lite *VAR_1)
{
 FUNC_3(VAR_1, &VAR_1->inp_frame);
 FUNC_1(VAR_1, &VAR_1->out_frame);
 FUNC_2(VAR_1, VAR_1->test_pattern->val);
 FUNC_0(VAR_0, &VAR_1->state);
}
