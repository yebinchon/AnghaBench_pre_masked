
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data_len; scalar_t__ len; } ;
struct octnic_gather {int list; TYPE_1__* sg; } ;
struct octnet_buf_free_info {struct octnic_gather* g; struct lio* lio; struct sk_buff* skb; } ;
struct lio {int * glist_lock; int * glist; TYPE_3__* oct_dev; } ;
typedef int skb_frag_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_4__* pci_dev; } ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_5__ {int * ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
 struct octnet_buf_free_info *VAR_2;
 struct sk_buff *VAR_3;
 struct lio *VAR_4;
 struct octnic_gather *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_2 = (struct octnet_buf_free_info *)VAR_1;
 VAR_3 = VAR_2->skb;
 VAR_4 = VAR_2->lio;
 VAR_5 = VAR_2->g;
 VAR_7 = FUNC_5(VAR_3)->nr_frags;

 FUNC_0(&VAR_4->oct_dev->pci_dev->dev,
    VAR_5->sg[0].ptr[0], (VAR_3->len - VAR_3->data_len),
    VAR_0);

 VAR_6 = 1;
 while (VAR_7--) {
  skb_frag_t *VAR_9 = &FUNC_5(VAR_3)->frags[VAR_6 - 1];

  FUNC_2((VAR_4->oct_dev)->pci_dev,
          VAR_5->sg[(VAR_6 >> 2)].ptr[(VAR_6 & 3)],
          FUNC_3(VAR_9), VAR_0);
  VAR_6++;
 }

 VAR_8 = FUNC_4(VAR_4->oct_dev, VAR_3);
 FUNC_6(&VAR_4->glist_lock[VAR_8]);
 FUNC_1(&VAR_5->list, &VAR_4->glist[VAR_8]);
 FUNC_7(&VAR_4->glist_lock[VAR_8]);

 FUNC_8(VAR_3);
}
