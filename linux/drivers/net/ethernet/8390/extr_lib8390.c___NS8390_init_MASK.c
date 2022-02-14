
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned long base_addr; int* dev_addr; } ;
struct ei_device {int tx_start_page; int rx_start_page; int stop_page; int current_page; scalar_t__ txing; scalar_t__ tx2; scalar_t__ tx1; scalar_t__ bigendian; scalar_t__ word16; } ;
struct e8390_pkt_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct ei_device* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct ei_device*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_25, int VAR_26)
{
 unsigned long VAR_27 = VAR_25->base_addr;
 struct ei_device *VAR_28 = FUNC_5(VAR_25);
 int VAR_29;
 int VAR_30 = VAR_28->word16
     ? (0x48 | VAR_23 | (VAR_28->bigendian ? VAR_22 : 0))
     : 0x48;

 if (sizeof(struct e8390_pkt_hdr) != 4)
  FUNC_7("8390.c: header struct mispacked\n");

 FUNC_3(VAR_1+VAR_2+VAR_7, VAR_27+VAR_0);
 FUNC_3(VAR_30, VAR_27 + VAR_11);

 FUNC_3(0x00, VAR_27 + VAR_15);
 FUNC_3(0x00, VAR_27 + VAR_14);

 FUNC_3(VAR_5, VAR_27 + VAR_16);
 FUNC_3(VAR_9, VAR_27 + VAR_20);

 FUNC_3(VAR_28->tx_start_page, VAR_27 + VAR_19);
 VAR_28->tx1 = VAR_28->tx2 = 0;
 FUNC_3(VAR_28->rx_start_page, VAR_27 + VAR_17);
 FUNC_3(VAR_28->stop_page-1, VAR_27 + VAR_10);
 VAR_28->current_page = VAR_28->rx_start_page;
 FUNC_3(VAR_28->stop_page, VAR_27 + VAR_18);

 FUNC_3(0xFF, VAR_27 + VAR_13);
 FUNC_3(0x00, VAR_27 + VAR_12);



 FUNC_3(VAR_1 + VAR_3 + VAR_7, VAR_27+VAR_0);
 for (VAR_29 = 0; VAR_29 < 6; VAR_29++) {
  FUNC_3(VAR_25->dev_addr[VAR_29], VAR_27 + FUNC_0(VAR_29));
  if ((FUNC_6(VAR_28)) &&
      FUNC_2(VAR_27 + FUNC_0(VAR_29)) != VAR_25->dev_addr[VAR_29])
   FUNC_4(VAR_25,
       "Hw. address read/write mismap %d\n", VAR_29);
 }

 FUNC_3(VAR_28->rx_start_page, VAR_27 + VAR_21);
 FUNC_3(VAR_1+VAR_2+VAR_7, VAR_27+VAR_0);

 VAR_28->tx1 = VAR_28->tx2 = 0;
 VAR_28->txing = 0;

 if (VAR_26) {
  FUNC_3(0xff, VAR_27 + VAR_13);
  FUNC_3(VAR_24, VAR_27 + VAR_12);
  FUNC_3(VAR_1+VAR_2+VAR_6, VAR_27+VAR_0);
  FUNC_3(VAR_8, VAR_27 + VAR_20);

  FUNC_3(VAR_4, VAR_27 + VAR_16);
  FUNC_1(VAR_25);
 }
}
