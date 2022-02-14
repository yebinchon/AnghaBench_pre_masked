
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct dvb_usb_device {struct digitv_state* priv; } ;
struct digitv_state {void** sndbuf; void** rcvbuf; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,void**,int,void**,int,int) ;
 int FUNC_1 (struct dvb_usb_device*,void**,int) ;
 int FUNC_2 (void**,void**,int) ;
 int FUNC_3 (void**,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1,
  u8 VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5, u8 *VAR_6, int VAR_7)
{
 struct digitv_state *VAR_8 = VAR_1->priv;
 int VAR_9, VAR_10;

 VAR_10 = (VAR_6 == ((void*)0) || VAR_7 == 0);

 if (VAR_5 > 4 || VAR_7 > 4)
  return -VAR_0;

 FUNC_3(VAR_8->sndbuf, 0, 7);
 FUNC_3(VAR_8->rcvbuf, 0, 7);

 VAR_8->sndbuf[0] = VAR_2;
 VAR_8->sndbuf[1] = VAR_3;
 VAR_8->sndbuf[2] = VAR_10 ? VAR_5 : VAR_7;

 if (VAR_10) {
  FUNC_2(&VAR_8->sndbuf[3], VAR_4, VAR_5);
  VAR_9 = FUNC_1(VAR_1, VAR_8->sndbuf, 7);
 } else {
  VAR_9 = FUNC_0(VAR_1, VAR_8->sndbuf, 7, VAR_8->rcvbuf, 7, 10);
  FUNC_2(VAR_6, &VAR_8->rcvbuf[3], VAR_7);
 }
 return VAR_9;
}
