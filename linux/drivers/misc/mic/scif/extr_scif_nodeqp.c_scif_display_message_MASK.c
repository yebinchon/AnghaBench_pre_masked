
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int port; int node; } ;
struct TYPE_6__ {int port; int node; } ;
struct scifmsg {size_t uop; int * payload; TYPE_3__ dst; TYPE_2__ src; } ;
struct scif_dev {TYPE_1__* sdev; } ;
struct TYPE_8__ {int en_msg_log; } ;
struct TYPE_5__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,char const*,size_t) ;
 int FUNC_1 (int *,char*,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int * VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct scif_dev *VAR_3, struct scifmsg *VAR_4,
       const char *VAR_5)
{
 if (!VAR_2.en_msg_log)
  return;
 if (VAR_4->uop > VAR_0) {
  FUNC_0(&VAR_3->sdev->dev,
   "%s: unknown msg type %d\n", VAR_5, VAR_4->uop);
  return;
 }
 FUNC_1(&VAR_3->sdev->dev,
   "%s: msg type %s, src %d:%d, dest %d:%d payload 0x%llx:0x%llx:0x%llx:0x%llx\n",
   VAR_5, VAR_1[VAR_4->uop], VAR_4->src.node, VAR_4->src.port,
   VAR_4->dst.node, VAR_4->dst.port, VAR_4->payload[0], VAR_4->payload[1],
   VAR_4->payload[2], VAR_4->payload[3]);
}
