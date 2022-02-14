
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_switch {TYPE_2__* tb; TYPE_1__* nvm; scalar_t__ safe_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int major; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int,int) ;
 struct tb_switch* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct tb_switch *VAR_5 = FUNC_4(VAR_2);
 int VAR_6;

 if (!FUNC_0(&VAR_5->tb->lock))
  return FUNC_2();

 if (VAR_5->safe_mode)
  VAR_6 = -VAR_1;
 else if (!VAR_5->nvm)
  VAR_6 = -VAR_0;
 else
  VAR_6 = FUNC_3(VAR_4, "%x.%x\n", VAR_5->nvm->major, VAR_5->nvm->minor);

 FUNC_1(&VAR_5->tb->lock);

 return VAR_6;
}
