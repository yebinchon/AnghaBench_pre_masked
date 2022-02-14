
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int numqueues; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, bool VAR_2)
{
 if (VAR_2) {
  struct tun_struct *VAR_3 = FUNC_0(VAR_1);

  if (!VAR_3->numqueues)
   return -VAR_0;

  FUNC_2(VAR_1);
 } else {
  FUNC_1(VAR_1);
 }
 return 0;
}
