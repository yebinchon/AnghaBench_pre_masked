
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int refcnt; int m2m_dev; int vfd; } ;
struct gsc_dev {int lock; int state; TYPE_3__ m2m; } ;
struct TYPE_11__ {int * ctrl_handler; } ;
struct TYPE_9__ {void* fmt; } ;
struct TYPE_8__ {void* fmt; } ;
struct gsc_ctx {TYPE_4__ fh; int m2m_ctx; void* out_path; void* in_path; scalar_t__ flags; int state; TYPE_2__ d_frame; TYPE_1__ s_frame; struct gsc_dev* gsc_dev; int ctrl_handler; } ;
struct file {TYPE_4__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct gsc_ctx*) ;
 int FUNC_4 (struct gsc_ctx*) ;
 int FUNC_5 (struct gsc_ctx*) ;
 struct gsc_ctx* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,struct gsc_ctx*,...) ;
 int FUNC_10 (char*) ;
 int VAR_7 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (int ,struct gsc_ctx*,int ) ;
 struct gsc_dev* FUNC_18 (struct file*) ;

__attribute__((used)) static int FUNC_19(struct file *VAR_8)
{
 struct gsc_dev *VAR_9 = FUNC_18(VAR_8);
 struct gsc_ctx *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_9("pid: %d, state: 0x%lx", FUNC_12(VAR_6), VAR_9->state);

 if (FUNC_7(&VAR_9->lock))
  return -VAR_1;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto unlock;
 }

 FUNC_16(&VAR_10->fh, VAR_9->m2m.vfd);
 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11)
  goto error_fh;


 VAR_10->fh.ctrl_handler = &VAR_10->ctrl_handler;
 VAR_8->private_data = &VAR_10->fh;
 FUNC_13(&VAR_10->fh);

 VAR_10->gsc_dev = VAR_9;

 VAR_10->s_frame.fmt = FUNC_2(0);
 VAR_10->d_frame.fmt = FUNC_2(0);

 VAR_10->state = VAR_3;
 VAR_10->flags = 0;
 VAR_10->in_path = VAR_4;
 VAR_10->out_path = VAR_4;

 VAR_10->m2m_ctx = FUNC_17(VAR_9->m2m.m2m_dev, VAR_10, VAR_7);
 if (FUNC_0(VAR_10->m2m_ctx)) {
  FUNC_10("Failed to initialize m2m context");
  VAR_11 = FUNC_1(VAR_10->m2m_ctx);
  goto error_ctrls;
 }

 if (VAR_9->m2m.refcnt++ == 0)
  FUNC_11(VAR_5, &VAR_9->state);

 FUNC_9("gsc m2m driver is opened, ctx(0x%p)", VAR_10);

 FUNC_8(&VAR_9->lock);
 return 0;

error_ctrls:
 FUNC_4(VAR_10);
 FUNC_14(&VAR_10->fh);
error_fh:
 FUNC_15(&VAR_10->fh);
 FUNC_5(VAR_10);
unlock:
 FUNC_8(&VAR_9->lock);
 return VAR_11;
}
