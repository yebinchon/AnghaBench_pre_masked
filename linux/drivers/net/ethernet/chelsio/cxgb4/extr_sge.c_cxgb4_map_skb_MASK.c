
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {size_t nr_frags; int * frags; } ;
struct sk_buff {int data; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct device*,int const*,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_7 (struct sk_buff const*) ;

int FUNC_8(struct device *VAR_2, const struct sk_buff *VAR_3,
    dma_addr_t *VAR_4)
{
 const skb_frag_t *VAR_5, *VAR_6;
 const struct skb_shared_info *VAR_7;

 *VAR_4 = FUNC_0(VAR_2, VAR_3->data, FUNC_6(VAR_3), VAR_0);
 if (FUNC_1(VAR_2, *VAR_4))
  goto out_err;

 VAR_7 = FUNC_7(VAR_3);
 VAR_6 = &VAR_7->frags[VAR_7->nr_frags];

 for (VAR_5 = VAR_7->frags; VAR_5 < VAR_6; VAR_5++) {
  *++VAR_4 = FUNC_4(VAR_2, VAR_5, 0, FUNC_5(VAR_5),
        VAR_0);
  if (FUNC_1(VAR_2, *VAR_4))
   goto unwind;
 }
 return 0;

unwind:
 while (VAR_5-- > VAR_7->frags)
  FUNC_2(VAR_2, *--VAR_4, FUNC_5(VAR_5), VAR_0);

 FUNC_3(VAR_2, VAR_4[-1], FUNC_6(VAR_3), VAR_0);
out_err:
 return -VAR_1;
}
