
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lp8788_irq_data {int irq_lock; scalar_t__ domain; struct lp8788* lp; } ;
struct lp8788 {int irq; TYPE_1__* dev; scalar_t__ irqdm; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 struct lp8788_irq_data* FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,struct lp8788_irq_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *,int ,int,char*,struct lp8788_irq_data*) ;

int FUNC_6(struct lp8788 *VAR_8, int VAR_9)
{
 struct lp8788_irq_data *VAR_10;
 int VAR_11;

 if (VAR_9 <= 0) {
  FUNC_1(VAR_8->dev, "invalid irq number: %d\n", VAR_9);
  return 0;
 }

 VAR_10 = FUNC_2(VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->lp = VAR_8;
 VAR_10->domain = FUNC_3(VAR_8->dev->of_node, VAR_5,
     &VAR_6, VAR_10);
 if (!VAR_10->domain) {
  FUNC_0(VAR_8->dev, "failed to add irq domain err\n");
  return -VAR_0;
 }

 VAR_8->irqdm = VAR_10->domain;
 FUNC_4(&VAR_10->irq_lock);

 VAR_11 = FUNC_5(VAR_9, ((void*)0), VAR_7,
    VAR_4 | VAR_3,
    "lp8788-irq", VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_8->dev, "failed to create a thread for IRQ_N\n");
  return VAR_11;
 }

 VAR_8->irq = VAR_9;

 return 0;
}
