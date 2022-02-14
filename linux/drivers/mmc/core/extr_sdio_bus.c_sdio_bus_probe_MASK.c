
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {TYPE_2__* card; } ;
struct sdio_driver {int (* probe ) (struct sdio_func*,struct sdio_device_id const*) ;} ;
struct sdio_device_id {int dummy; } ;
struct device {int driver; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*,int) ;
 struct sdio_func* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct sdio_func*) ;
 struct sdio_device_id* FUNC_6 (struct sdio_func*,struct sdio_driver*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*,int ) ;
 int FUNC_9 (struct sdio_func*,struct sdio_device_id const*) ;
 struct sdio_driver* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_2)
{
 struct sdio_driver *VAR_3 = FUNC_10(VAR_2->driver);
 struct sdio_func *VAR_4 = FUNC_2(VAR_2);
 const struct sdio_device_id *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, 0);
 if (VAR_6)
  return VAR_6;







 if (VAR_4->card->host->caps & VAR_1) {
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_6 < 0)
   goto disable_runtimepm;
 }



 FUNC_5(VAR_4);
 VAR_6 = FUNC_8(VAR_4, 0);
 FUNC_7(VAR_4);
 if (VAR_6)
  goto disable_runtimepm;

 VAR_6 = VAR_3->probe(VAR_4, VAR_5);
 if (VAR_6)
  goto disable_runtimepm;

 return 0;

disable_runtimepm:
 if (VAR_4->card->host->caps & VAR_1)
  FUNC_4(VAR_2);
 FUNC_1(VAR_2, 0);
 return VAR_6;
}
