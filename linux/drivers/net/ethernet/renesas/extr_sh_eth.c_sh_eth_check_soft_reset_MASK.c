
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 100; VAR_4 > 0; VAR_4--) {
  if (!(FUNC_2(VAR_3, VAR_0) & VAR_1))
   return 0;
  FUNC_0(1);
 }

 FUNC_1(VAR_3, "Device reset failed\n");
 return -VAR_2;
}
