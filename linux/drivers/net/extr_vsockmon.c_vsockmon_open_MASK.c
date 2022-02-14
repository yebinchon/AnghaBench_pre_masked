
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int module; struct net_device* dev; } ;
struct vsockmon {TYPE_1__ vt; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct vsockmon* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct vsockmon *VAR_2 = FUNC_0(VAR_1);

 VAR_2->vt.dev = VAR_1;
 VAR_2->vt.module = VAR_0;
 return FUNC_1(&VAR_2->vt);
}
