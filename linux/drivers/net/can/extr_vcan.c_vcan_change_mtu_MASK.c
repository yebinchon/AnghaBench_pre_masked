
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_5, int VAR_6)
{

 if (VAR_5->flags & VAR_4)
  return -VAR_2;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_0)
  return -VAR_3;

 VAR_5->mtu = VAR_6;
 return 0;
}
