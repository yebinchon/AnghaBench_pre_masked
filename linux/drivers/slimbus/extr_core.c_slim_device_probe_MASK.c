
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_driver {int (* probe ) (struct slim_device*) ;} ;
struct slim_device {int dev; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct slim_device*,int ) ;
 int FUNC_2 (struct slim_device*) ;
 int FUNC_3 (struct slim_device*) ;
 struct slim_device* FUNC_4 (struct device*) ;
 struct slim_driver* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct slim_device *VAR_3 = FUNC_4(VAR_2);
 struct slim_driver *VAR_4 = FUNC_5(VAR_2->driver);
 int VAR_5;

 VAR_5 = VAR_4->probe(VAR_3);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5) {
  FUNC_1(VAR_3, VAR_1);
 } else {
  FUNC_0(&VAR_3->dev, "Failed to get logical address\n");
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
