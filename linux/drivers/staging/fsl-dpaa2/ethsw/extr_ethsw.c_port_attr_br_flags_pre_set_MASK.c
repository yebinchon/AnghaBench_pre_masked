
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3,
          struct switchdev_trans *VAR_4,
          unsigned long VAR_5)
{
 if (VAR_5 & ~(VAR_1 | VAR_0))
  return -VAR_2;

 return 0;
}
