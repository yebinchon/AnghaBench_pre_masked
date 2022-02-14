
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_queue {int index; TYPE_1__* lif; int stop; } ;
struct TYPE_2__ {int netdev; } ;


 scalar_t__ FUNC_0 (struct ionic_queue*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ionic_queue *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_4(!FUNC_0(VAR_0, VAR_1))) {
  FUNC_1(VAR_0->lif->netdev, VAR_0->index);
  VAR_0->stop++;
  VAR_2 = 1;


  FUNC_3();
  if (FUNC_0(VAR_0, VAR_1)) {
   FUNC_2(VAR_0->lif->netdev, VAR_0->index);
   VAR_2 = 0;
  }
 }

 return VAR_2;
}
