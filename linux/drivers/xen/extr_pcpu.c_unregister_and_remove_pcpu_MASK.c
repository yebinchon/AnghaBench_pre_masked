
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pcpu {struct device dev; } ;


 int FUNC_0 (struct device*) ;

__attribute__((used)) static void FUNC_1(struct pcpu *VAR_0)
{
 struct device *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = &VAR_0->dev;

 FUNC_0(VAR_1);
}
