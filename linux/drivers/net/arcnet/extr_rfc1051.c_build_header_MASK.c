
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int tx_aborted_errors; int tx_errors; } ;
struct net_device {int flags; int * dev_addr; TYPE_2__ stats; } ;
struct TYPE_6__ {scalar_t__ dest; int source; } ;
struct arc_rfc1051 {int proto; } ;
struct TYPE_4__ {struct arc_rfc1051 rfc1051; } ;
struct archdr {TYPE_3__ hard; TYPE_1__ soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct net_device*,char*,unsigned short,unsigned short) ;
 struct archdr* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_7, struct net_device *VAR_8,
   unsigned short VAR_9, uint8_t VAR_10)
{
 int VAR_11 = VAR_0 + VAR_6;
 struct archdr *VAR_12 = FUNC_1(VAR_7, VAR_11);
 struct arc_rfc1051 *VAR_13 = &VAR_12->soft.rfc1051;


 switch (VAR_9) {
 case 128:
  VAR_13->proto = VAR_2;
  break;
 case 129:
  VAR_13->proto = VAR_1;
  break;
 default:
  FUNC_0(VAR_3, VAR_8, "RFC1051: I don't understand protocol %d (%Xh)\n",
      VAR_9, VAR_9);
  VAR_8->stats.tx_errors++;
  VAR_8->stats.tx_aborted_errors++;
  return 0;
 }







 VAR_12->hard.source = *VAR_8->dev_addr;



 if (VAR_8->flags & (VAR_4 | VAR_5)) {



  VAR_12->hard.dest = 0;
  return VAR_11;
 }

 VAR_12->hard.dest = VAR_10;

 return VAR_11;
}
