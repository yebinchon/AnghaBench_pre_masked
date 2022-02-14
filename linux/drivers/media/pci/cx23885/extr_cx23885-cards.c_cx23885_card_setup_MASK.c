
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct netup_card_info {int rev; } ;
struct firmware {int dummy; } ;
struct cx23885_tsport {int gen_ctrl_val; int ts_clk_en_val; int vld_misc_val; int hw_sop_ctrl_val; void* src_sel_val; } ;
struct cx23885_dev {int board; TYPE_1__* pci; TYPE_2__* i2c_bus; int v4l2_dev; TYPE_3__* sd_cx25840; int clk_freq; struct cx23885_tsport ts2; struct cx23885_tsport ts1; } ;
struct altera_config {char* action; int jtag_io; struct cx23885_dev* dev; } ;
typedef int eeprom ;
struct TYPE_10__ {int addr; } ;
struct TYPE_9__ {int grp_id; } ;
struct TYPE_8__ {scalar_t__ i2c_rc; int i2c_adap; TYPE_6__ i2c_client; } ;
struct TYPE_7__ {int dev; } ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct altera_config*,struct firmware const*) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (struct cx23885_dev*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct netup_card_info*) ;
 int FUNC_4 (struct cx23885_dev*) ;
 int VAR_6 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,int ,char const*) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char const*,int *) ;
 int FUNC_9 (struct cx23885_dev*) ;
 int FUNC_10 (TYPE_6__*,int*,int) ;
 TYPE_3__* FUNC_11 (int *,int *,char*,int,int *) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (TYPE_3__*,int ,int ) ;
 int FUNC_14 (struct cx23885_dev*,int*) ;

void FUNC_15(struct cx23885_dev *VAR_7)
{
 struct cx23885_tsport *VAR_8 = &VAR_7->ts1;
 struct cx23885_tsport *VAR_9 = &VAR_7->ts2;

 static u8 VAR_10[256];

 if (VAR_7->i2c_bus[0].i2c_rc == 0) {
  VAR_7->i2c_bus[0].i2c_client.addr = 0xa0 >> 1;
  FUNC_10(&VAR_7->i2c_bus[0].i2c_client,
         VAR_10, sizeof(VAR_10));
 }

 switch (VAR_7->board) {
 case 171:
  if (VAR_7->i2c_bus[0].i2c_rc == 0) {
   if (VAR_10[0x80] != 0x84)
    FUNC_2(VAR_7, VAR_10+0xc0);
   else
    FUNC_2(VAR_7, VAR_10+0x80);
  }
  break;
 case 163:
 case 162:
 case 164:
  if (VAR_7->i2c_bus[0].i2c_rc == 0)
   FUNC_2(VAR_7, VAR_10+0x80);
  break;
 case 160:
 case 159:
 case 173:
 case 161:
 case 167:
 case 166:
 case 170:
 case 169:
 case 172:
 case 158:
 case 165:
 case 157:
 case 150:
 case 155:
 case 156:
 case 168:
 case 149:
 case 152:
 case 151:
 case 154:
 case 153:
  if (VAR_7->i2c_bus[0].i2c_rc == 0)
   FUNC_2(VAR_7, VAR_10+0xc0);
  break;
 case 129:
 case 128:
  VAR_7->i2c_bus[1].i2c_client.addr = 0xa0 >> 1;
  FUNC_10(&VAR_7->i2c_bus[1].i2c_client,
         VAR_10, sizeof(VAR_10));
  if (VAR_7->i2c_bus[0].i2c_rc == 0)
   FUNC_14(VAR_7, VAR_10);
  break;
 }

 switch (VAR_7->board) {
 case 188:

  VAR_8->gen_ctrl_val = 0x4;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;


  VAR_9->gen_ctrl_val = 0x10e;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 177:
 case 176:
 case 175:
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;

 case 178:
  VAR_8->gen_ctrl_val = 0xc;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  break;
 case 158:
 case 160:


  VAR_8->gen_ctrl_val = 0x10e;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;


  VAR_8->vld_misc_val = 0x2000;
  VAR_8->hw_sop_ctrl_val = (0x47 << 16 | 188 << 4 | 0xc);
  FUNC_1(0x130184, 0xc);


  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 136:
  VAR_8->gen_ctrl_val = 0x4;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  break;
 case 132:
 case 131:
 case 179:
 case 137:
 case 181:
 case 184:
 case 130:
 case 185:
  VAR_8->gen_ctrl_val = 0x5;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  break;
 case 139:
 case 138:
 case 133:
  VAR_8->gen_ctrl_val = 0xc;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 135:
 case 134:
  VAR_8->gen_ctrl_val = 0xc;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  FUNC_9(VAR_7);
  break;
 case 142:
 case 144:
 case 141:
  VAR_8->gen_ctrl_val = 0x5;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  break;
 case 140:
  VAR_8->gen_ctrl_val = 0x5;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 157:
  VAR_8->gen_ctrl_val = 0xc;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 150:
  VAR_8->gen_ctrl_val = 0xc;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  break;
 case 182:
 case 180:
  VAR_8->gen_ctrl_val = 0x5;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0x8;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 183:
  VAR_8->gen_ctrl_val = 0x5;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xe;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 156:
 case 149:
  VAR_8->gen_ctrl_val = 0x5;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 168:
 case 152:
 case 151:
 case 154:
 case 153:
  VAR_8->gen_ctrl_val = 0xc;
  VAR_8->ts_clk_en_val = 0x1;
  VAR_8->src_sel_val = VAR_1;
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
  break;
 case 171:
 case 163:
 case 162:
 case 159:
 case 173:
 case 161:
 case 164:
 case 155:
 case 148:
 case 146:
 case 147:
 case 187:
 case 167:
 case 166:
 case 170:
 case 169:
 case 172:
 case 186:
 case 165:
 case 174:
 default:
  VAR_9->gen_ctrl_val = 0xc;
  VAR_9->ts_clk_en_val = 0x1;
  VAR_9->src_sel_val = VAR_1;
 }




 switch (VAR_7->board) {
 case 132:

  if (!VAR_3)
   break;

 case 171:
 case 160:
 case 155:
 case 159:
 case 161:
 case 148:
 case 146:
 case 147:
 case 187:
 case 139:
 case 138:
 case 186:
 case 170:
 case 169:
 case 168:
 case 152:
 case 154:
 case 167:
 case 158:
 case 142:
 case 144:
 case 165:
 case 145:
 case 174:
 case 163:
 case 143:
 case 141:
 case 133:
 case 188:
 case 135:
 case 134:
 case 182:
 case 181:
 case 184:
 case 130:
 case 185:
 case 183:
 case 180:
 case 129:
 case 128:
  VAR_7->sd_cx25840 = FUNC_11(&VAR_7->v4l2_dev,
    &VAR_7->i2c_bus[2].i2c_adap,
    "cx25840", 0x88 >> 1, ((void*)0));
  if (VAR_7->sd_cx25840) {

   FUNC_12(VAR_7->sd_cx25840,
      &VAR_7->clk_freq);

   VAR_7->sd_cx25840->grp_id = VAR_0;
   FUNC_13(VAR_7->sd_cx25840, VAR_2, VAR_4);
  }
  break;
 }

 switch (VAR_7->board) {
 case 129:
  FUNC_11(&VAR_7->v4l2_dev,
    &VAR_7->i2c_bus[0].i2c_adap,
    "cs3308", 0x82 >> 1, ((void*)0));
  break;
 case 128:

  FUNC_11(&VAR_7->v4l2_dev,
    &VAR_7->i2c_bus[0].i2c_adap,
    "cs3308", 0x80 >> 1, ((void*)0));

  FUNC_11(&VAR_7->v4l2_dev,
    &VAR_7->i2c_bus[0].i2c_adap,
    "cs3308", 0x82 >> 1, ((void*)0));
  break;
 }


 switch (VAR_7->board) {
 case 139:
  FUNC_4(VAR_7);
  break;
 case 138: {
  int VAR_11;
  const struct firmware *VAR_12;
  const char *VAR_13 = "dvb-netup-altera-01.fw";
  char *VAR_14 = "configure";
  static struct netup_card_info VAR_15;
  struct altera_config VAR_16 = {
   .dev = VAR_7,
   .action = VAR_14,
   .jtag_io = VAR_6,
  };

  FUNC_4(VAR_7);

  FUNC_3(&VAR_7->i2c_bus[0].i2c_adap, &VAR_15);
  if (VAR_5)
   VAR_15.rev = VAR_5;

  switch (VAR_15.rev) {
  case 0x4:
   VAR_13 = "dvb-netup-altera-04.fw";
   break;
  default:
   VAR_13 = "dvb-netup-altera-01.fw";
   break;
  }
  FUNC_6("NetUP card rev=0x%x fw_filename=%s\n",
   VAR_15.rev, VAR_13);

  VAR_11 = FUNC_8(&VAR_12, VAR_13, &VAR_7->pci->dev);
  if (VAR_11 != 0)
   FUNC_5("did not find the firmware file '%s'. You can use <kernel_dir>/scripts/get_dvb_firmware to get the firmware.",
          VAR_13);
  else
   FUNC_0(&VAR_16, VAR_12);

  FUNC_7(VAR_12);
  break;
 }
 }
}
