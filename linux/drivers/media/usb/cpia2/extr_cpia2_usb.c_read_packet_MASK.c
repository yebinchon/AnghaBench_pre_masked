
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (struct usb_device*,int ,int ,int,int ,int ,unsigned char*,size_t,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_7,
         u8 VAR_8, u8 * VAR_9, u16 VAR_10, size_t VAR_11)
{
 unsigned char *VAR_12;
 int VAR_13;

 if (!VAR_9 || VAR_11 <= 0)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_11, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_7,
          FUNC_4(VAR_7, 0),
          VAR_8,
          VAR_4|VAR_6|VAR_5,
          VAR_10,
          0,
          VAR_12,
          VAR_11,
          VAR_3);

 if (VAR_13 >= 0)
  FUNC_2(VAR_9, VAR_12, VAR_11);

 FUNC_0(VAR_12);

 return VAR_13;
}
