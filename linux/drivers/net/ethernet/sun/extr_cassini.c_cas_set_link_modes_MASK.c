
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {int cas_flags; int crc_size; scalar_t__ regs; int dev; int rx_pause_on; int rx_pause_off; int rx_fifo_size; int min_frame_size; int phy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
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
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_1 (struct cas*,int) ;
 int FUNC_2 (struct cas*,int ) ;
 int FUNC_3 (struct cas*,int*,int*,int*) ;
 int FUNC_4 (struct cas*,int*,int*,int*) ;
 int FUNC_5 (struct cas*) ;
 int VAR_33 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct cas*,int ,int ,char*,int,char*) ;
 scalar_t__ FUNC_8 (struct cas*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct cas *VAR_34)
{
 u32 VAR_35;
 int VAR_36, VAR_37, VAR_38;

 VAR_36 = 0;
 VAR_37 = 10;
 VAR_38 = 0;

 if (FUNC_0(VAR_34->phy_type)) {
  FUNC_1(VAR_34, 0);
  VAR_35 = FUNC_2(VAR_34, VAR_24);
  if (VAR_35 & VAR_0) {
   FUNC_3(VAR_34, &VAR_36, &VAR_37,
            &VAR_38);
  } else {
   if (VAR_35 & VAR_1)
    VAR_36 = 1;

   if (VAR_35 & VAR_2)
    VAR_37 = 100;
   else if (VAR_35 & VAR_4)
    VAR_37 = (VAR_34->cas_flags & VAR_5) ?
     1000 : 100;
  }
  FUNC_1(VAR_34, 1);

 } else {
  VAR_35 = FUNC_9(VAR_34->regs + VAR_32);
  FUNC_4(VAR_34, &VAR_36, &VAR_37, &VAR_38);
  if ((VAR_35 & VAR_25) == 0) {
   if (VAR_35 & VAR_26)
    VAR_36 = 1;
  }
 }

 FUNC_7(VAR_34, VAR_33, VAR_34->dev, "Link up at %d Mbps, %s-duplex\n",
     VAR_37, VAR_36 ? "full" : "half");

 VAR_35 = VAR_23 | VAR_21;
 if (FUNC_0(VAR_34->phy_type)) {
  VAR_35 |= VAR_22;
  if (!VAR_36)
   VAR_35 |= VAR_18;
 }
 if (VAR_36)
  VAR_35 |= VAR_19;
 if (VAR_37 == 1000)
  VAR_35 |= VAR_20;
 FUNC_10(VAR_35, VAR_34->regs + VAR_31);


 VAR_35 = VAR_15;
 if (VAR_36) {
  VAR_35 |= VAR_13;
  VAR_35 |= VAR_14;
 } else {

  VAR_35 |= VAR_16;
  VAR_35 |= VAR_17;

 }







 if ((VAR_37 == 1000) && !VAR_36) {
  FUNC_10(VAR_35 | VAR_12,
         VAR_34->regs + VAR_30);

  VAR_35 = FUNC_9(VAR_34->regs + VAR_28);
  VAR_35 &= ~VAR_11;
  FUNC_10(VAR_35 | VAR_10,
         VAR_34->regs + VAR_28);

  FUNC_10(0x200, VAR_34->regs + VAR_29);

  VAR_34->crc_size = 4;

  VAR_34->min_frame_size = VAR_3;

 } else {
  FUNC_10(VAR_35, VAR_34->regs + VAR_30);




  VAR_35 = FUNC_9(VAR_34->regs + VAR_28);
  if (VAR_36) {
   VAR_35 |= VAR_11;
   VAR_34->crc_size = 0;
   VAR_34->min_frame_size = VAR_7;
  } else {
   VAR_35 &= ~VAR_11;
   VAR_34->crc_size = 4;
   VAR_34->min_frame_size = VAR_6;
  }
  FUNC_10(VAR_35 & ~VAR_10,
         VAR_34->regs + VAR_28);
  FUNC_10(0x40, VAR_34->regs + VAR_29);
 }

 if (FUNC_8(VAR_34)) {
  if (VAR_38 & 0x01) {
   FUNC_6(VAR_34->dev, "Pause is enabled (rxfifo: %d off: %d on: %d)\n",
        VAR_34->rx_fifo_size,
        VAR_34->rx_pause_off,
        VAR_34->rx_pause_on);
  } else if (VAR_38 & 0x10) {
   FUNC_6(VAR_34->dev, "TX pause enabled\n");
  } else {
   FUNC_6(VAR_34->dev, "Pause is disabled\n");
  }
 }

 VAR_35 = FUNC_9(VAR_34->regs + VAR_27);
 VAR_35 &= ~(VAR_9 | VAR_8);
 if (VAR_38) {
  VAR_35 |= VAR_9;
  if (VAR_38 & 0x01) {
   VAR_35 |= VAR_8;
  }
 }
 FUNC_10(VAR_35, VAR_34->regs + VAR_27);
 FUNC_5(VAR_34);
}
