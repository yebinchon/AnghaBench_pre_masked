
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct TYPE_3__ {int rx2; } ;
struct mceusb_dev {int* buf_in; int txports_cabled; int num_txports; int num_rxports; int learning_active; unsigned int pulse_tunit; unsigned int pulse_count; int emver; int tx_mask; int rxports_active; int need_reset; int dev; TYPE_2__* rc; TYPE_1__ flags; int carrier_report_enabled; } ;
struct ir_raw_event {int carrier_report; unsigned int carrier; } ;
struct TYPE_4__ {int timeout; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (TYPE_2__*,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_4(struct mceusb_dev *VAR_1, int VAR_2)
{
 struct ir_raw_event VAR_3 = {};
 u8 VAR_4 = VAR_1->buf_in[VAR_2 + 1] & 0xff;
 u8 VAR_5 = VAR_1->buf_in[VAR_2 + 2] & 0xff;
 u32 VAR_6;
 u32 VAR_7;

 switch (VAR_1->buf_in[VAR_2]) {

 case 129:
  if ((VAR_1->buf_in[VAR_2 + 4] & 0xff) == 0x00)
   VAR_1->txports_cabled |= 1 << VAR_4;
  break;


 case 131:
  VAR_1->rc->timeout = FUNC_0((VAR_4 << 8 | VAR_5) * VAR_0);
  break;
 case 134:
  VAR_1->num_txports = VAR_4;
  VAR_1->num_rxports = VAR_5;
  break;
 case 133:
  if (VAR_1->carrier_report_enabled && VAR_1->learning_active &&
      VAR_1->pulse_tunit > 0) {
   VAR_6 = (VAR_4 << 8 | VAR_5);




   VAR_7 = VAR_1->flags.rx2 == 2 ? VAR_1->pulse_count : 0;
   VAR_3.carrier_report = 1;
   VAR_3.carrier = (1000000u / VAR_0) *
     (VAR_6 + VAR_7) /
     VAR_1->pulse_tunit;
   FUNC_1(VAR_1->dev, "RX carrier frequency %u Hz (pulse count = %u, cycles = %u, duration = %u, rx2 = %u)",
    VAR_3.carrier, VAR_1->pulse_count, VAR_6,
    VAR_1->pulse_tunit, VAR_1->flags.rx2);
   FUNC_3(VAR_1->rc, &VAR_3);
  }
  break;


 case 135:
  VAR_1->emver = VAR_4;
  break;
 case 130:
  VAR_1->tx_mask = VAR_4;
  break;
 case 132:
  VAR_1->learning_active = ((VAR_4 & 0x02) == 0x02);
  if (VAR_1->rxports_active != VAR_4) {
   FUNC_2(VAR_1->dev, "%s-range (0x%x) receiver active",
     VAR_1->learning_active ? "short" : "long", VAR_4);
   VAR_1->rxports_active = VAR_4;
  }
  break;
 case 136:
 case 128:
  VAR_1->need_reset = 1;
  break;
 default:
  break;
 }
}
