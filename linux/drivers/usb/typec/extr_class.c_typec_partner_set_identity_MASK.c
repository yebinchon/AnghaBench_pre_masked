
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_partner {int dev; int identity; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct typec_partner *VAR_1)
{
 if (!VAR_1->identity)
  return -VAR_0;

 FUNC_0(&VAR_1->dev);
 return 0;
}
