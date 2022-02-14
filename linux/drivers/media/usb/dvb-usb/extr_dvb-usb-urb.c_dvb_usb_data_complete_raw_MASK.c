
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_data_stream {struct dvb_usb_adapter* user_priv; } ;
struct dvb_usb_adapter {scalar_t__ feedcount; int state; int demux; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(struct usb_data_stream *VAR_1,
          u8 *VAR_2, size_t VAR_3)
{
 struct dvb_usb_adapter *VAR_4 = VAR_1->user_priv;
 if (VAR_4->feedcount > 0 && VAR_4->state & VAR_0)
  FUNC_0(&VAR_4->demux, VAR_2, VAR_3);
}
