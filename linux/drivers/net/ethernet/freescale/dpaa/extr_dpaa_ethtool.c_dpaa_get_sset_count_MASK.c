
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_7 = FUNC_0() + 1;
 VAR_6 = VAR_7 * (VAR_2 + VAR_0) +
   VAR_1;

 switch (VAR_5) {
 case 128:
  return VAR_6;
 default:
  return -VAR_3;
 }
}
