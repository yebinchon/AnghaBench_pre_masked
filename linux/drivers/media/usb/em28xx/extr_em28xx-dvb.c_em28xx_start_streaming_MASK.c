
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct em28xx_i2c_bus {struct em28xx* dev; } ;
struct TYPE_3__ {struct em28xx_i2c_bus* priv; } ;
struct em28xx_dvb {TYPE_1__ adapter; } ;
struct TYPE_4__ {int has_dual_ts; } ;
struct em28xx {int dvb_max_pkt_size_isoc; int dvb_alt_isoc; scalar_t__ dvb_xfer_bulk; int ifnum; TYPE_2__ board; int dvb_ep_isoc; int dvb_ep_bulk; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int,int,int) ;
 int VAR_5 ;
 int FUNC_1 (struct em28xx*,int ,scalar_t__,int ,int,int,int ) ;
 int FUNC_2 (struct em28xx*,int ) ;
 struct usb_device* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct em28xx_dvb *VAR_6)
{
 int VAR_7;
 struct em28xx_i2c_bus *VAR_8 = VAR_6->adapter.priv;
 struct em28xx *VAR_9 = VAR_8->dev;
 struct usb_device *VAR_10 = FUNC_3(VAR_9->intf);
 int VAR_11, VAR_12, VAR_13;

 if (VAR_9->dvb_xfer_bulk) {
  if (!VAR_9->dvb_ep_bulk)
   return -VAR_4;
  VAR_11 = 512;
  VAR_12 = VAR_1;
  VAR_13 = 0;
 } else {
  if (!VAR_9->dvb_ep_isoc)
   return -VAR_4;
  VAR_11 = VAR_9->dvb_max_pkt_size_isoc;
  if (VAR_11 < 0)
   return VAR_11;
  VAR_12 = VAR_3;
  VAR_13 = VAR_9->dvb_alt_isoc;
 }

 if (!VAR_9->board.has_dual_ts)
  FUNC_4(VAR_10, VAR_9->ifnum, VAR_13);

 VAR_7 = FUNC_2(VAR_9, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(1, "Using %d buffers each with %d x %d bytes, alternate %d\n",
  VAR_2,
  VAR_12,
  VAR_11, VAR_13);

 return FUNC_1(VAR_9, VAR_0,
        VAR_9->dvb_xfer_bulk,
        VAR_2,
        VAR_11,
        VAR_12,
        VAR_5);
}
