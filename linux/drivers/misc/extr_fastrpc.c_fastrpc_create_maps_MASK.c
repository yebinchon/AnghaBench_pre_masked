
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fastrpc_invoke_ctx {int nscalars; int * maps; TYPE_2__* args; TYPE_3__* fl; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* sctx; } ;
struct TYPE_5__ {int fd; scalar_t__ length; scalar_t__ reserved; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (TYPE_3__*,int,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct fastrpc_invoke_ctx *VAR_1)
{
 struct device *VAR_2 = VAR_1->fl->sctx->dev;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->nscalars; ++VAR_3) {

  if (VAR_1->args[VAR_3].reserved)
   return -VAR_0;

  if (VAR_1->args[VAR_3].fd == 0 || VAR_1->args[VAR_3].fd == -1 ||
      VAR_1->args[VAR_3].length == 0)
   continue;

  VAR_4 = FUNC_1(VAR_1->fl, VAR_1->args[VAR_3].fd,
      VAR_1->args[VAR_3].length, &VAR_1->maps[VAR_3]);
  if (VAR_4) {
   FUNC_0(VAR_2, "Error Creating map %d\n", VAR_4);
   return -VAR_0;
  }

 }
 return 0;
}
