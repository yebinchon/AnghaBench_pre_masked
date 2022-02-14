
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5, int VAR_6)
{
 switch (VAR_6) {
 case 128:
  return FUNC_0(VAR_4) +
         FUNC_0(VAR_1) +
         FUNC_0(VAR_3);
 case 129:
  return FUNC_0(VAR_2);
 default:
  return -VAR_0;
 }
}
