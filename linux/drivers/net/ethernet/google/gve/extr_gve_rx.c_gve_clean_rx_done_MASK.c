
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {int seqno; struct gve_rx_desc* desc_ring; } ;
struct gve_rx_ring {int cnt; int mask; int rpackets; int fill_cnt; int statss; int rbytes; TYPE_1__ desc; int q_num; struct gve_priv* gve; } ;
struct gve_rx_desc {int len; int flags_seq; } ;
struct gve_priv {int dev; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gve_rx_ring*,struct gve_rx_desc*,int ,int) ;
 int FUNC_5 (struct gve_rx_ring*) ;
 int FUNC_6 (struct gve_priv*,struct gve_rx_ring*) ;
 int FUNC_7 (struct gve_priv*) ;
 int FUNC_8 (struct gve_priv*,int ,int ,char*,int ,int,struct gve_rx_desc*,...) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

bool FUNC_11(struct gve_rx_ring *VAR_2, int VAR_3,
         netdev_features_t VAR_4)
{
 struct gve_priv *VAR_5 = VAR_2->gve;
 struct gve_rx_desc *VAR_6;
 u32 VAR_7 = VAR_2->cnt;
 u32 VAR_8 = VAR_7 & VAR_2->mask;
 u32 VAR_9 = 0;
 u64 VAR_10 = 0;

 VAR_6 = VAR_2->desc.desc_ring + VAR_8;
 while ((FUNC_0(VAR_6->flags_seq) == VAR_2->desc.seqno) &&
        VAR_9 < VAR_3) {
  FUNC_8(VAR_5, VAR_1, VAR_5->dev,
      "[%d] idx=%d desc=%p desc->flags_seq=0x%x\n",
      VAR_2->q_num, VAR_8, VAR_6, VAR_6->flags_seq);
  FUNC_8(VAR_5, VAR_1, VAR_5->dev,
      "[%d] seqno=%d rx->desc.seqno=%d\n",
      VAR_2->q_num, FUNC_0(VAR_6->flags_seq),
      VAR_2->desc.seqno);
  VAR_10 += FUNC_1(VAR_6->len) - VAR_0;
  if (!FUNC_4(VAR_2, VAR_6, VAR_4, VAR_8))
   FUNC_7(VAR_5);
  VAR_7++;
  VAR_8 = VAR_7 & VAR_2->mask;
  VAR_6 = VAR_2->desc.desc_ring + VAR_8;
  VAR_2->desc.seqno = FUNC_3(VAR_2->desc.seqno);
  VAR_9++;
 }

 if (!VAR_9)
  return 0;

 FUNC_9(&VAR_2->statss);
 VAR_2->rpackets += VAR_9;
 VAR_2->rbytes += VAR_10;
 FUNC_10(&VAR_2->statss);
 VAR_2->cnt = VAR_7;
 VAR_2->fill_cnt += VAR_9;


 FUNC_2();
 FUNC_6(VAR_5, VAR_2);
 return FUNC_5(VAR_2);
}
