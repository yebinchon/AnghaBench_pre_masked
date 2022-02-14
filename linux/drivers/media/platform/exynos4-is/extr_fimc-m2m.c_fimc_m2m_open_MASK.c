
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int refcnt; int m2m_dev; int vfd; } ;
struct fimc_dev {int lock; int state; TYPE_5__ m2m; } ;
struct TYPE_15__ {int m2m_ctx; int * ctrl_handler; } ;
struct TYPE_13__ {int enabled; } ;
struct TYPE_12__ {int handler; } ;
struct TYPE_11__ {void* fmt; } ;
struct TYPE_10__ {void* fmt; } ;
struct fimc_ctx {TYPE_6__ fh; TYPE_4__ scaler; void* out_path; void* in_path; scalar_t__ flags; int state; TYPE_3__ ctrls; TYPE_2__ d_frame; TYPE_1__ s_frame; struct fimc_dev* fimc_dev; } ;
struct file {TYPE_6__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct fimc_ctx*) ;
 int FUNC_3 (struct fimc_ctx*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct fimc_ctx*) ;
 int FUNC_6 (struct fimc_ctx*) ;
 struct fimc_ctx* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (TYPE_6__*,int *) ;
 int FUNC_18 (int ,struct fimc_ctx*,int ) ;
 int FUNC_19 (int ) ;
 struct fimc_dev* FUNC_20 (struct file*) ;

__attribute__((used)) static int FUNC_21(struct file *VAR_10)
{
 struct fimc_dev *VAR_11 = FUNC_20(VAR_10);
 struct fimc_ctx *VAR_12;
 int VAR_13 = -VAR_0;

 FUNC_10("pid: %d, state: %#lx\n", FUNC_12(VAR_8), VAR_11->state);

 if (FUNC_8(&VAR_11->lock))
  return -VAR_2;




 if (FUNC_13(VAR_6, &VAR_11->state))
  goto unlock;

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_5);
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto unlock;
 }
 FUNC_17(&VAR_12->fh, &VAR_11->m2m.vfd);
 VAR_12->fimc_dev = VAR_11;


 VAR_12->s_frame.fmt = FUNC_4(0);
 VAR_12->d_frame.fmt = FUNC_4(0);

 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13)
  goto error_fh;


 VAR_12->fh.ctrl_handler = &VAR_12->ctrls.handler;
 VAR_10->private_data = &VAR_12->fh;
 FUNC_14(&VAR_12->fh);


 VAR_12->state = VAR_3;
 VAR_12->flags = 0;
 VAR_12->in_path = VAR_4;
 VAR_12->out_path = VAR_4;
 VAR_12->scaler.enabled = 1;

 VAR_12->fh.m2m_ctx = FUNC_18(VAR_11->m2m.m2m_dev, VAR_12, VAR_9);
 if (FUNC_0(VAR_12->fh.m2m_ctx)) {
  VAR_13 = FUNC_1(VAR_12->fh.m2m_ctx);
  goto error_c;
 }

 if (VAR_11->m2m.refcnt++ == 0)
  FUNC_11(VAR_7, &VAR_11->state);

 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13 < 0)
  goto error_m2m_ctx;

 FUNC_9(&VAR_11->lock);
 return 0;

error_m2m_ctx:
 FUNC_19(VAR_12->fh.m2m_ctx);
error_c:
 FUNC_3(VAR_12);
 FUNC_15(&VAR_12->fh);
error_fh:
 FUNC_16(&VAR_12->fh);
 FUNC_6(VAR_12);
unlock:
 FUNC_9(&VAR_11->lock);
 return VAR_13;
}
