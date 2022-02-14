
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lance_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct lance_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 int VAR_3;
 struct lance_private *VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_4->base + VAR_0, VAR_1);

 return 0;
}
