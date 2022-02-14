
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_data_stream {struct dvb_usb_adapter* user_priv; } ;
struct dvb_usb_adapter {int demux; } ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(struct usb_data_stream *VAR_0, u8 *VAR_1,
  size_t VAR_2)
{
 struct dvb_usb_adapter *VAR_3 = VAR_0->user_priv;
 FUNC_0(&VAR_3->demux, VAR_1, VAR_2);
}
