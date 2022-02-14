
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct slot {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_power ) (struct slot*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct slot*) ;

__attribute__((used)) static u8
FUNC_1(struct slot *VAR_1)
{
 u8 VAR_2 = 1;

 if (VAR_0->ops->get_power)
  VAR_2 = VAR_0->ops->get_power(VAR_1);
 return VAR_2;
}
