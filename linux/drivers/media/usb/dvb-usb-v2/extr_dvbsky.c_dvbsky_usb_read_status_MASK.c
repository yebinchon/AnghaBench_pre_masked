
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvbsky_state {int (* fe_read_status ) (struct dvb_frontend*,int*) ;int last_lock; } ;
struct dvb_usb_device {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 struct dvbsky_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 struct dvb_usb_device* FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1,
      enum fe_status *VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_2(VAR_1);
 struct dvbsky_state *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = VAR_4->fe_read_status(VAR_1, VAR_2);


 if ((*VAR_2 & VAR_0) && (!VAR_4->last_lock))
  FUNC_1(VAR_3, 1);

 VAR_4->last_lock = (*VAR_2 & VAR_0) ? 1 : 0;
 return VAR_5;
}
