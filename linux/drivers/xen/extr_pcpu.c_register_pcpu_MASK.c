
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int groups; int (* release ) (struct device*) ;int id; int * bus; } ;
struct pcpu {int cpu_id; struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pcpu *VAR_3)
{
 struct device *VAR_4;
 int VAR_5 = -VAR_0;

 if (!VAR_3)
  return VAR_5;

 VAR_4 = &VAR_3->dev;
 VAR_4->bus = &VAR_2;
 VAR_4->id = VAR_3->cpu_id;
 VAR_4->release = FUNC_1;
 VAR_4->groups = VAR_1;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4);
  return VAR_5;
 }

 return 0;
}
