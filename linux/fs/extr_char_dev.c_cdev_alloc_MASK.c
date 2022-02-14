
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int kobj; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 struct cdev* FUNC_2 (int,int ) ;

struct cdev *FUNC_3(void)
{
 struct cdev *VAR_2 = FUNC_2(sizeof(struct cdev), VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->list);
  FUNC_1(&VAR_2->kobj, &VAR_1);
 }
 return VAR_2;
}
