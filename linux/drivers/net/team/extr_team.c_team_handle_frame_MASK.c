
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct team_port {struct team* team; } ;
struct team_pcpu_stats {int syncp; int rx_multicast; int rx_bytes; int rx_packets; } ;
struct TYPE_3__ {scalar_t__ (* receive ) (struct team*,struct team_port*,struct sk_buff*) ;} ;
struct team {TYPE_2__* pcpu_stats; int dev; TYPE_1__ ops; } ;
struct sk_buff {scalar_t__ pkt_type; int dev; scalar_t__ len; } ;
typedef scalar_t__ rx_handler_result_t ;
struct TYPE_4__ {int rx_dropped; int rx_nohandler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_1 (struct team*,struct team_port*,struct sk_buff*) ;
 int FUNC_2 (struct team_port*) ;
 struct team_port* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct team_pcpu_stats* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static rx_handler_result_t FUNC_8(struct sk_buff **VAR_5)
{
 struct sk_buff *VAR_6 = *VAR_5;
 struct team_port *VAR_7;
 struct team *VAR_8;
 rx_handler_result_t VAR_9;

 VAR_6 = FUNC_0(VAR_6, VAR_0);
 if (!VAR_6)
  return VAR_3;

 *VAR_5 = VAR_6;

 VAR_7 = FUNC_3(VAR_6->dev);
 VAR_8 = VAR_7->team;
 if (!FUNC_2(VAR_7)) {

  VAR_9 = VAR_4;
 } else {
  VAR_9 = VAR_8->ops.receive(VAR_8, VAR_7, VAR_6);
 }
 if (VAR_9 == VAR_2) {
  struct team_pcpu_stats *VAR_10;

  VAR_10 = FUNC_5(VAR_8->pcpu_stats);
  FUNC_6(&VAR_10->syncp);
  VAR_10->rx_packets++;
  VAR_10->rx_bytes += VAR_6->len;
  if (VAR_6->pkt_type == VAR_1)
   VAR_10->rx_multicast++;
  FUNC_7(&VAR_10->syncp);

  VAR_6->dev = VAR_8->dev;
 } else if (VAR_9 == VAR_4) {
  FUNC_4(VAR_8->pcpu_stats->rx_nohandler);
 } else {
  FUNC_4(VAR_8->pcpu_stats->rx_dropped);
 }

 return VAR_9;
}
