
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ refcnt; } ;
struct gsc_dev {int lock; int state; TYPE_1__ m2m; } ;
struct gsc_ctx {int fh; int m2m_ctx; struct gsc_dev* gsc_dev; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 struct gsc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct gsc_ctx*) ;
 int FUNC_3 (struct gsc_ctx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2)
{
 struct gsc_ctx *VAR_3 = FUNC_1(VAR_2->private_data);
 struct gsc_dev *VAR_4 = VAR_3->gsc_dev;

 FUNC_6("pid: %d, state: 0x%lx, refcnt= %d",
  FUNC_7(VAR_1), VAR_4->state, VAR_4->m2m.refcnt);

 FUNC_4(&VAR_4->lock);

 FUNC_10(VAR_3->m2m_ctx);
 FUNC_2(VAR_3);
 FUNC_8(&VAR_3->fh);
 FUNC_9(&VAR_3->fh);

 if (--VAR_4->m2m.refcnt <= 0)
  FUNC_0(VAR_0, &VAR_4->state);
 FUNC_3(VAR_3);

 FUNC_5(&VAR_4->lock);
 return 0;
}
