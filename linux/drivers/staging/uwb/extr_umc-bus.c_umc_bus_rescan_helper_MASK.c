
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;


 int FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->driver)
  VAR_2 = FUNC_0(VAR_0);

 return VAR_2;
}
