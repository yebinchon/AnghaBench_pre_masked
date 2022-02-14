
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct rt2x00_dev {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int ,int *) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int const) ;
 int FUNC_2 (struct rt2x00_dev*,char*,int const,int const,int) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 struct usb_device* FUNC_6 (int ) ;
 int FUNC_7 (struct usb_device*,unsigned int,int const,int const,int const,int const,void*,int const,int const) ;
 unsigned int FUNC_8 (struct usb_device*,int ) ;
 unsigned int FUNC_9 (struct usb_device*,int ) ;

int FUNC_10(struct rt2x00_dev *VAR_4,
        const u8 VAR_5, const u8 VAR_6,
        const u16 VAR_7, const u16 VAR_8,
        void *VAR_9, const u16 VAR_10,
        const int VAR_11)
{
 struct usb_device *VAR_12 = FUNC_6(VAR_4->dev);
 int VAR_13;
 unsigned int VAR_14 =
     (VAR_6 == VAR_2) ?
     FUNC_8(VAR_12, 0) : FUNC_9(VAR_12, 0);
 unsigned long VAR_15 = VAR_3 + FUNC_1(VAR_11);

 if (!FUNC_4(VAR_0, &VAR_4->flags))
  return -VAR_1;

 do {
  VAR_13 = FUNC_7(VAR_12, VAR_14, VAR_5, VAR_6,
      VAR_8, VAR_7, VAR_9, VAR_10,
      VAR_11 / 2);
  if (VAR_13 >= 0)
   return 0;

  if (FUNC_3(VAR_4, VAR_13)) {

   FUNC_0(VAR_0, &VAR_4->flags);
   break;
  }
 } while (FUNC_5(VAR_3, VAR_15));

 FUNC_2(VAR_4,
     "Vendor Request 0x%02x failed for offset 0x%04x with error %d\n",
     VAR_5, VAR_7, VAR_13);

 return VAR_13;
}
