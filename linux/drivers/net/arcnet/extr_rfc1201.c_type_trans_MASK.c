
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int pkt_type; scalar_t__ data; } ;
struct TYPE_6__ {int rx_crc_errors; int rx_errors; } ;
struct net_device {int flags; scalar_t__* dev_addr; TYPE_3__ stats; } ;
struct TYPE_5__ {scalar_t__ dest; } ;
struct arc_rfc1201 {int proto; } ;
struct TYPE_4__ {struct arc_rfc1201 rfc1201; } ;
struct archdr {TYPE_2__ hard; TYPE_1__ soft; } ;
typedef int __be16 ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static __be16 FUNC_3(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct archdr *VAR_12 = (struct archdr *)VAR_10->data;
 struct arc_rfc1201 *VAR_13 = &VAR_12->soft.rfc1201;
 int VAR_14 = VAR_0 + VAR_9;


 FUNC_2(VAR_10);
 FUNC_1(VAR_10, VAR_14);

 if (VAR_12->hard.dest == 0) {
  VAR_10->pkt_type = VAR_7;
 } else if (VAR_11->flags & VAR_6) {

  if (VAR_12->hard.dest != VAR_11->dev_addr[0])
   VAR_10->pkt_type = VAR_8;
 }

 switch (VAR_13->proto) {
 case 132:
  return FUNC_0(VAR_3);
 case 131:
  return FUNC_0(VAR_4);
 case 133:
  return FUNC_0(VAR_2);
 case 128:
  return FUNC_0(VAR_5);

 case 130:
 case 129:
  return FUNC_0(VAR_1);
 default:
  VAR_11->stats.rx_errors++;
  VAR_11->stats.rx_crc_errors++;
  return 0;
 }

 return FUNC_0(VAR_3);
}
