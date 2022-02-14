
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ssp_clock_params {int cpsdvsr; unsigned int scr; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct spi_device {unsigned int bits_per_word; size_t chip_select; int mode; TYPE_4__ dev; int max_speed_hz; struct pl022_config_chip* controller_data; int master; } ;
struct TYPE_9__ {scalar_t__ cpsdvsr; scalar_t__ scr; } ;
struct pl022_config_chip {unsigned int hierarchy; scalar_t__ iface; scalar_t__ com_mode; scalar_t__ rx_lev_trig; scalar_t__ tx_lev_trig; scalar_t__ ctrl_len; scalar_t__ wait_state; scalar_t__ duplex; unsigned int clkdelay; unsigned int slave_tx_disable; scalar_t__ cs_control; TYPE_3__ clk_freq; } ;
struct pl022 {scalar_t__ rx_lev_trig; scalar_t__ tx_lev_trig; TYPE_2__* vendor; TYPE_1__* master_info; int * chipselects; } ;
struct device_node {int dummy; } ;
struct chip_data {scalar_t__ xfer_type; int n_bytes; int cpsr; int enable_dma; scalar_t__ cr1; scalar_t__ cr0; scalar_t__ dmacr; int write; int read; scalar_t__ cs_control; } ;
typedef int clk_freq ;
struct TYPE_8__ {unsigned int max_bpw; scalar_t__ loopback; scalar_t__ pl023; scalar_t__ extended_cr; } ;
struct TYPE_7__ {scalar_t__ enable_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 unsigned int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 int FUNC_0 (scalar_t__,unsigned int,int ,int) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_1 (struct pl022*,int ,struct ssp_clock_params*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct chip_data*) ;
 struct chip_data* FUNC_7 (int,int ) ;
 int FUNC_8 (struct ssp_clock_params*,TYPE_3__*,int) ;
 scalar_t__ VAR_52 ;
 int FUNC_9 (struct device_node*,char*,scalar_t__*) ;
 struct pl022_config_chip VAR_53 ;
 struct chip_data* FUNC_10 (struct spi_device*) ;
 struct pl022* FUNC_11 (int ) ;
 int FUNC_12 (struct spi_device*,struct chip_data*) ;
 int FUNC_13 (struct pl022*,struct pl022_config_chip const*) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_54)
{
 struct pl022_config_chip const *VAR_55;
 struct pl022_config_chip VAR_56;
 struct chip_data *VAR_57;
 struct ssp_clock_params VAR_58 = { .cpsdvsr = 0, .scr = 0};
 int VAR_59 = 0;
 struct pl022 *VAR_60 = FUNC_11(VAR_54->master);
 unsigned int VAR_61 = VAR_54->bits_per_word;
 u32 VAR_62;
 struct device_node *VAR_63 = VAR_54->dev.of_node;

 if (!VAR_54->max_speed_hz)
  return -VAR_3;


 VAR_57 = FUNC_10(VAR_54);

 if (VAR_57 == ((void*)0)) {
  VAR_57 = FUNC_7(sizeof(struct chip_data), VAR_6);
  if (!VAR_57)
   return -VAR_4;
  FUNC_2(&VAR_54->dev,
   "allocated memory for controller's runtime state\n");
 }


 VAR_55 = VAR_54->controller_data;

 if (VAR_55 == ((void*)0)) {
  if (VAR_63) {
   VAR_56 = VAR_53;

   VAR_56.hierarchy = VAR_44;
   FUNC_9(VAR_63, "pl022,interface",
    &VAR_56.iface);
   FUNC_9(VAR_63, "pl022,com-mode",
    &VAR_56.com_mode);
   FUNC_9(VAR_63, "pl022,rx-level-trig",
    &VAR_56.rx_lev_trig);
   FUNC_9(VAR_63, "pl022,tx-level-trig",
    &VAR_56.tx_lev_trig);
   FUNC_9(VAR_63, "pl022,ctrl-len",
    &VAR_56.ctrl_len);
   FUNC_9(VAR_63, "pl022,wait-state",
    &VAR_56.wait_state);
   FUNC_9(VAR_63, "pl022,duplex",
    &VAR_56.duplex);

   VAR_55 = &VAR_56;
  } else {
   VAR_55 = &VAR_53;

   FUNC_2(&VAR_54->dev,
    "using default controller_data settings\n");
  }
 } else
  FUNC_2(&VAR_54->dev,
   "using user supplied controller_data settings\n");





 if ((0 == VAR_55->clk_freq.cpsdvsr)
     && (0 == VAR_55->clk_freq.scr)) {
  VAR_59 = FUNC_1(VAR_60,
        VAR_54->max_speed_hz,
        &VAR_58);
  if (VAR_59 < 0)
   goto err_config_params;
 } else {
  FUNC_8(&VAR_58, &VAR_55->clk_freq, sizeof(VAR_58));
  if ((VAR_58.cpsdvsr % 2) != 0)
   VAR_58.cpsdvsr =
    VAR_58.cpsdvsr - 1;
 }
 if ((VAR_58.cpsdvsr < VAR_1)
     || (VAR_58.cpsdvsr > VAR_0)) {
  VAR_59 = -VAR_3;
  FUNC_3(&VAR_54->dev,
   "cpsdvsr is configured incorrectly\n");
  goto err_config_params;
 }

 VAR_59 = FUNC_13(VAR_60, VAR_55);
 if (VAR_59) {
  FUNC_3(&VAR_54->dev, "controller data is incorrect");
  goto err_config_params;
 }

 VAR_60->rx_lev_trig = VAR_55->rx_lev_trig;
 VAR_60->tx_lev_trig = VAR_55->tx_lev_trig;


 VAR_57->xfer_type = VAR_55->com_mode;
 if (!VAR_55->cs_control) {
  VAR_57->cs_control = VAR_52;
  if (!FUNC_5(VAR_60->chipselects[VAR_54->chip_select]))
   FUNC_4(&VAR_54->dev,
     "invalid chip select\n");
 } else
  VAR_57->cs_control = VAR_55->cs_control;


 if ((VAR_61 <= 3) || (VAR_61 > VAR_60->vendor->max_bpw)) {
  VAR_59 = -VAR_5;
  FUNC_3(&VAR_54->dev, "illegal data size for this controller!\n");
  FUNC_3(&VAR_54->dev, "This controller can only handle 4 <= n <= %d bit words\n",
    VAR_60->vendor->max_bpw);
  goto err_config_params;
 } else if (VAR_61 <= 8) {
  FUNC_2(&VAR_54->dev, "4 <= n <=8 bits per word\n");
  VAR_57->n_bytes = 1;
  VAR_57->read = VAR_11;
  VAR_57->write = VAR_51;
 } else if (VAR_61 <= 16) {
  FUNC_2(&VAR_54->dev, "9 <= n <= 16 bits per word\n");
  VAR_57->n_bytes = 2;
  VAR_57->read = VAR_9;
  VAR_57->write = VAR_49;
 } else {
  FUNC_2(&VAR_54->dev, "17 <= n <= 32 bits per word\n");
  VAR_57->n_bytes = 4;
  VAR_57->read = VAR_10;
  VAR_57->write = VAR_50;
 }


 VAR_57->cr0 = 0;
 VAR_57->cr1 = 0;
 VAR_57->dmacr = 0;
 VAR_57->cpsr = 0;
 if ((VAR_55->com_mode == VAR_2)
     && ((VAR_60->master_info)->enable_dma)) {
  VAR_57->enable_dma = 1;
  FUNC_2(&VAR_54->dev, "DMA mode set in controller state\n");
  FUNC_0(VAR_57->dmacr, VAR_43,
          VAR_40, 0);
  FUNC_0(VAR_57->dmacr, VAR_43,
          VAR_41, 1);
 } else {
  VAR_57->enable_dma = 0;
  FUNC_2(&VAR_54->dev, "DMA mode NOT set in controller state\n");
  FUNC_0(VAR_57->dmacr, VAR_42,
          VAR_40, 0);
  FUNC_0(VAR_57->dmacr, VAR_42,
          VAR_41, 1);
 }

 VAR_57->cpsr = VAR_58.cpsdvsr;


 if (VAR_60->vendor->extended_cr) {
  u32 VAR_64;

  if (VAR_60->vendor->pl023) {

   FUNC_0(VAR_57->cr1, VAR_55->clkdelay,
           VAR_29, 13);
  } else {

   FUNC_0(VAR_57->cr0, VAR_55->duplex,
           VAR_25, 5);
   FUNC_0(VAR_57->cr0, VAR_55->ctrl_len,
           VAR_20, 16);
   FUNC_0(VAR_57->cr0, VAR_55->iface,
           VAR_24, 21);
   FUNC_0(VAR_57->cr1, VAR_55->wait_state,
           VAR_32, 6);
  }
  FUNC_0(VAR_57->cr0, VAR_61 - 1,
          VAR_22, 0);

  if (VAR_54->mode & VAR_15) {
   VAR_62 = VAR_45;
   VAR_64 = VAR_47;
  } else {
   VAR_62 = VAR_46;
   VAR_64 = VAR_48;
  }
  FUNC_0(VAR_57->cr1, VAR_62, VAR_33, 4);
  FUNC_0(VAR_57->cr1, VAR_64, VAR_37, 5);
  FUNC_0(VAR_57->cr1, VAR_55->rx_lev_trig,
          VAR_34, 7);
  FUNC_0(VAR_57->cr1, VAR_55->tx_lev_trig,
          VAR_38, 10);
 } else {
  FUNC_0(VAR_57->cr0, VAR_61 - 1,
          VAR_21, 0);
  FUNC_0(VAR_57->cr0, VAR_55->iface,
          VAR_23, 4);
 }


 if (VAR_54->mode & VAR_13)
  VAR_62 = VAR_17;
 else
  VAR_62 = VAR_18;
 FUNC_0(VAR_57->cr0, VAR_62, VAR_28, 6);

 if (VAR_54->mode & VAR_12)
  VAR_62 = VAR_19;
 else
  VAR_62 = VAR_16;
 FUNC_0(VAR_57->cr0, VAR_62, VAR_27, 7);

 FUNC_0(VAR_57->cr0, VAR_58.scr, VAR_26, 8);

 if (VAR_60->vendor->loopback) {
  if (VAR_54->mode & VAR_14)
   VAR_62 = VAR_8;
  else
   VAR_62 = VAR_7;
  FUNC_0(VAR_57->cr1, VAR_62, VAR_30, 0);
 }
 FUNC_0(VAR_57->cr1, VAR_39, VAR_36, 1);
 FUNC_0(VAR_57->cr1, VAR_55->hierarchy, VAR_31, 2);
 FUNC_0(VAR_57->cr1, VAR_55->slave_tx_disable, VAR_35,
  3);


 FUNC_12(VAR_54, VAR_57);
 return VAR_59;
 err_config_params:
 FUNC_12(VAR_54, ((void*)0));
 FUNC_6(VAR_57);
 return VAR_59;
}
