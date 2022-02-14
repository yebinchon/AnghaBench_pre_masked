
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcm_ns_usb3 {scalar_t__ ccb_mii; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bcm_ns_usb3*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct bcm_ns_usb3 *VAR_1, u16 VAR_2,
       u16 VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->dev, "Couldn't write 0x%08x value\n", VAR_3);
  return VAR_5;
 }


 VAR_4 |= 0x58020000;
 VAR_4 |= VAR_2 << 18;
 VAR_4 |= VAR_3;
 FUNC_2(VAR_4, VAR_1->ccb_mii + VAR_0);

 return FUNC_0(VAR_1);
}
