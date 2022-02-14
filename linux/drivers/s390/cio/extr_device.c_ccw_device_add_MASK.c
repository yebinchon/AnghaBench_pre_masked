
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * bus; } ;
struct ccw_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct ccw_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;

 VAR_2->bus = &VAR_0;
 return FUNC_0(VAR_2);
}
