
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bdisp_ctx* ctx; } ;
struct bdisp_dev {int state; int slock; TYPE_1__ m2m; } ;
struct bdisp_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bdisp_ctx*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct bdisp_dev *VAR_2)
{
 struct bdisp_ctx *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->slock, VAR_4);
 VAR_3 = VAR_2->m2m.ctx;
 VAR_2->m2m.ctx = ((void*)0);
 FUNC_2(&VAR_2->slock, VAR_4);

 if (FUNC_3(VAR_0, &VAR_2->state))
  FUNC_0(VAR_3, VAR_1);

 return 0;
}
