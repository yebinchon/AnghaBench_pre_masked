
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ems_usb {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ems_usb*) ;
 int FUNC_2 (struct ems_usb*,int ) ;
 struct ems_usb* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct ems_usb *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   FUNC_5(VAR_3->netdev);

  FUNC_4(VAR_2, "couldn't start device: %d\n", VAR_4);

  FUNC_0(VAR_2);

  return VAR_4;
 }


 FUNC_6(VAR_2);

 return 0;
}
