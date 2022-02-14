
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct fastrpc_session_ctx {scalar_t__ sid; } ;
struct fastrpc_channel_ctx {int lock; int sesscount; TYPE_1__* session; } ;
struct TYPE_3__ {scalar_t__ sid; int valid; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct fastrpc_channel_ctx *VAR_2 = FUNC_0(VAR_1->dev.parent);
 struct fastrpc_session_ctx *VAR_3 = FUNC_0(&VAR_1->dev);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->lock, VAR_4);
 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->session[VAR_5].sid == VAR_3->sid) {
   VAR_2->session[VAR_5].valid = 0;
   VAR_2->sesscount--;
  }
 }
 FUNC_2(&VAR_2->lock, VAR_4);

 return 0;
}
