
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb2_state {int id; } ;
struct dvb_usb_device {struct ttusb2_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_3, u8 VAR_4,
  u8 *VAR_5, int VAR_6, u8 *VAR_7, int VAR_8)
{
 struct ttusb2_state *VAR_9 = VAR_3->priv;
 u8 *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 if (4 + VAR_8 > 64)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6+4, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_2(64, VAR_2);
 if (!VAR_11) {
  FUNC_1(VAR_10);
  return -VAR_1;
 }

 VAR_10[0] = 0xaa;
 VAR_10[1] = ++VAR_9->id;
 VAR_10[2] = VAR_4;
 VAR_10[3] = VAR_6;
 FUNC_3(&VAR_10[4],VAR_5,VAR_6);

 VAR_12 = FUNC_0(VAR_3, VAR_10, VAR_6+4, VAR_11, 64, 0);

 if (VAR_12 != 0 ||
  VAR_11[0] != 0x55 ||
  VAR_11[1] != VAR_10[1] ||
  VAR_11[2] != VAR_4 ||
  (VAR_8 > 0 && VAR_11[3] != VAR_8)) {
  FUNC_4("there might have been an error during control message transfer. (rlen = %d, was %d)",VAR_8,VAR_11[3]);
  FUNC_1(VAR_10);
  FUNC_1(VAR_11);
  return -VAR_0;
 }

 if (VAR_8 > 0)
  FUNC_3(VAR_7, &VAR_11[4], VAR_8);

 FUNC_1(VAR_10);
 FUNC_1(VAR_11);

 return 0;
}
