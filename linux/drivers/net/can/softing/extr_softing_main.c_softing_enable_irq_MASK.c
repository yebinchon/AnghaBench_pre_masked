
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int requested; int nr; } ;
struct softing {TYPE_3__ irq; TYPE_2__* pdev; TYPE_1__* pdat; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int generation; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct softing*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,struct softing*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct softing *VAR_4, int VAR_5)
{
 int VAR_6;

 if (!VAR_4->irq.nr) {
  return 0;
 } else if (VAR_4->irq.requested && !VAR_5) {
  FUNC_2(VAR_4->irq.nr, VAR_4);
  VAR_4->irq.requested = 0;
 } else if (!VAR_4->irq.requested && VAR_5) {
  VAR_6 = FUNC_3(VAR_4->irq.nr,
    (VAR_4->pdat->generation >= 2) ?
     VAR_3 : VAR_2,
    VAR_1, VAR_0,
    FUNC_1(&VAR_4->pdev->dev), VAR_4);
  if (VAR_6) {
   FUNC_0(&VAR_4->pdev->dev,
     "request_threaded_irq(%u) failed\n",
     VAR_4->irq.nr);
   return VAR_6;
  }
  VAR_4->irq.requested = 1;
 }
 return 0;
}
