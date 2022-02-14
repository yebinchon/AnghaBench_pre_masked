
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {long base_addr; int* dev_addr; } ;
struct ei_device {int tx_start_page; int rx_start_page; int stop_page; int current_page; scalar_t__ txing; scalar_t__ tx2; scalar_t__ tx1; scalar_t__ word16; } ;
struct e8390_pkt_hdr {int dummy; } ;
struct axnet_dev {int flags; int duplex_flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct axnet_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct ei_device* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_26, int VAR_27)
{
 struct axnet_dev *VAR_28 = FUNC_1(VAR_26);
 long VAR_29 = VAR_26->base_addr;
 struct ei_device *VAR_30 = FUNC_5(VAR_26);
 int VAR_31;
 int VAR_32 = VAR_30->word16 ? (0x48 | VAR_23) : 0x48;

 if(sizeof(struct e8390_pkt_hdr)!=4)
      FUNC_9("8390.c: header struct mispacked\n");

 FUNC_8(VAR_2+VAR_3+VAR_8, VAR_29+VAR_1);
 FUNC_8(VAR_32, VAR_29 + VAR_12);

 FUNC_8(0x00, VAR_29 + VAR_16);
 FUNC_8(0x00, VAR_29 + VAR_15);

 FUNC_8(VAR_6|0x40, VAR_29 + VAR_17);
 FUNC_8(VAR_10, VAR_29 + VAR_21);

 FUNC_8(VAR_30->tx_start_page, VAR_29 + VAR_20);
 VAR_30->tx1 = VAR_30->tx2 = 0;
 FUNC_8(VAR_30->rx_start_page, VAR_29 + VAR_18);
 FUNC_8(VAR_30->stop_page-1, VAR_29 + VAR_11);
 VAR_30->current_page = VAR_30->rx_start_page;
 FUNC_8(VAR_30->stop_page, VAR_29 + VAR_19);

 FUNC_8(0xFF, VAR_29 + VAR_14);
 FUNC_8(0x00, VAR_29 + VAR_13);



 FUNC_8(VAR_2 + VAR_4 + VAR_8, VAR_29+VAR_1);
 for(VAR_31 = 0; VAR_31 < 6; VAR_31++)
 {
  FUNC_8(VAR_26->dev_addr[VAR_31], VAR_29 + FUNC_0(VAR_31));
  if(FUNC_3(VAR_29 + FUNC_0(VAR_31))!=VAR_26->dev_addr[VAR_31])
   FUNC_4(VAR_26, "Hw. address read/write mismap %d\n", VAR_31);
 }

 FUNC_8(VAR_30->rx_start_page, VAR_29 + VAR_22);
 FUNC_8(VAR_2+VAR_3+VAR_8, VAR_29+VAR_1);

 FUNC_6(VAR_26);
 VAR_30->tx1 = VAR_30->tx2 = 0;
 VAR_30->txing = 0;

 if (VAR_28->flags & VAR_25)
  FUNC_7(0x10, VAR_29 + VAR_0);

 if (VAR_27)
 {
  FUNC_8(0xff, VAR_29 + VAR_14);
  FUNC_8(VAR_24, VAR_29 + VAR_13);
  FUNC_8(VAR_2+VAR_3+VAR_7, VAR_29+VAR_1);
  FUNC_8(VAR_9 | VAR_28->duplex_flag,
         VAR_29 + VAR_21);

  FUNC_8(VAR_5 | 0x40, VAR_29 + VAR_17);
  FUNC_2(VAR_26);
 }
}
