
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct ifmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_2, struct ifmap *VAR_3)
{
 if (VAR_2->flags & VAR_1)
  return -VAR_0;
 return 0;
}
