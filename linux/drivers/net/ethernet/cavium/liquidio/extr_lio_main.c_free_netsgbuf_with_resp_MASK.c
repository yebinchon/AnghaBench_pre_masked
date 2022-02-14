
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
 struct octeon_soft_command *VAR_2;
 struct octnet_buf_free_info *VAR_3;
 struct sk_buff *VAR_4;
 struct lio *VAR_5;
 struct octnic_gather *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_2 = (struct octeon_soft_command *)VAR_1;
 VAR_4 = (struct sk_buff *)VAR_2->callback_arg;
 VAR_3 = (struct octnet_buf_free_info *)&VAR_4->cb;

 VAR_5 = VAR_3->lio;
 VAR_6 = VAR_3->g;
 VAR_8 = FUNC_5(VAR_4)->nr_frags;

 FUNC_0(&VAR_5->oct_dev->pci_dev->dev,
    VAR_6->sg[0].ptr[0], (VAR_4->len - VAR_4->data_len),
    VAR_0);

 VAR_7 = 1;
 while (VAR_8--) {
  skb_frag_t *VAR_10 = &FUNC_5(VAR_4)->frags[VAR_7 - 1];

  FUNC_2((VAR_5->oct_dev)->pci_dev,
          VAR_6->sg[(VAR_7 >> 2)].ptr[(VAR_7 & 3)],
          FUNC_3(VAR_10), VAR_0);
  VAR_7++;
 }

 VAR_9 = FUNC_4(VAR_5->oct_dev, VAR_4);

 FUNC_6(&VAR_5->glist_lock[VAR_9]);
 FUNC_1(&VAR_6->list, &VAR_5->glist[VAR_9]);
 FUNC_7(&VAR_5->glist_lock[VAR_9]);


}
