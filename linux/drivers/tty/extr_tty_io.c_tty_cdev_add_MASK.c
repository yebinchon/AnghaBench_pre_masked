
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_driver {TYPE_1__** cdevs; int owner; } ;
typedef int dev_t ;
struct TYPE_3__ {int kobj; int owner; int * ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_2, dev_t VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6;


 VAR_2->cdevs[VAR_4] = FUNC_1();
 if (!VAR_2->cdevs[VAR_4])
  return -VAR_0;
 VAR_2->cdevs[VAR_4]->ops = &VAR_1;
 VAR_2->cdevs[VAR_4]->owner = VAR_2->owner;
 VAR_6 = FUNC_0(VAR_2->cdevs[VAR_4], VAR_3, VAR_5);
 if (VAR_6)
  FUNC_2(&VAR_2->cdevs[VAR_4]->kobj);
 return VAR_6;
}
