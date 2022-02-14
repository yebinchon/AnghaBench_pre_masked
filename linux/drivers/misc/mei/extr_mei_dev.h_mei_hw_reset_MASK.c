
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hw_reset ) (struct mei_device*,int) ;} ;


 int FUNC_0 (struct mei_device*,int) ;

__attribute__((used)) static inline int FUNC_1(struct mei_device *VAR_0, bool VAR_1)
{
 return VAR_0->ops->hw_reset(VAR_0, VAR_1);
}
