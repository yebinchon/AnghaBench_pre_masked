
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_session_ctx {int used; scalar_t__ valid; } ;
struct fastrpc_channel_ctx {int sesscount; int lock; struct fastrpc_session_ctx* session; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct fastrpc_session_ctx *FUNC_2(
     struct fastrpc_channel_ctx *VAR_0)
{
 struct fastrpc_session_ctx *VAR_1 = ((void*)0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->sesscount; VAR_3++) {
  if (!VAR_0->session[VAR_3].used && VAR_0->session[VAR_3].valid) {
   VAR_0->session[VAR_3].used = 1;
   VAR_1 = &VAR_0->session[VAR_3];
   break;
  }
 }
 FUNC_1(&VAR_0->lock, VAR_2);

 return VAR_1;
}
