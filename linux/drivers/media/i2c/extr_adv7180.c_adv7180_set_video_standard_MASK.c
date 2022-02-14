
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7180_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int (* set_std ) (struct adv7180_state*,unsigned int) ;} ;


 int FUNC_0 (struct adv7180_state*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct adv7180_state *VAR_0,
 unsigned int VAR_1)
{
 return VAR_0->chip_info->set_std(VAR_0, VAR_1);
}
