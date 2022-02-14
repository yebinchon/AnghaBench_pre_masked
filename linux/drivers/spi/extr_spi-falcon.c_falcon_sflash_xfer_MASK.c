
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int* tx_buf; int* rx_buf; int len; } ;
struct device {int dummy; } ;
struct spi_device {int chip_select; int master; struct device dev; } ;
struct falcon_sflash {int sfcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 struct falcon_sflash* FUNC_4 (int ) ;

int FUNC_5(struct spi_device *VAR_20, struct spi_transfer *VAR_21,
  unsigned long VAR_22)
{
 struct device *VAR_23 = &VAR_20->dev;
 struct falcon_sflash *VAR_24 = FUNC_4(VAR_20->master);
 const u8 *VAR_25 = VAR_21->tx_buf;
 u8 *VAR_26 = VAR_21->rx_buf;
 unsigned int VAR_27 = ((8 * VAR_21->len + 7) / 8);
 unsigned int VAR_28, VAR_29, VAR_30;
 u32 VAR_31;
 enum {
  state_init,
  state_command_prepare,
  state_write,
  state_read,
  state_disable_cs,
  state_end
 } VAR_32 = state_init;

 do {
  switch (VAR_32) {
  case state_init:
  {

   if (VAR_22 & VAR_2) {
    if (!VAR_25) {
     FUNC_1(VAR_23,
      "BEGIN without tx data!\n");
     return -VAR_1;
    }







    VAR_24->sfcmd = ((VAR_20->chip_select
      << VAR_9)
            & VAR_8);
    VAR_24->sfcmd |= VAR_14;
    VAR_24->sfcmd |= *VAR_25;
    VAR_25++;
    VAR_27--;
    if (VAR_27) {




     VAR_32 = state_command_prepare;
     break;
    } else {
     FUNC_0(VAR_23, "write cmd %02X\n",
      VAR_24->sfcmd & VAR_15);
    }
   }

   if (VAR_25 && VAR_27) {
    VAR_32 = state_write;
    break;
   }

   if (VAR_26 && VAR_27) {
    VAR_32 = state_read;
    break;
   }

   if (VAR_22 & VAR_3)
    VAR_32 = state_disable_cs;
   else
    VAR_32 = state_end;
   break;
  }

  case state_command_prepare:
  {

   VAR_31 = 0;
   VAR_29 = 0;
   VAR_30 = 0;
   while (VAR_27 > 0) {
    if (VAR_29 < 3) {
     VAR_31 = (VAR_31 << 8) | (*VAR_25++);
     VAR_29++;
    } else if ((VAR_30 < 15) && (*VAR_25 == 0)) {




     VAR_30++;
     VAR_25++;
    } else {
     break;
    }
    VAR_27--;
   }
   VAR_24->sfcmd &= ~(VAR_6 | VAR_12);
   VAR_24->sfcmd |= (VAR_29 << VAR_7) |
      (VAR_30 << VAR_13);
   if (VAR_29 > 0)
    FUNC_3(VAR_31, VAR_4);

   FUNC_0(VAR_23, "wr %02X, alen=%d (addr=%06X) dlen=%d\n",
    VAR_24->sfcmd & VAR_15,
    VAR_29, VAR_31, VAR_30);

   if (VAR_27 > 0) {

    VAR_32 = state_write;
   } else if (VAR_22 & VAR_3) {

    VAR_32 = state_disable_cs;
   } else {




    VAR_32 = state_end;
   }
   break;
  }
  case state_write:
  {

   VAR_24->sfcmd |= VAR_10;
   VAR_28 = 0;
   VAR_31 = 0;
   do {
    if (VAR_27--)
     VAR_31 |= (*VAR_25++) << (8 * VAR_28++);
    if ((VAR_22 & VAR_3)
        && (VAR_27 == 0)) {
     VAR_24->sfcmd &=
      ~VAR_14;
    }
    if ((VAR_28 == 4) || (VAR_27 == 0)) {
     FUNC_3(VAR_31, VAR_16);
     FUNC_3(VAR_24->sfcmd
      | (VAR_28<<VAR_11),
      VAR_5);
     VAR_28 = 0;
     VAR_31 = 0;
     VAR_24->sfcmd &= ~(VAR_6
        | VAR_12);
    }
   } while (VAR_27);
   VAR_32 = state_end;
   break;
  }
  case state_read:
  {

   VAR_24->sfcmd &= ~VAR_10;
   do {
    if ((VAR_22 & VAR_3)
        && (VAR_27 <= 4)) {
     VAR_24->sfcmd &=
      ~VAR_14;
    }
    VAR_28 = (VAR_27 > 4) ? 4 : VAR_27;
    VAR_27 -= VAR_28;
    FUNC_3(VAR_24->sfcmd
     | (VAR_28 << VAR_11), VAR_5);
    VAR_24->sfcmd &= ~(VAR_6
       | VAR_12);
    do {
     VAR_31 = FUNC_2(VAR_17);
     if (VAR_31 & VAR_18) {

      FUNC_1(VAR_23, "SFSTAT: CMD_ERR");
      FUNC_1(VAR_23, " (%x)\n", VAR_31);
      FUNC_3(VAR_18,
       VAR_17);
      return -VAR_0;
     }
    } while (VAR_31 & VAR_19);
    VAR_31 = FUNC_2(VAR_16);
    do {
     *VAR_26 = (VAR_31 & 0xFF);
     VAR_26++;
     VAR_31 >>= 8;
     VAR_28--;
    } while (VAR_28);
   } while (VAR_27);
   VAR_32 = state_end;
   break;
  }
  case state_disable_cs:
  {
   VAR_24->sfcmd &= ~VAR_14;
   FUNC_3(VAR_24->sfcmd | (0 << VAR_11),
    VAR_5);
   VAR_31 = FUNC_2(VAR_17);
   if (VAR_31 & VAR_18) {

    FUNC_1(VAR_23, "SFSTAT: CMD_ERR (%x)\n", VAR_31);
    FUNC_3(VAR_18, VAR_17);
    return -VAR_0;
   }
   VAR_32 = state_end;
   break;
  }
  case state_end:
   break;
  }
 } while (VAR_32 != state_end);

 return 0;
}
