
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;





 int FUNC_0 (struct net_device*,unsigned long,void*) ;
 int FUNC_1 (struct net_device*,struct net_device*,unsigned long,void*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
      struct net_device *VAR_1,
      unsigned long VAR_2, void *VAR_3)
{
 switch (VAR_2) {
 case 128:
 case 129:
  return FUNC_1(VAR_0, VAR_1,
          VAR_2, VAR_3);
 case 130:
  return FUNC_0(VAR_1, VAR_2,
          VAR_3);
 }

 return 0;
}
