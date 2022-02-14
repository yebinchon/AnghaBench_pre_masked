
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct TYPE_2__ {int tx_block; struct device* dev; } ;
struct cmdq_client {int chan; TYPE_1__ client; scalar_t__ pkt_cnt; int timer; int lock; scalar_t__ timeout_ms; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cmdq_client* FUNC_0 (long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct cmdq_client*) ;
 struct cmdq_client* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;

struct cmdq_client *FUNC_9(struct device *VAR_4, int VAR_5, u32 VAR_6)
{
 struct cmdq_client *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return (struct cmdq_client *)-VAR_1;

 VAR_7->timeout_ms = VAR_6;
 if (VAR_6 != VAR_0) {
  FUNC_7(&VAR_7->lock);
  FUNC_8(&VAR_7->timer, VAR_3, 0);
 }
 VAR_7->pkt_cnt = 0;
 VAR_7->client.dev = VAR_4;
 VAR_7->client.tx_block = 0;
 VAR_7->chan = FUNC_6(&VAR_7->client, VAR_5);

 if (FUNC_1(VAR_7->chan)) {
  long VAR_8;

  FUNC_3(VAR_4, "failed to request channel\n");
  VAR_8 = FUNC_2(VAR_7->chan);
  FUNC_4(VAR_7);

  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
