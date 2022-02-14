
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct scif_hw_dev {TYPE_1__ dev; } ;
struct scif_driver {int (* probe ) (struct scif_hw_dev*) ;} ;
struct device {int dummy; } ;


 struct scif_hw_dev* FUNC_0 (struct device*) ;
 struct scif_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct scif_hw_dev*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct scif_hw_dev *VAR_1 = FUNC_0(VAR_0);
 struct scif_driver *VAR_2 = FUNC_1(VAR_1->dev.driver);

 return VAR_2->probe(VAR_1);
}
