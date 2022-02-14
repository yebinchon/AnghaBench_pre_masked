
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int data_mutex; struct dtt200u_state* priv; } ;
struct dtt200u_state {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1, int VAR_2)
{
 struct dtt200u_state *VAR_3 = VAR_1->priv;
 int VAR_4 = 0;

 FUNC_1(&VAR_1->data_mutex);

 VAR_3->data[0] = VAR_0;

 if (VAR_2)
  VAR_4 = FUNC_0(VAR_1, VAR_3->data, 2);

 FUNC_2(&VAR_1->data_mutex);
 return VAR_4;
}
