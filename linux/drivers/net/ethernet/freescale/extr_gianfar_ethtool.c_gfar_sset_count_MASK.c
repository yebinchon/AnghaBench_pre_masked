
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {int device_flags; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4, int VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 128:
  if (VAR_6->device_flags & VAR_1)
   return VAR_3;
  else
   return VAR_2;
 default:
  return -VAR_0;
 }
}
