
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvbsky_state {int stream_mutex; } ;
struct dvb_usb_device {int dummy; } ;


 struct dvbsky_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_0, u8 VAR_1)
{
 struct dvbsky_state *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;
 u8 VAR_4[3] = { 0x37, 0, 0 };
 u8 VAR_5[3] = { 0x36, 3, 0 };

 FUNC_3(&VAR_2->stream_mutex);
 VAR_3 = FUNC_1(VAR_0, VAR_4, 3, ((void*)0), 0);
 if (!VAR_3 && VAR_1) {
  FUNC_2(20);
  VAR_3 = FUNC_1(VAR_0, VAR_5, 3, ((void*)0), 0);
 }
 FUNC_4(&VAR_2->stream_mutex);
 return VAR_3;
}
