
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {TYPE_1__* card; scalar_t__ irq_handler; } ;
struct sdio_driver {int name; int (* remove ) (struct sdio_func*) ;} ;
struct device {int driver; } ;
struct TYPE_4__ {int caps; } ;
struct TYPE_3__ {TYPE_2__* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int) ;
 struct sdio_func* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 struct sdio_driver* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1)
{
 struct sdio_driver *VAR_2 = FUNC_10(VAR_1->driver);
 struct sdio_func *VAR_3 = FUNC_1(VAR_1);


 if (VAR_3->card->host->caps & VAR_0)
  FUNC_2(VAR_1);

 VAR_2->remove(VAR_3);

 if (VAR_3->irq_handler) {
  FUNC_5("WARNING: driver %s did not remove its interrupt handler!\n",
   VAR_2->name);
  FUNC_6(VAR_3);
  FUNC_8(VAR_3);
  FUNC_7(VAR_3);
 }


 if (VAR_3->card->host->caps & VAR_0)
  FUNC_3(VAR_1);


 if (VAR_3->card->host->caps & VAR_0)
  FUNC_4(VAR_1);

 FUNC_0(VAR_1, 0);

 return 0;
}
