
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,void*,int ,int ) ;
 struct net_device* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
      unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_1(VAR_6, VAR_5,
           VAR_1,
           VAR_2);
  return FUNC_0(VAR_7);
 }

 return VAR_0;
}
