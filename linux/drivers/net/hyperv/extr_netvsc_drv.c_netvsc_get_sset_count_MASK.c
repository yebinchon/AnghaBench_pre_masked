
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int dummy; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netvsc_device*) ;
 int VAR_4 ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 struct netvsc_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, int VAR_6)
{
 struct net_device_context *VAR_7 = FUNC_1(VAR_5);
 struct netvsc_device *VAR_8 = FUNC_2(VAR_7->nvdev);

 if (!VAR_8)
  return -VAR_1;

 switch (VAR_6) {
 case 128:
  return VAR_2
   + VAR_4
   + FUNC_0(VAR_8)
   + VAR_3;
 default:
  return -VAR_0;
 }
}
