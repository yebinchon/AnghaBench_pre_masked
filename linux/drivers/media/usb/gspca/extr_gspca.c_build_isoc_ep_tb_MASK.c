
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int num_altsetting; int * altsetting; } ;
struct TYPE_3__ {int bInterval; int wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct gspca_dev {TYPE_2__* dev; scalar_t__ audio; int xfer_ep; } ;
struct ep_tb_s {int bandwidth; int alt; } ;
struct TYPE_4__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct usb_host_endpoint* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_6,
   struct usb_interface *VAR_7,
   struct ep_tb_s *VAR_8)
{
 struct usb_host_endpoint *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 VAR_12 = VAR_7->num_altsetting;
 if (VAR_12 > VAR_1)
  VAR_12 = VAR_1;


 VAR_10 = 0;
 VAR_16 = 0;
 for (;;) {
  VAR_8->bandwidth = 2000 * 2000 * 120;
  VAR_14 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   VAR_9 = FUNC_0(&VAR_7->altsetting[VAR_11],
          VAR_2,
          VAR_6->xfer_ep);
   if (VAR_9 == ((void*)0))
    continue;
   if (VAR_9->desc.bInterval == 0) {
    FUNC_3("alt %d iso endp with 0 interval\n", VAR_11);
    continue;
   }
   VAR_13 = FUNC_2(VAR_9->desc.wMaxPacketSize);
   VAR_13 = (VAR_13 & 0x07ff) * (1 + ((VAR_13 >> 11) & 3));
   VAR_15 = VAR_13 * 1000;
   if (VAR_6->dev->speed == VAR_4
    || VAR_6->dev->speed >= VAR_5)
    VAR_15 *= 8;
   VAR_15 /= 1 << (VAR_9->desc.bInterval - 1);
   if (VAR_15 <= VAR_16)
    continue;
   if (VAR_15 < VAR_8->bandwidth) {
    VAR_8->bandwidth = VAR_15;
    VAR_8->alt = VAR_11;
    VAR_14 = 1;
   }
  }
  if (!VAR_14)
   break;
  FUNC_1(VAR_6, VAR_0, "alt %d bandwidth %d\n",
     VAR_8->alt, VAR_8->bandwidth);
  VAR_16 = VAR_8->bandwidth;
  VAR_10++;
  VAR_8++;
 }
 if (VAR_6->audio &&
   VAR_6->dev->speed == VAR_3 &&
   VAR_16 >= 1000000 &&
   VAR_10 > 1) {
  FUNC_1(VAR_6, VAR_0, "dev has usb audio, skipping highest alt\n");
  VAR_10--;
  VAR_8--;
 }


 VAR_15 = FUNC_4(VAR_6);
 VAR_8--;
 while (VAR_10 > 1) {
  VAR_8--;
  if (VAR_8->bandwidth < VAR_15)
   break;
  VAR_10--;
 }
 return VAR_10;
}
