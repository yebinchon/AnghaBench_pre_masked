
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_session_ctx {int used; } ;
struct fastrpc_channel_ctx {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct fastrpc_channel_ctx *VAR_0,
     struct fastrpc_session_ctx *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_1->used = 0;
 FUNC_1(&VAR_0->lock, VAR_2);
}
