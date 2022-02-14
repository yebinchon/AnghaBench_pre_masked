
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;

struct net_device *FUNC_3(int VAR_3)
{
 struct net_device *VAR_4 = FUNC_1(VAR_3);
 static int VAR_5;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 if (VAR_1 > 0 && !VAR_5) {
  VAR_5 = 1;
  FUNC_2("%s", VAR_2);
 }

 return VAR_4;
}
