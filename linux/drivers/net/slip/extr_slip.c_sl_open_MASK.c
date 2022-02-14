
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {int flags; int * tty; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct slip* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 struct slip *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->tty == ((void*)0))
  return -VAR_0;

 VAR_3->flags &= (1 << VAR_1);
 FUNC_1(VAR_2);
 return 0;
}
