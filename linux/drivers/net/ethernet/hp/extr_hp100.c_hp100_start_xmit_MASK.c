
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {int base_addr; int name; TYPE_1__ stats; } ;
struct hp100_private {int lan_type; scalar_t__ hub_status; int mode; int lock; int mem_ptr_virt; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int VAR_17 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ,int ,int) ;
 struct hp100_private* FUNC_19 (struct net_device*) ;
 int FUNC_20 (scalar_t__,int ,int) ;
 int FUNC_21 (char*,int ,...) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 scalar_t__ FUNC_24 (int ,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_25(struct sk_buff *VAR_18,
        struct net_device *VAR_19)
{
 unsigned long VAR_20;
 int VAR_21, VAR_22;
 int VAR_23 = VAR_19->base_addr;
 u_short VAR_24;
 struct hp100_private *VAR_25 = FUNC_19(VAR_19);





 if (VAR_18->len <= 0)
  goto drop;

 if (FUNC_3(VAR_19))
  goto drop;


 VAR_21 = FUNC_5(VAR_15) & 0x7fffffff;
 if (!(((VAR_21 / 2) - 539) > (VAR_18->len + 16) && (FUNC_4(VAR_16) < 255))) {




  if (FUNC_24(VAR_17, FUNC_2(VAR_19) + VAR_9)) {




   goto drop;
  }
  if (VAR_25->lan_type == VAR_2 && VAR_25->hub_status < 0) {

   FUNC_21("hp100: %s: login to 100Mb/s hub retry\n", VAR_19->name);
   FUNC_15(VAR_19);
   VAR_25->hub_status = FUNC_9(VAR_19, 0);
   FUNC_14(VAR_19);
  } else {
   FUNC_22(&VAR_25->lock, VAR_20);
   FUNC_6();
   VAR_21 = FUNC_13(VAR_19);
   FUNC_7();
   FUNC_23(&VAR_25->lock, VAR_20);
   if (VAR_21 == VAR_3)
    FUNC_21("hp100: %s: link down detected\n", VAR_19->name);
   else if (VAR_25->lan_type != VAR_21) {

    FUNC_21("hp100: %s: cable change 10Mb/s <-> 100Mb/s detected\n", VAR_19->name);
    VAR_25->lan_type = VAR_21;
    FUNC_15(VAR_19);
    if (VAR_25->lan_type == VAR_2)
     VAR_25->hub_status = FUNC_9(VAR_19, 0);
    FUNC_14(VAR_19);
   } else {
    FUNC_21("hp100: %s: interface reset\n", VAR_19->name);
    FUNC_15(VAR_19);
    if (VAR_25->lan_type == VAR_2)
     VAR_25->hub_status = FUNC_9(VAR_19, 0);
    FUNC_14(VAR_19);
    FUNC_16(1);
   }
  }
  goto drop;
 }

 for (VAR_21 = 0; VAR_21 < 6000 && (FUNC_4(VAR_13) & VAR_7); VAR_21++) {



 }

 FUNC_22(&VAR_25->lock, VAR_20);
 FUNC_6();
 VAR_24 = FUNC_8(VAR_11);


 FUNC_12(VAR_8, VAR_11);





 VAR_22 = VAR_18->len >= VAR_4;
 VAR_21 = VAR_22 ? VAR_18->len : VAR_4;

 FUNC_12(VAR_21, VAR_0);
 FUNC_12(VAR_21, VAR_1);

 if (VAR_25->mode == 2) {

  FUNC_17(VAR_25->mem_ptr_virt, VAR_18->data, (VAR_18->len + 3) & ~3);
  if (!VAR_22)
   FUNC_18(VAR_25->mem_ptr_virt, 0, VAR_4 - VAR_18->len);
 } else {
  FUNC_20(VAR_23 + VAR_5, VAR_18->data,
        (VAR_18->len + 3) >> 2);
  if (!VAR_22)
   for (VAR_21 = (VAR_18->len + 3) & ~3; VAR_21 < VAR_4; VAR_21 += 4)
    FUNC_11(0, VAR_0);
 }

 FUNC_10(VAR_7 | VAR_6, VAR_13);

 VAR_19->stats.tx_packets++;
 VAR_19->stats.tx_bytes += VAR_18->len;
 FUNC_7();
 FUNC_23(&VAR_25->lock, VAR_20);

 FUNC_0(VAR_18);





 return VAR_12;

drop:
 FUNC_1(VAR_18);
 return VAR_12;

}
