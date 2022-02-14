
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lp8727_chg {int irq; int debounce_jiffies; int dev; int work; TYPE_2__* pdata; TYPE_1__* client; } ;
struct TYPE_4__ {unsigned int debounce_msec; } ;
struct TYPE_3__ {int irq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int,int *,int ,int,char*,struct lp8727_chg*) ;

__attribute__((used)) static int FUNC_4(struct lp8727_chg *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_5->client->irq;
 unsigned VAR_8 = VAR_5->pdata ? VAR_5->pdata->debounce_msec :
      VAR_0;

 FUNC_0(&VAR_5->work, VAR_3);

 if (VAR_7 <= 0) {
  FUNC_1(VAR_5->dev, "invalid irq number: %d\n", VAR_7);
  return 0;
 }

 VAR_6 = FUNC_3(VAR_7, ((void*)0), VAR_4,
    VAR_2 | VAR_1,
    "lp8727_irq", VAR_5);

 if (VAR_6)
  return VAR_6;

 VAR_5->irq = VAR_7;
 VAR_5->debounce_jiffies = FUNC_2(VAR_8);

 return 0;
}
