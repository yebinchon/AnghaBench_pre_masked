
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_3__* net; TYPE_1__* udev; } ;
struct sk_buff {int len; int* data; } ;
struct TYPE_5__ {int rx_crc_errors; int rx_frame_errors; int rx_length_errors; int rx_errors; } ;
struct TYPE_6__ {int hard_header_len; TYPE_2__ stats; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_6, struct sk_buff *VAR_7)
{
 u8 VAR_8;


 if (VAR_7->len < VAR_6->net->hard_header_len) {
  FUNC_1(&VAR_6->udev->dev, "unexpected tiny rx frame\n");
  return 0;
 }

 FUNC_2(VAR_7, VAR_7->len - 1);
 VAR_8 = VAR_7->data[VAR_7->len];

 if (VAR_8 != VAR_2) {
  FUNC_0(&VAR_6->udev->dev, "rx fixup status %x\n", VAR_8);



  VAR_6->net->stats.rx_errors++;

  if (VAR_8 & (VAR_5
    |VAR_4
    |VAR_3))
   VAR_6->net->stats.rx_length_errors++;
  if (VAR_8 & VAR_0)
   VAR_6->net->stats.rx_frame_errors++;
  if (VAR_8 & VAR_1)
   VAR_6->net->stats.rx_crc_errors++;
 }

 return VAR_7->len > 0;
}
