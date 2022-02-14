
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct vp702x_device_state {int* buf; int buf_mutex; } ;
struct vp702x_adapter_state {int pid_filter_state; } ;
struct dvb_usb_adapter {TYPE_1__* dev; struct vp702x_adapter_state* priv; } ;
typedef int pid ;
struct TYPE_2__ {struct vp702x_device_state* priv; } ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_adapter*,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_0, u16 VAR_1, u8 VAR_2, int VAR_3)
{
 struct vp702x_adapter_state *VAR_4 = VAR_0->priv;
 struct vp702x_device_state *VAR_5 = VAR_0->dev->priv;
 u8 *VAR_6;

 if (VAR_3)
  VAR_4->pid_filter_state |= (1 << VAR_2);
 else {
  VAR_4->pid_filter_state &= ~(1 << VAR_2);
  VAR_1 = 0xffff;
 }

 VAR_2 = 0x10 + VAR_2*2;

 FUNC_3(VAR_0, VAR_4->pid_filter_state);

 FUNC_1(&VAR_5->buf_mutex);

 VAR_6 = VAR_5->buf;
 FUNC_0(VAR_6, 0, 16);
 FUNC_4(VAR_0->dev, 0xe0, (((VAR_1 >> 8) & 0xff) << 8) | (VAR_2), 0, VAR_6, 16);
 FUNC_4(VAR_0->dev, 0xe0, (((VAR_1 ) & 0xff) << 8) | (VAR_2+1), 0, VAR_6, 16);

 FUNC_2(&VAR_5->buf_mutex);

 return 0;
}
