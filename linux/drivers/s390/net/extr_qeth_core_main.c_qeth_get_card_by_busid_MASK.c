
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct ccwgroup_device {int dev; } ;


 struct qeth_card* FUNC_0 (int *) ;
 struct ccwgroup_device* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

struct qeth_card *FUNC_3(char *VAR_1)
{
 struct ccwgroup_device *VAR_2;
 struct qeth_card *VAR_3;

 VAR_2 = FUNC_1(&VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(&VAR_2->dev);
 FUNC_2(&VAR_2->dev);
 return VAR_3;
}
