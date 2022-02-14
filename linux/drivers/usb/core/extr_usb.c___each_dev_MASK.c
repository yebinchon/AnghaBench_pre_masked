
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct each_dev_arg {int (* fn ) (int ,int ) ;int data; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct each_dev_arg *VAR_2 = (struct each_dev_arg *)VAR_1;


 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_2->fn(FUNC_2(VAR_0), VAR_2->data);
}
