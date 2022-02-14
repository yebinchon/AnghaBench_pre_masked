
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mei_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_hdr ) (struct mei_device const*) ;} ;


 int FUNC_0 (struct mei_device const*) ;

__attribute__((used)) static inline u32 FUNC_1(const struct mei_device *VAR_0)
{
 return VAR_0->ops->read_hdr(VAR_0);
}
