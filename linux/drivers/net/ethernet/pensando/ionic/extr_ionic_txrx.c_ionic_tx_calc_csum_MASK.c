
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int encapsulation; scalar_t__ csum_not_inet; int csum_offset; int data; } ;
struct ionic_txq_desc {void* csum_offset; void* csum_start; void* vlan_tci; void* len; int cmd; } ;
struct ionic_tx_stats {int csum; int crc32_csum; } ;
struct ionic_queue {TYPE_3__* lif; TYPE_1__* head; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int nr_frags; } ;
struct TYPE_7__ {TYPE_2__* ionic; } ;
struct TYPE_6__ {struct device* dev; } ;
struct TYPE_5__ {struct ionic_txq_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct ionic_queue*,int ,int ) ;
 struct ionic_tx_stats* FUNC_5 (struct ionic_queue*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_4__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct ionic_queue *VAR_4, struct sk_buff *VAR_5)
{
 struct ionic_tx_stats *VAR_6 = FUNC_5(VAR_4);
 struct ionic_txq_desc *VAR_7 = VAR_4->head->desc;
 struct device *VAR_8 = VAR_4->lif->ionic->dev;
 dma_addr_t VAR_9;
 bool VAR_10;
 u8 VAR_11 = 0;
 bool VAR_12;
 u64 VAR_13;

 VAR_10 = !!FUNC_10(VAR_5);
 VAR_12 = VAR_5->encapsulation;

 VAR_9 = FUNC_4(VAR_4, VAR_5->data, FUNC_7(VAR_5));
 if (FUNC_2(VAR_8, VAR_9))
  return -VAR_0;

 VAR_11 |= VAR_10 ? VAR_2 : 0;
 VAR_11 |= VAR_12 ? VAR_1 : 0;

 VAR_13 = FUNC_3(VAR_3,
      VAR_11, FUNC_8(VAR_5)->nr_frags, VAR_9);
 VAR_7->cmd = FUNC_1(VAR_13);
 VAR_7->len = FUNC_0(FUNC_7(VAR_5));
 VAR_7->vlan_tci = FUNC_0(FUNC_9(VAR_5));
 VAR_7->csum_start = FUNC_0(FUNC_6(VAR_5));
 VAR_7->csum_offset = FUNC_0(VAR_5->csum_offset);

 if (VAR_5->csum_not_inet)
  VAR_6->crc32_csum++;
 else
  VAR_6->csum++;

 return 0;
}
