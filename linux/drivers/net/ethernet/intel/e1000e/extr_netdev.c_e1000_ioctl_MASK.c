
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct net_device*,struct ifreq*,int) ;
 int FUNC_1 (struct net_device*,struct ifreq*) ;
 int FUNC_2 (struct net_device*,struct ifreq*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 131:
 case 130:
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_2(VAR_1, VAR_2);
 case 132:
  return FUNC_1(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
}
