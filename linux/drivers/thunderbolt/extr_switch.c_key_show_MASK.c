
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_switch {TYPE_1__* tb; scalar_t__ key; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,...) ;
 struct tb_switch* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct tb_switch *VAR_4 = FUNC_4(VAR_1);
 ssize_t VAR_5;

 if (!FUNC_0(&VAR_4->tb->lock))
  return FUNC_2();

 if (VAR_4->key)
  VAR_5 = FUNC_3(VAR_3, "%*phN\n", VAR_0, VAR_4->key);
 else
  VAR_5 = FUNC_3(VAR_3, "\n");

 FUNC_1(&VAR_4->tb->lock);
 return VAR_5;
}
