
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reg_num_mask; int phy_id_mask; int mdio_write; int mdio_read; TYPE_1__* dev; } ;
struct usbnet {int rx_urb_size; TYPE_1__* net; TYPE_2__ mii; scalar_t__ hard_mtu; } ;
struct usb_interface {int dummy; } ;
struct TYPE_3__ {int dev_addr; scalar_t__ hard_header_len; scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,unsigned char*,int,int ) ;
 int FUNC_1 (struct usbnet*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_9, struct usb_interface *VAR_10)
{
 int VAR_11 = 0;
 unsigned char VAR_12[2];

 VAR_11 = FUNC_3(VAR_9, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9->mii.dev = VAR_9->net;
 VAR_9->mii.mdio_read = VAR_7;
 VAR_9->mii.mdio_write = VAR_8;
 VAR_9->mii.reg_num_mask = 0x1f;

 VAR_9->mii.phy_id_mask = 0x1f;

 VAR_9->hard_mtu = VAR_9->net->mtu + VAR_9->net->hard_header_len;
 VAR_9->rx_urb_size = 24 * 64 + 16;
 FUNC_2(&VAR_9->mii);

 VAR_12[0] = 0x01;
 VAR_12[1] = 0x0F;
 VAR_11 = FUNC_0(VAR_9, VAR_6, 0, VAR_5, VAR_12,
          0x02, VAR_0);

 VAR_12[0] = 0xA0;
 VAR_12[1] = 0x90;
 VAR_11 = FUNC_0(VAR_9, VAR_6, 0, VAR_2, VAR_12,
          0x02, VAR_0);

 VAR_12[0] = 0x30;
 VAR_12[1] = 0x00;
 VAR_11 = FUNC_0(VAR_9, VAR_6, 0, VAR_4, VAR_12,
          0x02, VAR_0);

 VAR_12[0] = 0x17;
 VAR_12[1] = 0xD8;
 VAR_11 = FUNC_0(VAR_9, VAR_6, 0, VAR_3,
          VAR_12, 0x02, VAR_0);


 VAR_12[0] = 0x01;
 VAR_12[1] = 0x00;
 VAR_11 = FUNC_0(VAR_9, VAR_6, 0, 254, VAR_12, 0x02,
          VAR_0);

 VAR_12[0] = 0x5F;
 VAR_12[1] = 0x0D;
 VAR_11 = FUNC_0(VAR_9, VAR_6, 0, VAR_1, VAR_12, 0x02,
          VAR_0);

 VAR_11 = FUNC_1(VAR_9, VAR_9->net->dev_addr);

 return VAR_11;
}
