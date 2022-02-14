
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (unsigned long,struct net_device*,void*) ;
 struct net_device* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_1,
      unsigned long VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_3(VAR_3);

 if (!FUNC_0(VAR_4))
  return VAR_0;

 switch (VAR_2) {
 case 129:
 case 128:
  return FUNC_2(VAR_2, VAR_4, VAR_3);
 case 130:
  return FUNC_1(VAR_4, VAR_3);
 }

 return VAR_0;
}
