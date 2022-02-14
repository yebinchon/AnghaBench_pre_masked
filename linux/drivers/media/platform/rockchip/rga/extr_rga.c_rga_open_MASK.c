
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_rga {int mutex; int m2m_dev; } ;
struct TYPE_3__ {int * ctrl_handler; int m2m_ctx; } ;
struct rga_ctx {int ctrl_handler; TYPE_1__ fh; void* out; void* in; struct rockchip_rga* rga; } ;
struct file {TYPE_1__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_3 ;
 int FUNC_2 (struct rga_ctx*) ;
 struct rga_ctx* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (struct rga_ctx*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,struct rga_ctx*,int *) ;
 int FUNC_11 (struct file*) ;
 struct rockchip_rga* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_5)
{
 struct rockchip_rga *VAR_6 = FUNC_12(VAR_5);
 struct rga_ctx *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->rga = VAR_6;

 VAR_7->in = VAR_3;
 VAR_7->out = VAR_3;

 if (FUNC_4(&VAR_6->mutex)) {
  FUNC_2(VAR_7);
  return -VAR_1;
 }
 VAR_7->fh.m2m_ctx = FUNC_10(VAR_6->m2m_dev, VAR_7, &VAR_4);
 if (FUNC_0(VAR_7->fh.m2m_ctx)) {
  VAR_8 = FUNC_1(VAR_7->fh.m2m_ctx);
  FUNC_5(&VAR_6->mutex);
  FUNC_2(VAR_7);
  return VAR_8;
 }
 FUNC_9(&VAR_7->fh, FUNC_11(VAR_5));
 VAR_5->private_data = &VAR_7->fh;
 FUNC_8(&VAR_7->fh);

 FUNC_6(VAR_7);


 FUNC_7(&VAR_7->ctrl_handler);

 VAR_7->fh.ctrl_handler = &VAR_7->ctrl_handler;
 FUNC_5(&VAR_6->mutex);

 return 0;
}
