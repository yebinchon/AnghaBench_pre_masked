
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct team_port {scalar_t__ queue_id; } ;
struct TYPE_5__ {scalar_t__ u32_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; TYPE_1__* info; } ;
struct team {TYPE_3__* dev; } ;
struct TYPE_6__ {scalar_t__ real_num_tx_queues; } ;
struct TYPE_4__ {struct team_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (struct team*,struct team_port*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_1,
        struct team_gsetter_ctx *VAR_2)
{
 struct team_port *VAR_3 = VAR_2->info->port;
 u16 VAR_4 = VAR_2->data.u32_val;

 if (VAR_3->queue_id == VAR_4)
  return 0;
 if (VAR_4 >= VAR_1->dev->real_num_tx_queues)
  return -VAR_0;
 FUNC_0(VAR_1, VAR_3, VAR_4);
 return 0;
}
