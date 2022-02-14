
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int const,int,void*,int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

int FUNC_6(struct usb_device *VAR_8, int VAR_9, int VAR_10, int VAR_11,
  void *VAR_12)
{
 int VAR_13;
 void *VAR_14;
 int VAR_15;

 switch (VAR_10) {
 case 128:
  VAR_15 = 2;
  break;
 case 129:
  if (VAR_9 != VAR_6)
   return -VAR_0;

  VAR_15 = 4;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_1(VAR_15, VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_13 = FUNC_4(VAR_8, FUNC_5(VAR_8, 0),
  VAR_7, VAR_5 | VAR_9, 128,
  VAR_11, VAR_14, VAR_15, VAR_4);

 switch (VAR_13) {
 case 4:
  if (VAR_10 != 129) {
   VAR_13 = -VAR_1;
   break;
  }

  *(u32 *) VAR_12 = FUNC_3(*(__le32 *) VAR_14);
  VAR_13 = 0;
  break;
 case 2:
  if (VAR_10 != 128) {
   VAR_13 = -VAR_1;
   break;
  }

  *(u16 *) VAR_12 = FUNC_2(*(__le16 *) VAR_14);
  VAR_13 = 0;
  break;
 default:
  VAR_13 = -VAR_1;
 }

 FUNC_0(VAR_14);
 return VAR_13;
}
