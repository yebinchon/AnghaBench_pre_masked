
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vp702x_device_state {int buf_mutex; int * buf; } ;
struct vp702x_adapter_state {int pid_filter_count; int pid_filter_can_bypass; int pid_filter_state; } ;
struct dvb_usb_adapter {TYPE_1__* dev; struct vp702x_adapter_state* priv; } ;
struct TYPE_2__ {struct vp702x_device_state* priv; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_adapter*,int,int,int) ;
 int FUNC_4 (struct dvb_usb_adapter*,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_0)
{
 struct vp702x_adapter_state *VAR_1 = VAR_0->priv;
 struct vp702x_device_state *VAR_2 = VAR_0->dev->priv;
 int VAR_3;
 u8 *VAR_4;

 VAR_1->pid_filter_count = 8;
 VAR_1->pid_filter_can_bypass = 1;
 VAR_1->pid_filter_state = 0x00;

 FUNC_4(VAR_0, 1);

 for (VAR_3 = 0; VAR_3 < VAR_1->pid_filter_count; VAR_3++)
  FUNC_3(VAR_0, 0xffff, VAR_3, 1);

 FUNC_1(&VAR_2->buf_mutex);
 VAR_4 = VAR_2->buf;
 FUNC_0(VAR_4, 0, 10);
 FUNC_5(VAR_0->dev, 0xb5, 3, 0, VAR_4, 10);
 FUNC_5(VAR_0->dev, 0xb5, 0, 0, VAR_4, 10);
 FUNC_5(VAR_0->dev, 0xb5, 1, 0, VAR_4, 10);
 FUNC_2(&VAR_2->buf_mutex);


 return 0;
}
