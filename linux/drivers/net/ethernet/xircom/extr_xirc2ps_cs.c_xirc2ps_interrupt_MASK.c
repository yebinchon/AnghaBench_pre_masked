
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u_long ;
typedef int u_char ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {unsigned int rx_bytes; int tx_packets; int tx_aborted_errors; int rx_over_errors; int rx_fifo_errors; int rx_crc_errors; int rx_frame_errors; int multicast; int rx_packets; int rx_dropped; } ;
struct net_device {unsigned int base_addr; unsigned int name; TYPE_1__ stats; } ;
struct local_info {scalar_t__ silicon; unsigned int last_ptr_value; scalar_t__ mohawk; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,int) ;
 unsigned int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int,int*,unsigned int) ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 scalar_t__ VAR_27 ;
 unsigned int VAR_28 ;
 struct sk_buff* FUNC_8 (struct net_device*,unsigned int) ;
 struct local_info* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (char*,...) ;
 int* FUNC_14 (struct sk_buff*,unsigned int) ;
 int FUNC_15 (struct sk_buff*,int) ;

__attribute__((used)) static irqreturn_t
FUNC_16(int VAR_29, void *VAR_30)
{
    struct net_device *VAR_31 = (struct net_device *)VAR_30;
    struct local_info *VAR_32 = FUNC_9(VAR_31);
    unsigned int VAR_33;
    u_char VAR_34;
    unsigned VAR_35;
    unsigned VAR_36, VAR_37, VAR_38, VAR_39;
    unsigned VAR_40, VAR_41;
    ulong VAR_42 = VAR_25;




    if (!FUNC_10(VAR_31))
 return VAR_6;

    VAR_33 = VAR_31->base_addr;
    if (VAR_32->mohawk) {
 FUNC_2(VAR_20, 0);
    }

    FUNC_13("%s: interrupt %d at %#x.\n", VAR_31->name, VAR_29, VAR_33);

    VAR_34 = FUNC_0(VAR_24);



    VAR_36 = FUNC_0(VAR_23);
    VAR_35 = 0;
  loop_entry:
    if (VAR_36 == 0xff) {
 FUNC_13("%s: interrupt %d for dead card\n", VAR_31->name, VAR_29);
 goto leave;
    }
    VAR_37 = FUNC_0(VAR_22);

    FUNC_4(0x40);
    VAR_38 = FUNC_0(VAR_16);
    FUNC_2(VAR_16, (~VAR_38 & 0xff));
    VAR_39 = FUNC_0(VAR_17);
    VAR_39 |= FUNC_0(VAR_18) << 8;
    FUNC_2(VAR_17, 0);
    FUNC_2(VAR_18, 0);

    FUNC_13("%s: ISR=%#2.2x ESR=%#2.2x RSR=%#2.2x TSR=%#4.4x\n",
   VAR_31->name, VAR_36, VAR_37, VAR_38, VAR_39);


    FUNC_4(0);
    while (VAR_37 & VAR_4) {
 VAR_40 = FUNC_0(VAR_15);
 if (VAR_35 > VAR_28 && (VAR_40 & VAR_8)) {


     VAR_31->stats.rx_dropped++;
     FUNC_13("%s: RX drop, too much done\n", VAR_31->name);
 } else if (VAR_40 & VAR_8) {
     struct sk_buff *VAR_43;

     VAR_41 = FUNC_1(VAR_14);
     VAR_35 += VAR_41;

     FUNC_13("rsr=%#02x packet_length=%u\n", VAR_40, VAR_41);


     VAR_43 = FUNC_8(VAR_31, VAR_41 + 3);
     if (!VAR_43) {
  VAR_31->stats.rx_dropped++;
     } else {
  FUNC_15(VAR_43, 2);
  if (VAR_32->silicon == 0 ) {
      unsigned VAR_44;

      FUNC_4(5);
      VAR_44 = FUNC_1(VAR_19);
      FUNC_4(0);
      VAR_44 += 3;
      if (VAR_44 >= 0x8000)
   VAR_44 = 0;
      if (VAR_44 + VAR_41 > 0x8000) {
   unsigned VAR_45;
   u_char *VAR_46 = FUNC_14(VAR_43, VAR_41);
   for (VAR_45=0; VAR_45 < VAR_41 ; VAR_45++, VAR_44++) {
       VAR_46[VAR_45] = FUNC_0(VAR_21);
       if (VAR_44 == 0x8000) {
    VAR_44 = 0;
    VAR_45--;
       }
   }
      } else {
   FUNC_7(VAR_33+VAR_21,
    FUNC_14(VAR_43, VAR_41), (VAR_41+1)>>1);
      }
  }
  else {
      FUNC_7(VAR_33+VAR_21, FUNC_14(VAR_43, VAR_41),
       (VAR_41+1)>>1);
  }
  VAR_43->protocol = FUNC_5(VAR_43, VAR_31);
  FUNC_11(VAR_43);
  VAR_31->stats.rx_packets++;
  VAR_31->stats.rx_bytes += VAR_41;
  if (!(VAR_40 & VAR_7))
      VAR_31->stats.multicast++;
     }
 } else {
     FUNC_13("rsr=%#02x\n", VAR_40);
 }
 if (VAR_40 & VAR_9) {
     VAR_31->stats.rx_frame_errors++;
     FUNC_13("%s: Packet too long\n", VAR_31->name);
 }
 if (VAR_40 & VAR_1) {
     VAR_31->stats.rx_crc_errors++;
     FUNC_13("%s: CRC error\n", VAR_31->name);
 }
 if (VAR_40 & VAR_0) {
     VAR_31->stats.rx_fifo_errors++;
     FUNC_13("%s: Alignment error\n", VAR_31->name);
 }


 FUNC_3(VAR_12, 0x8000);


 VAR_37 = FUNC_0(VAR_22);
    }
    if (VAR_38 & 0x10) {
 VAR_31->stats.rx_over_errors++;
 FUNC_2(VAR_20, VAR_2);
 FUNC_13("receive overrun cleared\n");
    }


    if (VAR_36 & VAR_10) {
 unsigned VAR_47, VAR_48;

 VAR_47 = VAR_32->last_ptr_value;
 VAR_48 = FUNC_0(VAR_13);
 VAR_32->last_ptr_value = VAR_48;
 if (VAR_48 < VAR_47)
     VAR_31->stats.tx_packets += 256 - VAR_47;
 else if (VAR_47 == VAR_48) {
     FUNC_13("PTR not changed?\n");
 } else
     VAR_31->stats.tx_packets += VAR_32->last_ptr_value - VAR_47;
 FUNC_12(VAR_31);
    }
    if (VAR_39 & 0x0002) {
 FUNC_13("tx restarted due to excessive collisions\n");
 FUNC_2(VAR_20, VAR_11);
    }
    if (VAR_39 & 0x0040)
 VAR_31->stats.tx_aborted_errors++;





    if (VAR_35 > 1000) {
 u_long VAR_49 = VAR_25 - VAR_42;

 if (VAR_49 >= VAR_5/10) {
     VAR_28 = (VAR_35 * (VAR_5/10)) / VAR_49;
     if (VAR_28 < 2000)
  VAR_28 = 2000;
     else if (VAR_28 > 22000)
  VAR_28 = 22000;
     FUNC_13("set maxrx=%u (rcvd=%u ticks=%lu)\n",
    VAR_28, VAR_35, VAR_49);
 } else if (!VAR_49 && VAR_28 < 22000) {

     VAR_28 += 2000;
     if (VAR_28 > 22000)
  VAR_28 = 22000;
     FUNC_13("set maxrx=%u\n", VAR_28);
 }
    }

  leave:
    if (VAR_27) {
 if (VAR_36 != 0xff && (VAR_36 = FUNC_0(VAR_23)) != 0)
     goto loop_entry;
    }
    FUNC_4(VAR_34);
    FUNC_2(VAR_20, VAR_3);




    return VAR_6;
}
