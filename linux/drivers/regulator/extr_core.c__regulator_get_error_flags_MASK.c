
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_error_flags ) (struct regulator_dev*,unsigned int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
     unsigned int *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1);


 if (!VAR_1->desc->ops->get_error_flags) {
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_3 = VAR_1->desc->ops->get_error_flags(VAR_1, VAR_2);
out:
 FUNC_1(VAR_1);
 return VAR_3;
}
