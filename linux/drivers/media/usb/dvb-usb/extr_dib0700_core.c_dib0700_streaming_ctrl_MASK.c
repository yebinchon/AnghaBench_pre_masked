
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_usb_adapter {int id; TYPE_4__* dev; TYPE_3__* fe_adap; } ;
struct dib0700_state {int fw_version; int* buf; int disable_streaming_master_mode; int channel_state; int nb_packet_buffer_size; } ;
struct TYPE_9__ {int usb_mutex; struct dib0700_state* priv; } ;
struct TYPE_6__ {int endpoint; } ;
struct TYPE_7__ {TYPE_1__ props; } ;
struct TYPE_8__ {TYPE_2__ stream; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_4__*,int*,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 struct dib0700_state *VAR_3 = VAR_1->dev->priv;
 int VAR_4;

 if ((VAR_2 != 0) && (VAR_3->fw_version >= 0x10201)) {


  VAR_4 = FUNC_2(VAR_1->dev,
   VAR_3->nb_packet_buffer_size);
  if (VAR_4 < 0) {
   FUNC_0("can not set the USB xfer len\n");
   return VAR_4;
  }
 }

 FUNC_3(&VAR_1->dev->usb_mutex);

 VAR_3->buf[0] = VAR_0;


 VAR_3->buf[1] = (VAR_2 << 4) | 0x00;

 if (VAR_3->disable_streaming_master_mode == 1)
  VAR_3->buf[2] = 0x00;
 else
  VAR_3->buf[2] = 0x01 << 4;

 VAR_3->buf[3] = 0x00;

 FUNC_0("modifying (%d) streaming state for %d\n", VAR_2, VAR_1->id);

 VAR_3->channel_state &= ~0x3;
 if ((VAR_1->fe_adap[0].stream.props.endpoint != 2)
   && (VAR_1->fe_adap[0].stream.props.endpoint != 3)) {
  FUNC_0("the endpoint number (%i) is not correct, use the adapter id instead", VAR_1->fe_adap[0].stream.props.endpoint);
  if (VAR_2)
   VAR_3->channel_state |= 1 << (VAR_1->id);
  else
   VAR_3->channel_state |= 1 << ~(VAR_1->id);
 } else {
  if (VAR_2)
   VAR_3->channel_state |= 1 << (VAR_1->fe_adap[0].stream.props.endpoint-2);
  else
   VAR_3->channel_state |= 1 << (3-VAR_1->fe_adap[0].stream.props.endpoint);
 }

 VAR_3->buf[2] |= VAR_3->channel_state;

 FUNC_0("data for streaming: %x %x\n", VAR_3->buf[1], VAR_3->buf[2]);

 VAR_4 = FUNC_1(VAR_1->dev, VAR_3->buf, 4);
 FUNC_4(&VAR_1->dev->usb_mutex);

 return VAR_4;
}
