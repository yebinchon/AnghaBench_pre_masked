
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int read_ptr; } ;
struct il_tx_queue {TYPE_1__ q; struct sk_buff** skbs; int * meta; scalar_t__ tfds; } ;
struct il_tfd {int dummy; } ;
struct il_priv {struct pci_dev* pci_dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct il_tfd*) ;
 int FUNC_5 (struct il_tfd*,int) ;
 int FUNC_6 (struct il_tfd*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct pci_dev*,int ,int ,int ) ;

void
FUNC_8(struct il_priv *VAR_5, struct il_tx_queue *VAR_6)
{
 struct il_tfd *VAR_7 = (struct il_tfd *)VAR_6->tfds;
 struct il_tfd *VAR_8;
 struct pci_dev *VAR_9 = VAR_5->pci_dev;
 int VAR_10 = VAR_6->q.read_ptr;
 int VAR_11;
 int VAR_12;

 VAR_8 = &VAR_7[VAR_10];


 VAR_12 = FUNC_4(VAR_8);

 if (VAR_12 >= VAR_0) {
  FUNC_0("Too many chunks: %i\n", VAR_12);

  return;
 }


 if (VAR_12)
  FUNC_7(VAR_9, FUNC_2(&VAR_6->meta[VAR_10], VAR_4),
     FUNC_3(&VAR_6->meta[VAR_10], VAR_3),
     VAR_1);


 for (VAR_11 = 1; VAR_11 < VAR_12; VAR_11++)
  FUNC_7(VAR_9, FUNC_5(VAR_8, VAR_11),
     FUNC_6(VAR_8, VAR_11),
     VAR_2);


 if (VAR_6->skbs) {
  struct sk_buff *VAR_13 = VAR_6->skbs[VAR_6->q.read_ptr];


  if (VAR_13) {
   FUNC_1(VAR_13);
   VAR_6->skbs[VAR_6->q.read_ptr] = ((void*)0);
  }
 }
}
