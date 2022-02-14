
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct bcm_ns_usb3 {int family; scalar_t__ dmp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm_ns_usb3*) ;
 int FUNC_2 (struct bcm_ns_usb3*) ;
 struct bcm_ns_usb3* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_3)
{
 struct bcm_ns_usb3 *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;


 FUNC_4(VAR_1, VAR_4->dmp + VAR_0);

 switch (VAR_4->family) {
 case 129:
  VAR_5 = FUNC_1(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_4);
  break;
 default:
  FUNC_0(1);
  VAR_5 = -VAR_2;
 }

 return VAR_5;
}
