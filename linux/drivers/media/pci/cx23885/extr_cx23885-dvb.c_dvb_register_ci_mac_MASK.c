
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int demux; } ;
struct vb2_dvb_frontend {TYPE_2__ dvb; } ;
struct sp2_config {int addr; int type; struct sp2_config* platform_data; int ci_control; struct cx23885_tsport* priv; TYPE_5__* dvb_adap; } ;
struct netup_card_info {TYPE_1__* port; } ;
struct TYPE_12__ {TYPE_3__* driver; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct i2c_board_info {int addr; int type; struct i2c_board_info* platform_data; int ci_control; struct cx23885_tsport* priv; TYPE_5__* dvb_adap; } ;
struct TYPE_13__ {int * proposed_mac; } ;
struct TYPE_14__ {TYPE_5__ adapter; } ;
struct cx23885_tsport {int nr; TYPE_6__ frontends; struct i2c_client* i2c_client_ci; struct cx23885_dev* dev; } ;
struct TYPE_15__ {int addr; } ;
struct cx23885_i2c {TYPE_7__ i2c_client; int i2c_adap; } ;
struct cx23885_dev {int board; struct cx23885_i2c* i2c_bus; } ;
struct altera_ci_config {int fpga_rw; int * demux; TYPE_5__* adapter; struct cx23885_dev* dev; } ;
typedef int sp2_config ;
typedef int eeprom ;
struct TYPE_16__ {int name; } ;
struct TYPE_11__ {int owner; } ;
struct TYPE_9__ {int * mac; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct altera_ci_config*,int) ;
 TYPE_8__* VAR_3 ;
 int VAR_4 ;
 struct i2c_client* FUNC_1 (int *,struct sp2_config*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct sp2_config*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (struct cx23885_tsport*) ;
 int FUNC_6 (int *,struct netup_card_info*) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_7__*,int *,int) ;
 struct vb2_dvb_frontend* FUNC_12 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_13(struct cx23885_tsport *VAR_6)
{
 struct cx23885_dev *VAR_7 = VAR_6->dev;
 struct i2c_client *VAR_8 = ((void*)0);
 struct vb2_dvb_frontend *VAR_9;

 VAR_9 = FUNC_12(&VAR_6->frontends, 1);
 if (!VAR_9)
  return -VAR_0;

 switch (VAR_7->board) {
 case 131: {
  static struct netup_card_info VAR_10;

  FUNC_6(&VAR_7->i2c_bus[0].i2c_adap, &VAR_10);
  FUNC_3(VAR_6->frontends.adapter.proposed_mac,
    VAR_10.port[VAR_6->nr - 1].mac, 6);
  FUNC_7("NetUP Dual DVB-S2 CI card port%d MAC=%pM\n",
   VAR_6->nr, VAR_6->frontends.adapter.proposed_mac);

  FUNC_5(VAR_6);
  return 0;
  }
 case 130: {
  struct altera_ci_config VAR_11 = {
   .dev = VAR_7,
   .adapter = &VAR_6->frontends.adapter,
   .demux = &VAR_9->dvb.demux,
   .fpga_rw = VAR_5,
  };

  FUNC_0(&VAR_11, VAR_6->nr);
  return 0;
  }
 case 129: {
  u8 VAR_12[256];

  if (VAR_6->nr != 1)
   return 0;


  VAR_7->i2c_bus[0].i2c_client.addr = 0xa0 >> 1;
  FUNC_11(&VAR_7->i2c_bus[0].i2c_client, VAR_12, sizeof(VAR_12));
  FUNC_7("TeVii S470 MAC= %pM\n", *(VAR_12 + 0xa0));
  FUNC_3(VAR_6->frontends.adapter.proposed_mac, VAR_12 + 0xa0, 6);
  return 0;
  }
 case 134:
 case 137:
 case 135:
 case 132: {
  u8 VAR_13[256];

  if (VAR_6->nr > 2)
   return 0;


  VAR_7->i2c_bus[0].i2c_client.addr = 0xa0 >> 1;
  FUNC_11(&VAR_7->i2c_bus[0].i2c_client, VAR_13,
    sizeof(VAR_13));
  FUNC_7("%s port %d MAC address: %pM\n",
   VAR_3[VAR_7->board].name, VAR_6->nr,
   VAR_13 + 0xc0 + (VAR_6->nr-1) * 8);
  FUNC_3(VAR_6->frontends.adapter.proposed_mac, VAR_13 + 0xc0 +
   (VAR_6->nr-1) * 8, 6);
  return 0;
  }
 case 136:
 case 133:
 case 128: {
  u8 VAR_14[256];
  struct sp2_config VAR_15;
  struct i2c_board_info VAR_16;
  struct cx23885_i2c *VAR_17 = &VAR_7->i2c_bus[0];


  FUNC_4(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.dvb_adap = &VAR_6->frontends.adapter;
  VAR_15.priv = VAR_6;
  VAR_15.ci_control = VAR_4;
  FUNC_4(&VAR_16, 0, sizeof(struct i2c_board_info));
  FUNC_9(VAR_16.type, "sp2", VAR_2);
  VAR_16.addr = 0x40;
  VAR_16.platform_data = &VAR_15;
  FUNC_8(VAR_16.type);
  VAR_8 = FUNC_1(&VAR_17->i2c_adap, &VAR_16);
  if (VAR_8 == ((void*)0) || VAR_8->dev.driver == ((void*)0))
   return -VAR_1;
  if (!FUNC_10(VAR_8->dev.driver->owner)) {
   FUNC_2(VAR_8);
   return -VAR_1;
  }
  VAR_6->i2c_client_ci = VAR_8;

  if (VAR_6->nr != 1)
   return 0;


  VAR_7->i2c_bus[0].i2c_client.addr = 0xa0 >> 1;
  FUNC_11(&VAR_7->i2c_bus[0].i2c_client, VAR_14,
    sizeof(VAR_14));
  FUNC_7("%s MAC address: %pM\n",
   VAR_3[VAR_7->board].name, VAR_14 + 0xc0);
  FUNC_3(VAR_6->frontends.adapter.proposed_mac, VAR_14 + 0xc0, 6);
  return 0;
  }
 }
 return 0;
}
