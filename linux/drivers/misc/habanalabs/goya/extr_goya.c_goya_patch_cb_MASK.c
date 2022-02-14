
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct packet_wreg32 {int dummy; } ;
struct packet_lin_dma {int dummy; } ;
struct hl_device {int dev; } ;
struct hl_cs_parser {scalar_t__ user_cb_size; TYPE_2__* patched_cb; TYPE_1__* user_cb; } ;
struct goya_packet {int header; } ;
typedef enum packet_id { ____Placeholder_packet_id } packet_id ;
struct TYPE_4__ {scalar_t__ kernel_address; } ;
struct TYPE_3__ {scalar_t__ kernel_address; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (struct hl_device*,struct hl_cs_parser*,struct packet_lin_dma*,struct packet_lin_dma*,scalar_t__*) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*,struct packet_wreg32*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct goya_packet*,struct goya_packet*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_5,
    struct hl_cs_parser *VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 int VAR_9 = 0;


 while (VAR_7 < VAR_6->user_cb_size) {
  enum packet_id VAR_10;
  u16 VAR_11;
  u32 VAR_12 = 0;
  struct goya_packet *VAR_13, *VAR_14;

  VAR_13 = (struct goya_packet *) (uintptr_t)
   (VAR_6->user_cb->kernel_address + VAR_7);
  VAR_14 = (struct goya_packet *) (uintptr_t)
   (VAR_6->patched_cb->kernel_address +
     VAR_8);

  VAR_10 = (enum packet_id) (
    (FUNC_3(VAR_13->header) &
    VAR_2) >>
     VAR_3);

  VAR_11 = VAR_4[VAR_10];
  VAR_7 += VAR_11;
  if (VAR_7 > VAR_6->user_cb_size) {
   FUNC_0(VAR_5->dev,
    "packet 0x%x is out of CB boundary\n", VAR_10);
   VAR_9 = -VAR_0;
   break;
  }

  switch (VAR_10) {
  case 135:
   VAR_9 = FUNC_1(VAR_5, VAR_6,
     (struct packet_lin_dma *) VAR_13,
     (struct packet_lin_dma *) VAR_14,
     &VAR_12);
   VAR_8 += VAR_12;
   break;

  case 129:
   FUNC_4(VAR_14, VAR_13, VAR_11);
   VAR_8 += VAR_11;
   VAR_9 = FUNC_2(VAR_5, VAR_6,
     (struct packet_wreg32 *) VAR_14);
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

  case 134:
  case 132:
  case 136:
  case 131:
   FUNC_4(VAR_14, VAR_13, VAR_11);
   VAR_8 += VAR_11;
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

 return VAR_9;
}
