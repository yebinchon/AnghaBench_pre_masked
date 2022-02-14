
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lan743x_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lan743x_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3)
{
 struct lan743x_adapter *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->flags & VAR_0)
  return VAR_2;

 return VAR_1;
}
