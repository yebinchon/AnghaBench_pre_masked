
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct peak_usb_device {int netdev; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct peak_usb_device*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(struct peak_usb_device *VAR_1, u32 *VAR_2)
{
 u8 VAR_3[VAR_0];
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, 6, 1, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_1->netdev, "getting serial failure: %d\n", VAR_4);
 } else if (VAR_2) {
  __le32 VAR_5;

  FUNC_1(&VAR_5, VAR_3, 4);
  *VAR_2 = FUNC_0(VAR_5);
 }

 return VAR_4;
}
