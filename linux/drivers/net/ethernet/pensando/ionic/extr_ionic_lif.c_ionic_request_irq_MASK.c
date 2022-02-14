
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_queue {char* name; } ;
struct ionic_intr_info {int name; int vector; } ;
struct ionic_qcq {int napi; struct ionic_queue q; struct ionic_intr_info intr; } ;
struct ionic_lif {TYPE_2__* netdev; scalar_t__ registered; TYPE_1__* ionic; } ;
struct device {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {struct device* dev; } ;


 char* VAR_0 ;
 char* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,char*,char*,char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct ionic_lif *VAR_2, struct ionic_qcq *VAR_3)
{
 struct ionic_intr_info *VAR_4 = &VAR_3->intr;
 struct device *VAR_5 = VAR_2->ionic->dev;
 struct ionic_queue *VAR_6 = &VAR_3->q;
 const char *VAR_7;

 if (VAR_2->registered)
  VAR_7 = VAR_2->netdev->name;
 else
  VAR_7 = FUNC_0(VAR_5);

 FUNC_2(VAR_4->name, sizeof(VAR_4->name),
   "%s-%s-%s", VAR_0, VAR_7, VAR_6->name);

 return FUNC_1(VAR_5, VAR_4->vector, VAR_1,
    0, VAR_4->name, &VAR_3->napi);
}
