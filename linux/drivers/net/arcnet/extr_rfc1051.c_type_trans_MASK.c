
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
struct arc_rfc1051 {int proto; } ;
struct TYPE_4__ {struct arc_rfc1051 rfc1051; } ;
struct archdr {TYPE_2__ hard; TYPE_1__ soft; } ;
typedef int __be16 ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static __be16 FUNC_3(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct archdr *VAR_9 = (struct archdr *)VAR_7->data;
 struct arc_rfc1051 *VAR_10 = &VAR_9->soft.rfc1051;
 int VAR_11 = VAR_0 + VAR_6;


 FUNC_2(VAR_7);
 FUNC_1(VAR_7, VAR_11);

 if (VAR_9->hard.dest == 0) {
  VAR_7->pkt_type = VAR_4;
 } else if (VAR_8->flags & VAR_3) {

  if (VAR_9->hard.dest != VAR_8->dev_addr[0])
   VAR_7->pkt_type = VAR_5;
 }

 switch (VAR_10->proto) {
 case 128:
  return FUNC_0(VAR_2);
 case 129:
  return FUNC_0(VAR_1);

 default:
  VAR_8->stats.rx_errors++;
  VAR_8->stats.rx_crc_errors++;
  return 0;
 }

 return FUNC_0(VAR_2);
}
