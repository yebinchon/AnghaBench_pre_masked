
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int ctx_lock; } ;
struct aio_kiocb {int ki_list; struct kioctx* ki_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct aio_kiocb *VAR_0)
{
 struct kioctx *VAR_1 = VAR_0->ki_ctx;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->ctx_lock, VAR_2);
 FUNC_0(&VAR_0->ki_list);
 FUNC_2(&VAR_1->ctx_lock, VAR_2);
}
