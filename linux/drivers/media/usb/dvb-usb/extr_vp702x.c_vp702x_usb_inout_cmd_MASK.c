
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vp702x_device_state {int buf_len; int* buf; int buf_mutex; } ;
struct dvb_usb_device {struct vp702x_device_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dvb_usb_device*,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_2, u8 VAR_3, u8 *VAR_4,
    int VAR_5, u8 *VAR_6, int VAR_7, int VAR_8)
{
 struct vp702x_device_state *VAR_9 = VAR_2->priv;
 int VAR_10 = 0;
 u8 *VAR_11;
 int VAR_12 = FUNC_3(VAR_5 + 2, VAR_7 + 1);

 VAR_10 = FUNC_5(&VAR_9->buf_mutex);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_12 > VAR_9->buf_len) {
  VAR_11 = FUNC_2(VAR_12, VAR_1);
  if (!VAR_11) {
   FUNC_6(&VAR_9->buf_mutex);
   return -VAR_0;
  }
  FUNC_0("successfully reallocated a bigger buffer");
  FUNC_1(VAR_9->buf);
  VAR_9->buf = VAR_11;
  VAR_9->buf_len = VAR_12;
 } else {
  VAR_11 = VAR_9->buf;
 }

 VAR_11[0] = 0x00;
 VAR_11[1] = VAR_3;
 FUNC_4(&VAR_11[2], VAR_4, VAR_5);

 VAR_10 = FUNC_7(VAR_2, VAR_11, VAR_5+2, VAR_11, VAR_7+1, VAR_8);

 if (VAR_10 == 0)
  FUNC_4(VAR_6, &VAR_11[1], VAR_7);
 FUNC_6(&VAR_9->buf_mutex);

 return VAR_10;
}
