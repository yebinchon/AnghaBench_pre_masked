
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m2m_ctx; } ;
struct jpu_ctx {TYPE_1__ fh; int ctrl_handler; } ;
struct jpu {scalar_t__ ref_count; int mutex; int clk; } ;
struct file {int private_data; } ;


 int FUNC_0 (int ) ;
 struct jpu_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct jpu_ctx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 struct jpu* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0)
{
 struct jpu *VAR_1 = FUNC_9(VAR_0);
 struct jpu_ctx *VAR_2 = FUNC_1(VAR_0->private_data);

 FUNC_8(VAR_2->fh.m2m_ctx);
 FUNC_5(&VAR_2->ctrl_handler);
 FUNC_6(&VAR_2->fh);
 FUNC_7(&VAR_2->fh);
 FUNC_2(VAR_2);

 FUNC_3(&VAR_1->mutex);
 if (--VAR_1->ref_count == 0)
  FUNC_0(VAR_1->clk);
 FUNC_4(&VAR_1->mutex);

 return 0;
}
