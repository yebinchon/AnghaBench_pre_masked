
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct packet_wreg32 {int dummy; } ;
struct packet_msg_prot {int dummy; } ;
struct packet_lin_dma {int dummy; } ;
struct hl_device {int dev; } ;
struct hl_cs_parser {scalar_t__ patched_cb_size; scalar_t__ user_cb_size; TYPE_1__* user_cb; } ;
struct goya_packet {int header; } ;
typedef enum packet_id { ____Placeholder_packet_id } packet_id ;
struct TYPE_2__ {scalar_t__ kernel_address; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (struct hl_device*,struct hl_cs_parser*,struct packet_lin_dma*) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*,struct packet_lin_dma*) ;
 int FUNC_3 (struct hl_device*,struct hl_cs_parser*,struct packet_wreg32*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_5,
   struct hl_cs_parser *VAR_6, bool VAR_7)
{
 u32 VAR_8 = 0;
 int VAR_9 = 0;

 VAR_6->patched_cb_size = 0;


 while (VAR_8 < VAR_6->user_cb_size) {
  enum packet_id VAR_10;
  u16 VAR_11;
  struct goya_packet *VAR_12;

  VAR_12 = (struct goya_packet *) (uintptr_t)
   (VAR_6->user_cb->kernel_address + VAR_8);

  VAR_10 = (enum packet_id) (
    (FUNC_4(VAR_12->header) &
    VAR_2) >>
     VAR_3);

  VAR_11 = VAR_4[VAR_10];
  VAR_8 += VAR_11;
  if (VAR_8 > VAR_6->user_cb_size) {
   FUNC_0(VAR_5->dev,
    "packet 0x%x is out of CB boundary\n", VAR_10);
   VAR_9 = -VAR_0;
   break;
  }

  switch (VAR_10) {
  case 129:





   VAR_9 = FUNC_3(VAR_5,
    VAR_6, (struct packet_wreg32 *) VAR_12);
   break;

  case 128:
   FUNC_0(VAR_5->dev,
    "User not allowed to use WREG_BULK\n");
   VAR_9 = -VAR_1;
   break;

  case 133:
   FUNC_0(VAR_5->dev,
    "User not allowed to use MSG_PROT\n");
   VAR_9 = -VAR_1;
   break;

  case 137:
   FUNC_0(VAR_5->dev, "User not allowed to use CP_DMA\n");
   VAR_9 = -VAR_1;
   break;

  case 130:
   FUNC_0(VAR_5->dev, "User not allowed to use STOP\n");
   VAR_9 = -VAR_1;
   break;

  case 135:
   if (VAR_7)
    VAR_9 = FUNC_1(VAR_5, VAR_6,
     (struct packet_lin_dma *) VAR_12);
   else
    VAR_9 = FUNC_2(VAR_5, VAR_6,
     (struct packet_lin_dma *) VAR_12);
   break;

  case 134:
  case 132:
  case 136:
  case 131:
   VAR_6->patched_cb_size += VAR_11;
   break;

  default:
   FUNC_0(VAR_5->dev, "Invalid packet header 0x%x\n",
    VAR_10);
   VAR_9 = -VAR_0;
   break;
  }

  if (VAR_9)
   break;
 }






 VAR_6->patched_cb_size += sizeof(struct packet_msg_prot) * 2;

 return VAR_9;
}
