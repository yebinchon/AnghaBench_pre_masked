
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data_len; scalar_t__ len; int cb; } ;
struct octnic_gather {int list; TYPE_1__* sg; } ;
struct octnet_buf_free_info {struct octnic_gather* g; struct lio* lio; } ;
struct octeon_soft_command {scalar_t__ callback_arg; } ;
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

__attribute__((used)) static void FUNC_8(void *VAR_1)
{
 struct octnet_buf_free_info *VAR_2;
 struct octeon_soft_command *VAR_3;
 struct octnic_gather *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 struct lio *VAR_9;

 VAR_3 = (struct octeon_soft_command *)VAR_1;
 VAR_5 = (struct sk_buff *)VAR_3->callback_arg;
 VAR_2 = (struct octnet_buf_free_info *)&VAR_5->cb;

 VAR_9 = VAR_2->lio;
 VAR_4 = VAR_2->g;
 VAR_7 = FUNC_5(VAR_5)->nr_frags;

 FUNC_0(&VAR_9->oct_dev->pci_dev->dev,
    VAR_4->sg[0].ptr[0], (VAR_5->len - VAR_5->data_len),
    VAR_0);

 VAR_6 = 1;
 while (VAR_7--) {
  skb_frag_t *VAR_10 = &FUNC_5(VAR_5)->frags[VAR_6 - 1];

  FUNC_2((VAR_9->oct_dev)->pci_dev,
          VAR_4->sg[(VAR_6 >> 2)].ptr[(VAR_6 & 3)],
          FUNC_3(VAR_10), VAR_0);
  VAR_6++;
 }

 VAR_8 = FUNC_4(VAR_9->oct_dev, VAR_5);

 FUNC_6(&VAR_9->glist_lock[VAR_8]);
 FUNC_1(&VAR_4->list, &VAR_9->glist[VAR_8]);
 FUNC_7(&VAR_9->glist_lock[VAR_8]);


}
