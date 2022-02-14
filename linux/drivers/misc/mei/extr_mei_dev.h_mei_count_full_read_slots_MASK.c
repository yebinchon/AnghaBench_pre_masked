
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* rdbuf_full_slots ) (struct mei_device*) ;} ;


 int FUNC_0 (struct mei_device*) ;

__attribute__((used)) static inline int FUNC_1(struct mei_device *VAR_0)
{
 return VAR_0->ops->rdbuf_full_slots(VAR_0);
}
