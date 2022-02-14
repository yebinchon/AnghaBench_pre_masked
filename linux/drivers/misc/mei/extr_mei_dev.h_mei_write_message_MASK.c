
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct mei_device*,void const*,size_t,void const*,size_t) ;} ;


 int FUNC_0 (struct mei_device*,void const*,size_t,void const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct mei_device *VAR_0,
        const void *VAR_1, size_t VAR_2,
        const void *VAR_3, size_t VAR_4)
{
 return VAR_0->ops->write(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
