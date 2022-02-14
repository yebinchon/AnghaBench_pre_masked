
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
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int *,size_t,int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,unsigned char*,size_t,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_6,
   u8 VAR_7, u8 * VAR_8, u16 VAR_9, size_t VAR_10)
{
 unsigned char *VAR_11;
 int VAR_12;

 if (!VAR_8 || VAR_10 <= 0)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_8, VAR_10, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_6,
          FUNC_3(VAR_6, 0),
          VAR_7,
          VAR_5 | VAR_4,
          VAR_9,
          0,
          VAR_11,
          VAR_10,
          VAR_3);

 FUNC_0(VAR_11);
 return VAR_12;
}
