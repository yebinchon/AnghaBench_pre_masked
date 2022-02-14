
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int low; int high; } ;
struct hclge_priv_buf {int enable; int buf_size; TYPE_1__ wl; } ;
struct TYPE_4__ {scalar_t__ buf_size; } ;
struct hclge_pkt_buf_alloc {TYPE_2__ s_buf; struct hclge_priv_buf* priv_buf; } ;
struct hclge_dev {int pkt_buf_size; int mps; int dv_buf_size; int hw_tc_map; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hclge_pkt_buf_alloc*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_8,
          struct hclge_pkt_buf_alloc *VAR_9)
{




 u32 VAR_10 = VAR_8->pkt_buf_size - FUNC_2(VAR_9);
 u32 VAR_11 = FUNC_1(VAR_8);
 u32 VAR_12 = VAR_8->mps >> 1;
 u32 VAR_13;
 unsigned int VAR_14;

 if (VAR_11)
  VAR_10 = VAR_10 / VAR_11;

 if (VAR_11 <= VAR_6)
  VAR_10 = VAR_10 * VAR_1 / VAR_0;

 VAR_13 = VAR_8->dv_buf_size + 0x3C00 +
   5 * VAR_12;
 VAR_13 = FUNC_4(VAR_13, VAR_4);
 VAR_10 = FUNC_3(VAR_10, VAR_4);

 if (VAR_10 < VAR_13)
  return 0;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  struct hclge_priv_buf *VAR_15 = &VAR_9->priv_buf[VAR_14];

  VAR_15->enable = 0;
  VAR_15->wl.low = 0;
  VAR_15->wl.high = 0;
  VAR_15->buf_size = 0;

  if (!(VAR_8->hw_tc_map & FUNC_0(VAR_14)))
   continue;

  VAR_15->enable = 1;
  VAR_15->buf_size = VAR_10;
  VAR_15->wl.high = VAR_10 - VAR_8->dv_buf_size;
  VAR_15->wl.low = VAR_15->wl.high - 0x1800;
 }

 VAR_9->s_buf.buf_size = 0;

 return 1;
}
