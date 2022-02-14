
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_usb_device {int data_mutex; int rc_dev; struct dtt200u_state* priv; } ;
struct dtt200u_state {int* data; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int*) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_device *VAR_3)
{
 struct dtt200u_state *VAR_4 = VAR_3->priv;
 u32 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_3->data_mutex);
 VAR_4->data[0] = VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_4->data, 1, VAR_4->data, 5, 0);
 if (VAR_6 < 0)
  goto ret;

 if (VAR_4->data[0] == 1) {
  enum rc_proto VAR_7 = VAR_1;

  VAR_5 = VAR_4->data[1];
  if ((u8) ~VAR_4->data[1] != VAR_4->data[2]) {

   VAR_5 = VAR_5 << 8;
   VAR_5 |= VAR_4->data[2];
   VAR_7 = VAR_2;
  }
  VAR_5 = VAR_5 << 8;
  VAR_5 |= VAR_4->data[3];


  if ((u8) ~VAR_4->data[3] == VAR_4->data[4])
   FUNC_4(VAR_3->rc_dev, VAR_7, VAR_5, 0);
  else
   FUNC_5(VAR_3->rc_dev);
 } else if (VAR_4->data[0] == 2) {
  FUNC_6(VAR_3->rc_dev);
 } else {
  FUNC_5(VAR_3->rc_dev);
 }

 if (VAR_4->data[0] != 0)
  FUNC_0("st->data: %*ph\n", 5, VAR_4->data);

ret:
 FUNC_3(&VAR_3->data_mutex);
 return VAR_6;
}
