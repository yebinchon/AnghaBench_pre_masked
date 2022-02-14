
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int reset_task; int device; } ;
struct net_device {int name; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct niu* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct niu *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->device, "%s: Transmit timed out, resetting\n",
  VAR_0->name);

 FUNC_2(&VAR_1->reset_task);
}
