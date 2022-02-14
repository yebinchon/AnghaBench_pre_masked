
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct ispstat {scalar_t__ state; int update; TYPE_3__* isp; TYPE_2__ subdev; int buf_err; int active_buf; int * priv; TYPE_1__* ops; scalar_t__ buf_alloc_size; int buf_processing; } ;
struct TYPE_6__ {int stat_lock; int dev; } ;
struct TYPE_4__ {int (* setup_regs ) (struct ispstat*,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ispstat*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct ispstat*,int ) ;
 int FUNC_4 (struct ispstat*) ;
 int FUNC_5 (struct ispstat*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct ispstat*,int *) ;

__attribute__((used)) static void FUNC_9(struct ispstat *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->priv == ((void*)0))

  return;

 FUNC_6(&VAR_1->isp->stat_lock, VAR_2);
 if (VAR_1->state == VAR_0 && !VAR_1->buf_processing &&
     VAR_1->buf_alloc_size) {




  VAR_1->update = 1;
  FUNC_4(VAR_1);
  VAR_1->ops->setup_regs(VAR_1, VAR_1->priv);
  FUNC_3(VAR_1, VAR_1->active_buf);







  if (!FUNC_0(VAR_1))
   FUNC_1(&VAR_1->buf_err, 0);

  FUNC_5(VAR_1, 1);
  FUNC_7(&VAR_1->isp->stat_lock, VAR_2);
  FUNC_2(VAR_1->isp->dev, "%s: module is enabled.\n",
   VAR_1->subdev.name);
 } else {
  FUNC_7(&VAR_1->isp->stat_lock, VAR_2);
 }
}
