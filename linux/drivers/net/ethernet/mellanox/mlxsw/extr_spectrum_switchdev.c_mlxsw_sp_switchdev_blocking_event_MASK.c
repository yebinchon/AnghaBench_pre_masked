
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,void*,int ,int ) ;
 int FUNC_5 (struct net_device*,void*,int ,int ) ;
 int FUNC_6 (struct net_device*,void*,int ,int ) ;
 struct net_device* FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_5,
          unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = FUNC_7(VAR_7);
 int VAR_9 = 0;

 switch (VAR_6) {
 case 129:
  if (FUNC_2(VAR_8))
   VAR_9 = FUNC_0(VAR_8, VAR_7);
  else
   VAR_9 = FUNC_5(VAR_8, VAR_7,
       VAR_2,
       VAR_3);
  return FUNC_3(VAR_9);
 case 128:
  if (FUNC_2(VAR_8))
   FUNC_1(VAR_8, VAR_7);
  else
   VAR_9 = FUNC_6(VAR_8, VAR_7,
       VAR_2,
       VAR_4);
  return FUNC_3(VAR_9);
 case 130:
  VAR_9 = FUNC_4(VAR_8, VAR_7,
           VAR_2,
           VAR_1);
  return FUNC_3(VAR_9);
 }

 return VAR_0;
}
