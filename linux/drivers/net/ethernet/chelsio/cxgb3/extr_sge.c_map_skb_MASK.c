
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {size_t nr_frags; int * frags; } ;
struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct pci_dev*,int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int const*,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_7 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_3, const struct sk_buff *VAR_4,
     dma_addr_t *VAR_5)
{
 const skb_frag_t *VAR_6, *VAR_7;
 const struct skb_shared_info *VAR_8;

 if (FUNC_6(VAR_4)) {
  *VAR_5 = FUNC_2(VAR_3, VAR_4->data, FUNC_6(VAR_4),
           VAR_2);
  if (FUNC_1(VAR_3, *VAR_5))
   goto out_err;
  VAR_5++;
 }

 VAR_8 = FUNC_7(VAR_4);
 VAR_7 = &VAR_8->frags[VAR_8->nr_frags];

 for (VAR_6 = VAR_8->frags; VAR_6 < VAR_7; VAR_6++) {
  *VAR_5 = FUNC_4(&VAR_3->dev, VAR_6, 0, FUNC_5(VAR_6),
      VAR_0);
  if (FUNC_1(VAR_3, *VAR_5))
   goto unwind;
  VAR_5++;
 }
 return 0;

unwind:
 while (VAR_6-- > VAR_8->frags)
  FUNC_0(&VAR_3->dev, *--VAR_5, FUNC_5(VAR_6),
          VAR_0);

 FUNC_3(VAR_3, VAR_5[-1], FUNC_6(VAR_4), VAR_2);
out_err:
 return -VAR_1;
}
