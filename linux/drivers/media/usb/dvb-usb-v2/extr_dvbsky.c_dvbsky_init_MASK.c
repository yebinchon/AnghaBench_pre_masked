
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvbsky_state {scalar_t__ last_lock; int stream_mutex; } ;
struct dvb_usb_device {int dummy; } ;


 struct dvbsky_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_0)
{
 struct dvbsky_state *VAR_1 = FUNC_0(VAR_0);







 FUNC_1(&VAR_1->stream_mutex);

 VAR_1->last_lock = 0;

 return 0;
}
