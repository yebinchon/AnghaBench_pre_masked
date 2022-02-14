
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vp702x_device_state {int* buf; int buf_mutex; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {struct vp702x_device_state* priv; } ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_0, u8 VAR_1)
{
 int VAR_2;
 struct vp702x_device_state *VAR_3 = VAR_0->dev->priv;
 u8 *VAR_4;

 FUNC_1(&VAR_3->buf_mutex);

 VAR_4 = VAR_3->buf;
 FUNC_0(VAR_4, 0, 16);

 VAR_2 = FUNC_3(VAR_0->dev, 0xe0, (VAR_1 << 8) | 0x0e,
   0, VAR_4, 16);
 FUNC_2(&VAR_3->buf_mutex);
 return VAR_2;
}
