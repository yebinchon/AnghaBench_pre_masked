
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int,int,int ,int *,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_5(struct usb_device *VAR_7, u16 VAR_8, u16 *VAR_9)
{
 int VAR_10;
 __le16 *VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_2);
 u8 VAR_12 = VAR_4 | VAR_6 | VAR_5;

 if (!VAR_11)
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_7, FUNC_4(VAR_7, 0),
     VAR_0, VAR_12,
     0x0000,
     VAR_8, VAR_11, sizeof(*VAR_11), 5 * VAR_3);
 *VAR_9 = FUNC_2(*VAR_11);
 FUNC_0(VAR_11);

 return VAR_10;
}
