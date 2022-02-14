
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 == VAR_2)
  VAR_5 += VAR_0;

 if (VAR_5 == 0)
  return -VAR_1;
 return VAR_5;
}
