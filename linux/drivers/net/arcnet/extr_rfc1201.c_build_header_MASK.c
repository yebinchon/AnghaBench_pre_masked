
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int tx_aborted_errors; int tx_errors; } ;
struct net_device {int flags; int * dev_addr; TYPE_2__ stats; } ;
struct TYPE_7__ {int sequence; } ;
struct arcnet_local {TYPE_3__ rfc1201; } ;
struct TYPE_8__ {scalar_t__ dest; int source; } ;
struct arc_rfc1201 {scalar_t__ split_flag; int sequence; int proto; } ;
struct TYPE_5__ {struct arc_rfc1201 rfc1201; } ;
struct archdr {TYPE_4__ hard; TYPE_1__ soft; } ;


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
 int VAR_10 ;
 int FUNC_0 (int ,struct net_device*,char*,unsigned short,unsigned short) ;
 int FUNC_1 (int ) ;
 struct arcnet_local* FUNC_2 (struct net_device*) ;
 struct archdr* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_11, struct net_device *VAR_12,
   unsigned short VAR_13, uint8_t VAR_14)
{
 struct arcnet_local *VAR_15 = FUNC_2(VAR_12);
 int VAR_16 = VAR_0 + VAR_10;
 struct archdr *VAR_17 = FUNC_3(VAR_11, VAR_16);
 struct arc_rfc1201 *VAR_18 = &VAR_17->soft.rfc1201;


 switch (VAR_13) {
 case 131:
  VAR_18->proto = VAR_3;
  break;
 case 130:
  VAR_18->proto = VAR_4;
  break;
 case 133:
  VAR_18->proto = VAR_1;
  break;
 case 128:
  VAR_18->proto = VAR_6;
  break;
 case 129:
 case 134:
 case 135:
  VAR_18->proto = VAR_5;
  break;
 case 132:
  VAR_18->proto = VAR_2;
  break;
 default:
  FUNC_0(VAR_7, VAR_12, "RFC1201: I don't understand protocol %d (%Xh)\n",
      VAR_13, VAR_13);
  VAR_12->stats.tx_errors++;
  VAR_12->stats.tx_aborted_errors++;
  return 0;
 }







 VAR_17->hard.source = *VAR_12->dev_addr;

 VAR_18->sequence = FUNC_1(VAR_15->rfc1201.sequence++);
 VAR_18->split_flag = 0;



 if (VAR_12->flags & (VAR_8 | VAR_9)) {





  VAR_17->hard.dest = 0;
  return VAR_16;
 }

 VAR_17->hard.dest = VAR_14;
 return VAR_16;
}
