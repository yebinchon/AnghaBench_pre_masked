
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cx23885_tsport {int reg_gpcnt; } ;
struct cx23885_dev {size_t board; int cx25840_work; int sd_ir; struct cx23885_tsport ts2; struct cx23885_tsport ts1; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ci_type; scalar_t__ portb; scalar_t__ portc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_1 (struct cx23885_dev*) ;
 int VAR_27 ;
 scalar_t__ FUNC_2 (struct cx23885_dev*,int,int) ;
 TYPE_1__* VAR_28 ;
 scalar_t__ FUNC_3 (struct cx23885_dev*,int) ;
 int FUNC_4 (struct cx23885_dev*,int) ;
 int FUNC_5 (struct cx23885_dev*) ;
 scalar_t__ FUNC_6 (struct cx23885_tsport*,int) ;
 scalar_t__ FUNC_7 (struct cx23885_dev*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,char*,int,...) ;
 int VAR_29 ;
 scalar_t__ FUNC_11 (struct cx23885_dev*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,int,int*) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_30, void *VAR_31)
{
 struct cx23885_dev *VAR_32 = VAR_31;
 struct cx23885_tsport *VAR_33 = &VAR_32->ts1;
 struct cx23885_tsport *VAR_34 = &VAR_32->ts2;
 u32 VAR_35, VAR_36;
 u32 VAR_37, VAR_38;
 u32 VAR_39, VAR_40;
 u32 VAR_41, VAR_42;
 u32 VAR_43, VAR_44;
 int VAR_45 = 0, VAR_46 = 0, VAR_47 = 0, VAR_48 = 0;
 int VAR_49 = 0;
 bool VAR_50;

 VAR_35 = FUNC_8(VAR_5);
 VAR_36 = FUNC_5(VAR_32);
 if ((VAR_35 & VAR_36) == 0) {
  FUNC_10(7, "pci_status: 0x%08x  pci_mask: 0x%08x\n",
   VAR_35, VAR_36);
  goto out;
 }

 VAR_37 = FUNC_8(VAR_22);
 VAR_38 = FUNC_8(VAR_21);
 VAR_39 = FUNC_8(VAR_1);
 VAR_40 = FUNC_8(VAR_0);
 VAR_41 = FUNC_8(VAR_24);
 VAR_42 = FUNC_8(VAR_23);
 VAR_43 = FUNC_8(VAR_26);
 VAR_44 = FUNC_8(VAR_25);

 if (((VAR_35 & VAR_36) == 0) &&
  ((VAR_43 & VAR_44) == 0) &&
  ((VAR_41 & VAR_42) == 0))
  goto out;

 VAR_45 = FUNC_8(VAR_20);
 VAR_49 = FUNC_8(VAR_2);
 VAR_46 = FUNC_8(VAR_33->reg_gpcnt);
 VAR_47 = FUNC_8(VAR_34->reg_gpcnt);
 FUNC_10(7, "pci_status: 0x%08x  pci_mask: 0x%08x\n",
  VAR_35, VAR_36);
 FUNC_10(7, "vida_status: 0x%08x vida_mask: 0x%08x count: 0x%x\n",
  VAR_37, VAR_38, VAR_45);
 FUNC_10(7, "audint_status: 0x%08x audint_mask: 0x%08x count: 0x%x\n",
  VAR_39, VAR_40, VAR_49);
 FUNC_10(7, "ts1_status: 0x%08x  ts1_mask: 0x%08x count: 0x%x\n",
  VAR_41, VAR_42, VAR_46);
 FUNC_10(7, "ts2_status: 0x%08x  ts2_mask: 0x%08x count: 0x%x\n",
  VAR_43, VAR_44, VAR_47);

 if (VAR_35 & (VAR_15 | VAR_16 |
     VAR_6 | VAR_7 | VAR_8 |
     VAR_19 | VAR_18 | VAR_17 |
     VAR_10 | VAR_9 |
     VAR_12 | VAR_13 |
     VAR_11 | VAR_14)) {

  if (VAR_35 & VAR_15)
   FUNC_10(7, " (PCI_MSK_RISC_RD   0x%08x)\n",
    VAR_15);

  if (VAR_35 & VAR_16)
   FUNC_10(7, " (PCI_MSK_RISC_WR   0x%08x)\n",
    VAR_16);

  if (VAR_35 & VAR_6)
   FUNC_10(7, " (PCI_MSK_AL_RD     0x%08x)\n",
    VAR_6);

  if (VAR_35 & VAR_7)
   FUNC_10(7, " (PCI_MSK_AL_WR     0x%08x)\n",
    VAR_7);

  if (VAR_35 & VAR_8)
   FUNC_10(7, " (PCI_MSK_APB_DMA   0x%08x)\n",
    VAR_8);

  if (VAR_35 & VAR_19)
   FUNC_10(7, " (PCI_MSK_VID_C     0x%08x)\n",
    VAR_19);

  if (VAR_35 & VAR_18)
   FUNC_10(7, " (PCI_MSK_VID_B     0x%08x)\n",
    VAR_18);

  if (VAR_35 & VAR_17)
   FUNC_10(7, " (PCI_MSK_VID_A     0x%08x)\n",
    VAR_17);

  if (VAR_35 & VAR_10)
   FUNC_10(7, " (PCI_MSK_AUD_INT   0x%08x)\n",
    VAR_10);

  if (VAR_35 & VAR_9)
   FUNC_10(7, " (PCI_MSK_AUD_EXT   0x%08x)\n",
    VAR_9);

  if (VAR_35 & VAR_12)
   FUNC_10(7, " (PCI_MSK_GPIO0     0x%08x)\n",
    VAR_12);

  if (VAR_35 & VAR_13)
   FUNC_10(7, " (PCI_MSK_GPIO1     0x%08x)\n",
    VAR_13);

  if (VAR_35 & VAR_11)
   FUNC_10(7, " (PCI_MSK_AV_CORE   0x%08x)\n",
    VAR_11);

  if (VAR_35 & VAR_14)
   FUNC_10(7, " (PCI_MSK_IR        0x%08x)\n",
    VAR_14);
 }

 if (VAR_28[VAR_32->board].ci_type == 1 &&
   (VAR_35 & (VAR_13 | VAR_12)))
  VAR_48 += FUNC_11(VAR_32, VAR_35);

 if (VAR_28[VAR_32->board].ci_type == 2 &&
   (VAR_35 & VAR_12))
  VAR_48 += FUNC_1(VAR_32);

 if (VAR_41) {
  if (VAR_28[VAR_32->board].portb == VAR_3)
   VAR_48 += FUNC_6(VAR_33, VAR_41);
  else
  if (VAR_28[VAR_32->board].portb == VAR_4)
   VAR_48 += FUNC_3(VAR_32, VAR_41);
 }

 if (VAR_43) {
  if (VAR_28[VAR_32->board].portc == VAR_3)
   VAR_48 += FUNC_6(VAR_34, VAR_43);
  else
  if (VAR_28[VAR_32->board].portc == VAR_4)
   VAR_48 += FUNC_3(VAR_32, VAR_43);
 }

 if (VAR_37)
  VAR_48 += FUNC_7(VAR_32, VAR_37);

 if (VAR_39)
  VAR_48 += FUNC_2(VAR_32, VAR_39, VAR_40);

 if (VAR_35 & VAR_14) {
  VAR_50 = 0;
  FUNC_13(VAR_32->sd_ir, VAR_27, VAR_29,
     VAR_35, &VAR_50);
  if (VAR_50)
   VAR_48++;
 }

 if ((VAR_35 & VAR_36) & VAR_11) {
  FUNC_4(VAR_32, VAR_11);
  FUNC_12(&VAR_32->cx25840_work);
  VAR_48++;
 }

 if (VAR_48)
  FUNC_9(VAR_5, VAR_35 & VAR_36);
out:
 return FUNC_0(VAR_48);
}
