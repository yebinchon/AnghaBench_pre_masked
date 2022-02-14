
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int ctx_lock; struct ntb_ctx_ops const* ctx_ops; void* ctx; } ;
struct ntb_ctx_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ntb_ctx_ops const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ntb_dev *VAR_1, void *VAR_2,
  const struct ntb_ctx_ops *VAR_3)
{
 unsigned long VAR_4;

 if (!FUNC_0(VAR_3))
  return -VAR_0;
 if (VAR_1->ctx_ops)
  return -VAR_0;

 FUNC_1(&VAR_1->ctx_lock, VAR_4);
 {
  VAR_1->ctx = VAR_2;
  VAR_1->ctx_ops = VAR_3;
 }
 FUNC_2(&VAR_1->ctx_lock, VAR_4);

 return 0;
}
