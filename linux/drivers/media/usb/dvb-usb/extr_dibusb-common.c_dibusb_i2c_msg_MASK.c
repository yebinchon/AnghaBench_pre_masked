
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_6, u8 VAR_7,
     u8 *VAR_8, u16 VAR_9, u8 *VAR_10, u16 VAR_11)
{
 u8 *VAR_12;
 int VAR_13, VAR_14, VAR_15;


 VAR_14 = (VAR_10 == ((void*)0) || VAR_11 == 0);

 VAR_15 = 2 + VAR_9 + (VAR_14 ? 0 : 2);

 VAR_12 = FUNC_2(VAR_5, VAR_4);
 if (!VAR_12)
  return -VAR_2;

 if (4 + VAR_9 > VAR_5) {
  FUNC_4("i2c wr: len=%d is too big!\n", VAR_9);
  VAR_13 = -VAR_3;
  goto ret;
 }

 VAR_12[0] = VAR_14 ? VAR_1 : VAR_0;
 VAR_12[1] = (VAR_7 << 1) | (VAR_14 ? 0 : 1);

 FUNC_3(&VAR_12[2], VAR_8, VAR_9);

 if (!VAR_14) {
  VAR_12[VAR_9 + 2] = (VAR_11 >> 8) & 0xff;
  VAR_12[VAR_9 + 3] = VAR_11 & 0xff;
 }

 VAR_13 = FUNC_0(VAR_6, VAR_12, VAR_15, VAR_10, VAR_11, 0);

ret:
 FUNC_1(VAR_12);
 return VAR_13;
}
