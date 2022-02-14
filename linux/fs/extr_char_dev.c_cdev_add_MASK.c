
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct cdev {unsigned int count; TYPE_1__ kobj; int dev; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,int *,int ,int ,struct cdev*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct cdev *VAR_3, dev_t VAR_4, unsigned VAR_5)
{
 int VAR_6;

 VAR_3->dev = VAR_4;
 VAR_3->count = VAR_5;

 VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_5, ((void*)0),
    VAR_2, VAR_1, VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_3->kobj.parent);

 return 0;
}
