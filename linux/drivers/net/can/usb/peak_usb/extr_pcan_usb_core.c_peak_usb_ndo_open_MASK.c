
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peak_usb_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct peak_usb_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct peak_usb_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct peak_usb_device *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0, "couldn't start device: %d\n", VAR_2);
  FUNC_0(VAR_0);
  return VAR_2;
 }

 FUNC_3(VAR_0);

 return 0;
}
