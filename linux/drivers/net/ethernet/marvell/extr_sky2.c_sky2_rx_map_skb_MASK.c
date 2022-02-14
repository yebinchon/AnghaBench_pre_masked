
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; int data; } ;
struct rx_ring_info {int data_addr; int * frag_addr; struct sk_buff* skb; } ;
struct pci_dev {int dev; } ;
typedef int const skb_frag_t ;
struct TYPE_4__ {int nr_frags; int const* frags; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct rx_ring_info*,int ) ;
 int FUNC_3 (struct rx_ring_info*,int ,unsigned int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ,unsigned int,int ) ;
 int FUNC_7 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_8 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_9 (int *,int const*,int ,int ,int ) ;
 int FUNC_10 (int const*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_4, struct rx_ring_info *VAR_5,
       unsigned VAR_6)
{
 struct sk_buff *VAR_7 = VAR_5->skb;
 int VAR_8;

 VAR_5->data_addr = FUNC_6(VAR_4, VAR_7->data, VAR_6, VAR_2);
 if (FUNC_5(VAR_4, VAR_5->data_addr))
  goto mapping_error;

 FUNC_3(VAR_5, VAR_3, VAR_6);

 for (VAR_8 = 0; VAR_8 < FUNC_11(VAR_7)->nr_frags; VAR_8++) {
  const skb_frag_t *VAR_9 = &FUNC_11(VAR_7)->frags[VAR_8];

  VAR_5->frag_addr[VAR_8] = FUNC_9(&VAR_4->dev, VAR_9, 0,
          FUNC_10(VAR_9),
          VAR_0);

  if (FUNC_1(&VAR_4->dev, VAR_5->frag_addr[VAR_8]))
   goto map_page_error;
 }
 return 0;

map_page_error:
 while (--VAR_8 >= 0) {
  FUNC_7(VAR_4, VAR_5->frag_addr[VAR_8],
          FUNC_10(&FUNC_11(VAR_7)->frags[VAR_8]),
          VAR_2);
 }

 FUNC_8(VAR_4, VAR_5->data_addr, FUNC_2(VAR_5, VAR_3),
    VAR_2);

mapping_error:
 if (FUNC_4())
  FUNC_0(&VAR_4->dev, "%s: rx mapping error\n",
    VAR_7->dev->name);
 return -VAR_1;
}
