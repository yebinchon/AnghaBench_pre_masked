
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device_id {int name; } ;
struct TYPE_2__ {int name; } ;
struct rpmsg_device {TYPE_1__ id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(const struct rpmsg_device *VAR_1,
      const struct rpmsg_device_id *VAR_2)
{
 return FUNC_0(VAR_2->name, VAR_1->id.name, VAR_0) == 0;
}
