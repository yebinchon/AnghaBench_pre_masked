
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fdp1_job {TYPE_1__* dst; int active; int previous; } ;
struct fdp1_dev {int m2m_dev; int irqlock; int v4l2_dev; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct fdp1_ctx {scalar_t__ num_processed; scalar_t__ translen; TYPE_2__ fh; struct fdp1_dev* fdp1; scalar_t__ aborting; int deint_mode; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_3__ {int vb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fdp1_dev*,char*,...) ;
 int FUNC_2 (struct fdp1_ctx*) ;
 int FUNC_3 (struct fdp1_ctx*,int ) ;
 int FUNC_4 (struct fdp1_dev*,struct fdp1_job*) ;
 struct fdp1_job* FUNC_5 (struct fdp1_dev*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,int) ;
 struct fdp1_ctx* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct fdp1_dev *VAR_0,
        enum vb2_buffer_state VAR_1)
{
 struct fdp1_ctx *VAR_2;
 unsigned long VAR_3;
 struct fdp1_job *VAR_4 = FUNC_5(VAR_0);

 FUNC_1(VAR_0, "+\n");

 VAR_2 = FUNC_10(VAR_0->m2m_dev);

 if (VAR_2 == ((void*)0)) {
  FUNC_8(&VAR_0->v4l2_dev,
   "Instance released before the end of transaction\n");
  return;
 }

 VAR_2->num_processed++;





 if (FUNC_0(VAR_2->deint_mode))
  FUNC_3(VAR_2, VAR_4->previous);
 else
  FUNC_3(VAR_2, VAR_4->active);

 FUNC_6(&VAR_0->irqlock, VAR_3);
 FUNC_9(VAR_4->dst->vb, VAR_1);
 VAR_4->dst = ((void*)0);
 FUNC_7(&VAR_0->irqlock, VAR_3);


 FUNC_4(VAR_0, VAR_4);

 FUNC_1(VAR_0, "curr_ctx->num_processed %d curr_ctx->translen %d\n",
  VAR_2->num_processed, VAR_2->translen);

 if (VAR_2->num_processed == VAR_2->translen ||
   VAR_2->aborting) {
  FUNC_1(VAR_2->fdp1, "Finishing transaction\n");
  VAR_2->num_processed = 0;
  FUNC_11(VAR_0->m2m_dev, VAR_2->fh.m2m_ctx);
 } else {




  FUNC_2(VAR_2);
 }
}
