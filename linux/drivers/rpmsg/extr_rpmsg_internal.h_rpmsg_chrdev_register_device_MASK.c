
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct rpmsg_device {char* driver_override; TYPE_1__ id; } ;


 int FUNC_0 (struct rpmsg_device*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static inline int FUNC_2(struct rpmsg_device *VAR_0)
{
 FUNC_1(VAR_0->id.name, "rpmsg_chrdev");
 VAR_0->driver_override = "rpmsg_chrdev";

 return FUNC_0(VAR_0);
}
