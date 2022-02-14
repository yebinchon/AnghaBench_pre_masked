
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_sw_desc {int addr_idx; size_t sflit; int fragidx; } ;
struct sk_buff {int dummy; } ;
struct sge_txq {unsigned int size; struct tx_sw_desc* sdesc; TYPE_1__* desc; } ;
struct sg_ent {int * addr; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int nr_frags; int * frags; } ;
struct TYPE_3__ {int * flit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_6(struct sk_buff *VAR_2, struct sge_txq *VAR_3,
        unsigned int VAR_4, struct pci_dev *VAR_5)
{
 const struct sg_ent *VAR_6;
 struct tx_sw_desc *VAR_7 = &VAR_3->sdesc[VAR_4];
 int VAR_8, VAR_9, VAR_10, VAR_11 = VAR_7->addr_idx;

 VAR_6 = (struct sg_ent *)&VAR_3->desc[VAR_4].flit[VAR_7->sflit];
 VAR_9 = VAR_7->fragidx;

 if (VAR_9 == 0 && FUNC_4(VAR_2)) {
  FUNC_2(VAR_5, FUNC_0(VAR_6->addr[0]),
     FUNC_4(VAR_2), VAR_0);
  VAR_11 = 1;
 }

 VAR_10 = VAR_7->sflit + 1 + VAR_11;
 VAR_8 = FUNC_5(VAR_2)->nr_frags;

 while (VAR_9 < VAR_8 && VAR_10 < VAR_1) {
  FUNC_1(VAR_5, FUNC_0(VAR_6->addr[VAR_11]),
          FUNC_3(&FUNC_5(VAR_2)->frags[VAR_9]),
          VAR_0);
  VAR_11 ^= 1;
  if (VAR_11 == 0) {
   VAR_6++;
   VAR_10++;
  }
  VAR_10++;
  VAR_9++;
 }

 if (VAR_9 < VAR_8) {
  VAR_7 = VAR_4 + 1 == VAR_3->size ? VAR_3->sdesc : VAR_7 + 1;
  VAR_7->fragidx = VAR_9;
  VAR_7->addr_idx = VAR_11;
  VAR_7->sflit = VAR_10 - VAR_1 - VAR_11;
 }
}
