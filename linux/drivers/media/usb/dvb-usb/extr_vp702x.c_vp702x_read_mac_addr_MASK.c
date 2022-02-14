
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vp702x_device_state {int* buf; int buf_mutex; } ;
struct dvb_usb_device {struct vp702x_device_state* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_device*,int ,int,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1,u8 VAR_2[6])
{
 u8 VAR_3, *VAR_4;
 struct vp702x_device_state *VAR_5 = VAR_1->priv;

 FUNC_1(&VAR_5->buf_mutex);
 VAR_4 = VAR_5->buf;
 for (VAR_3 = 6; VAR_3 < 12; VAR_3++)
  FUNC_3(VAR_1, VAR_0, VAR_3, 1, &VAR_4[VAR_3 - 6], 1);

 FUNC_0(VAR_2, VAR_4, 6);
 FUNC_2(&VAR_5->buf_mutex);
 return 0;
}
