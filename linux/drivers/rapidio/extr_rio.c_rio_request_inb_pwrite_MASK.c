
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_dev {int (* pwcback ) (struct rio_dev*,union rio_pw_msg*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct rio_dev *VAR_2,
 int (*VAR_3)(struct rio_dev *VAR_4, union rio_pw_msg *VAR_5, int VAR_6))
{
 int VAR_7 = 0;

 FUNC_0(&VAR_1);
 if (VAR_2->pwcback)
  VAR_7 = -VAR_0;
 else
  VAR_2->pwcback = VAR_3;

 FUNC_1(&VAR_1);
 return VAR_7;
}
