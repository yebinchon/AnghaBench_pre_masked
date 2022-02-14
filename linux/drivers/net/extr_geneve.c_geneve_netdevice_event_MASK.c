
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int) ;
 struct net_device* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_5,
      unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = FUNC_1(VAR_7);

 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_1) {
  FUNC_0(VAR_8, VAR_6 == VAR_2);
 } else if (VAR_6 == VAR_3) {
  FUNC_0(VAR_8, 0);
 } else if (VAR_6 == VAR_0) {
  FUNC_0(VAR_8, 1);
 }

 return VAR_4;
}
