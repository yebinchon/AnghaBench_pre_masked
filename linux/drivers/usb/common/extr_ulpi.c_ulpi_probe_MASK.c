
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpi_driver {int (* probe ) (int ) ;} ;
struct device {int of_node; int driver; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct ulpi_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct ulpi_driver *VAR_1 = FUNC_3(VAR_0->driver);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->of_node, 0);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_1->probe(FUNC_2(VAR_0));
}
