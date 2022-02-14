
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int len; int cb; } ;
struct cfhsi_desc {int* cffrm_len; int header; scalar_t__ offset; scalar_t__* emb_frm; } ;
struct TYPE_4__ {int tail_align; int head_align; } ;
struct cfhsi {int lock; TYPE_3__* ndev; TYPE_1__ cfg; } ;
struct caif_payload_info {int hdr_len; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct cfhsi*) ;
 struct sk_buff* FUNC_2 (struct cfhsi*) ;
 int FUNC_3 (struct cfhsi*,struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cfhsi_desc *VAR_5, struct cfhsi *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 struct sk_buff *VAR_9;
 u8 *VAR_10 = VAR_5->emb_frm + VAR_2;

 VAR_9 = FUNC_2(VAR_6);
 if (!VAR_9)
  return 0;


 VAR_5->offset = 0;


 if (VAR_9->len < VAR_2) {
  struct caif_payload_info *VAR_11;
  int VAR_12;
  int VAR_13;


  VAR_11 = (struct caif_payload_info *)&VAR_9->cb;

  VAR_12 = 1 + FUNC_0((VAR_11->hdr_len + 1), VAR_6->cfg.head_align);
  VAR_13 = FUNC_0((VAR_9->len + VAR_12), VAR_6->cfg.tail_align);


  if ((VAR_9->len + VAR_12 + VAR_13) <= VAR_2) {
   u8 *VAR_14 = VAR_5->emb_frm;
   VAR_5->offset = VAR_0;
   *VAR_14 = (u8)(VAR_12 - 1);
   VAR_14 += VAR_12;


   FUNC_6(&VAR_6->lock);
   VAR_6->ndev->stats.tx_packets++;
   VAR_6->ndev->stats.tx_bytes += VAR_9->len;
   FUNC_3(VAR_6, VAR_9, -1);
   FUNC_7(&VAR_6->lock);


   FUNC_5(VAR_9, 0, VAR_14, VAR_9->len);


   FUNC_4(VAR_9);
   VAR_9 = ((void*)0);
  }
 }


 while (VAR_7 < VAR_3) {
  struct caif_payload_info *VAR_15;
  int VAR_16;
  int VAR_17;

  if (!VAR_9)
   VAR_9 = FUNC_2(VAR_6);

  if (!VAR_9)
   break;


  VAR_15 = (struct caif_payload_info *)&VAR_9->cb;

  VAR_16 = 1 + FUNC_0((VAR_15->hdr_len + 1), VAR_6->cfg.head_align);
  VAR_17 = FUNC_0((VAR_9->len + VAR_16), VAR_6->cfg.tail_align);


  VAR_5->cffrm_len[VAR_7] = VAR_16 + VAR_9->len + VAR_17;


  *VAR_10 = (u8)(VAR_16 - 1);
  VAR_10 += VAR_16;


  FUNC_6(&VAR_6->lock);
  VAR_6->ndev->stats.tx_packets++;
  VAR_6->ndev->stats.tx_bytes += VAR_9->len;
  FUNC_3(VAR_6, VAR_9, -1);
  FUNC_7(&VAR_6->lock);


  FUNC_5(VAR_9, 0, VAR_10, VAR_9->len);


  VAR_8 += VAR_5->cffrm_len[VAR_7];


  VAR_10 += VAR_9->len + VAR_17;


  FUNC_4(VAR_9);
  VAR_9 = ((void*)0);


  VAR_7++;
 }


 while (VAR_7 < VAR_3) {
  VAR_5->cffrm_len[VAR_7] = 0x0000;
  VAR_7++;
 }


 if (FUNC_1(VAR_6))
  VAR_5->header |= VAR_4;
 else
  VAR_5->header &= ~VAR_4;

 return VAR_1 + VAR_8;
}
