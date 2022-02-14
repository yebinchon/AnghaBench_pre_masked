
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; int len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct bpqdev {int dest_addr; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct net_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 () ;
 struct bpqdev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 unsigned char* FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 unsigned char *VAR_6;
 struct bpqdev *VAR_7;
 struct net_device *VAR_8;
 int VAR_9;

 if (VAR_4->protocol == FUNC_5(VAR_2))
  return FUNC_0(VAR_4);





 if (!FUNC_9(VAR_5)) {
  FUNC_6(VAR_4);
  return VAR_3;
 }

 FUNC_13(VAR_4, 1);
 VAR_9 = VAR_4->len;






 if (FUNC_12(VAR_4, VAR_0)) {
  if (FUNC_7())
   FUNC_11("bpqether: out of memory\n");
  FUNC_6(VAR_4);

  return VAR_3;
 }

 VAR_6 = FUNC_14(VAR_4, 2);

 *VAR_6++ = (VAR_9 + 5) % 256;
 *VAR_6++ = (VAR_9 + 5) / 256;

 VAR_7 = FUNC_8(VAR_5);

 VAR_8 = VAR_5;
 if ((VAR_5 = FUNC_2(VAR_5)) == ((void*)0)) {
  VAR_8->stats.tx_dropped++;
  FUNC_6(VAR_4);
  return VAR_3;
 }

 VAR_4->protocol = FUNC_1(VAR_4, VAR_5);
 FUNC_15(VAR_4);
 FUNC_3(VAR_4, VAR_5, VAR_1, VAR_7->dest_addr, ((void*)0), 0);
 VAR_5->stats.tx_packets++;
 VAR_5->stats.tx_bytes+=VAR_4->len;

 FUNC_4(VAR_4);
 FUNC_10(VAR_5);
 return VAR_3;
}
