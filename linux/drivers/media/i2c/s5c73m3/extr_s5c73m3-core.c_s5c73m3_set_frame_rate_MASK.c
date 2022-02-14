
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* stabilization; } ;
struct s5c73m3 {scalar_t__ apply_fiv; TYPE_3__* fiv; TYPE_2__ ctrls; } ;
struct TYPE_6__ {int fps_reg; } ;
struct TYPE_4__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct s5c73m3*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_2)
{
 int VAR_3;

 if (VAR_2->ctrls.stabilization->val)
  return 0;

 if (FUNC_0(VAR_2->fiv == ((void*)0)))
  return -VAR_1;

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_2->fiv->fps_reg);
 if (!VAR_3)
  VAR_2->apply_fiv = 0;

 return VAR_3;
}
