
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_ctx {TYPE_1__* ntb; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct perf_ctx*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct perf_ctx *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->ntb->dev, "Msg status bits %#llx\n",
  FUNC_1(VAR_1->ntb));


 (void)FUNC_2(VAR_1);
}
