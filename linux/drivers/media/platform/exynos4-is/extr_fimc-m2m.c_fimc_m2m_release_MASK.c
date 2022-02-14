
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcnt; } ;
struct fimc_dev {int lock; int state; TYPE_1__ m2m; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct fimc_ctx {TYPE_2__ fh; struct fimc_dev* fimc_dev; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;
 struct fimc_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct fimc_ctx*) ;
 int FUNC_4 (struct fimc_ctx*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2)
{
 struct fimc_ctx *VAR_3 = FUNC_2(VAR_2->private_data);
 struct fimc_dev *VAR_4 = VAR_3->fimc_dev;

 FUNC_1("pid: %d, state: 0x%lx, refcnt= %d",
  FUNC_7(VAR_1), VAR_4->state, VAR_4->m2m.refcnt);

 FUNC_5(&VAR_4->lock);

 FUNC_10(VAR_3->fh.m2m_ctx);
 FUNC_3(VAR_3);
 FUNC_8(&VAR_3->fh);
 FUNC_9(&VAR_3->fh);

 if (--VAR_4->m2m.refcnt <= 0)
  FUNC_0(VAR_0, &VAR_4->state);
 FUNC_4(VAR_3);

 FUNC_6(&VAR_4->lock);
 return 0;
}
