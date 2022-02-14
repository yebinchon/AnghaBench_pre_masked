
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {TYPE_3__* pdev; } ;
struct idt_ntb_dev {size_t port; size_t* port_idx_map; size_t* part_idx_map; size_t peer_cnt; TYPE_4__ ntb; TYPE_2__* peers; TYPE_1__* swcfg; void* part; } ;
struct TYPE_12__ {int sts; } ;
struct TYPE_11__ {int sts; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {unsigned char port; unsigned char part; } ;
struct TYPE_7__ {unsigned char port_cnt; unsigned char* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*,unsigned char,size_t) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct idt_ntb_dev*,int ) ;
 int FUNC_5 (struct idt_ntb_dev*,int ) ;
 int FUNC_6 (size_t*,int ,int) ;
 TYPE_6__* VAR_12 ;
 TYPE_5__* VAR_13 ;

__attribute__((used)) static int FUNC_7(struct idt_ntb_dev *VAR_14)
{
 unsigned char VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19, VAR_20;


 VAR_18 = FUNC_4(VAR_14, VAR_3);
 VAR_14->port = FUNC_0(VAR_6, VAR_18);


 VAR_19 = FUNC_5(VAR_14, VAR_13[VAR_14->port].sts);
 VAR_14->part = FUNC_0(VAR_9, VAR_19);


 FUNC_6(VAR_14->port_idx_map, -VAR_1, sizeof(VAR_14->port_idx_map));
 FUNC_6(VAR_14->part_idx_map, -VAR_1, sizeof(VAR_14->part_idx_map));





 VAR_14->peer_cnt = 0;
 for (VAR_15 = 0; VAR_15 < VAR_14->swcfg->port_cnt; VAR_15++) {
  VAR_16 = VAR_14->swcfg->ports[VAR_15];

  if (VAR_16 == VAR_14->port)
   continue;


  VAR_19 = FUNC_5(VAR_14, VAR_13[VAR_16].sts);
  VAR_17 = FUNC_0(VAR_9, VAR_19);


  VAR_20 = FUNC_5(VAR_14, VAR_12[VAR_17].sts);

  if (FUNC_1(VAR_7, VAR_20, VAR_0) &&
      (FUNC_1(VAR_8, VAR_19, VAR_4) ||
       FUNC_1(VAR_8, VAR_19, VAR_10) ||
       FUNC_1(VAR_8, VAR_19, VAR_11) ||
       FUNC_1(VAR_8, VAR_19, VAR_5))) {

   VAR_14->peers[VAR_14->peer_cnt].port = VAR_16;
   VAR_14->peers[VAR_14->peer_cnt].part = VAR_17;

   VAR_14->port_idx_map[VAR_16] = VAR_14->peer_cnt;
   VAR_14->part_idx_map[VAR_17] = VAR_14->peer_cnt;
   VAR_14->peer_cnt++;
  }
 }

 FUNC_2(&VAR_14->ntb.pdev->dev, "Local port: %hhu, num of peers: %hhu\n",
  VAR_14->port, VAR_14->peer_cnt);


 if (VAR_14->peer_cnt == 0) {
  FUNC_3(&VAR_14->ntb.pdev->dev, "No active peer found\n");
  return -VAR_2;
 }

 return 0;
}
