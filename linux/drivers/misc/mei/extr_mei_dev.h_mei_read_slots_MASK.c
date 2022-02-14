
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (struct mei_device*,unsigned char*,unsigned long) ;} ;


 int FUNC_0 (struct mei_device*,unsigned char*,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct mei_device *VAR_0,
       unsigned char *VAR_1, unsigned long VAR_2)
{
 VAR_0->ops->read(VAR_0, VAR_1, VAR_2);
}
