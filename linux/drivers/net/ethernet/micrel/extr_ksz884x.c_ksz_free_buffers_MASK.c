
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_dma_buf {scalar_t__ skb; } ;
struct ksz_desc_info {int alloc; struct ksz_desc* ring; } ;
struct ksz_desc {int dummy; } ;
struct dev_info {int dummy; } ;


 struct ksz_dma_buf* FUNC_0 (struct ksz_desc*) ;
 int FUNC_1 (struct dev_info*,struct ksz_dma_buf*,int) ;

__attribute__((used)) static void FUNC_2(struct dev_info *VAR_0,
 struct ksz_desc_info *VAR_1, int VAR_2)
{
 int VAR_3;
 struct ksz_dma_buf *VAR_4;
 struct ksz_desc *VAR_5 = VAR_1->ring;

 for (VAR_3 = 0; VAR_3 < VAR_1->alloc; VAR_3++) {
  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4->skb)
   FUNC_1(VAR_0, VAR_4, VAR_2);
  VAR_5++;
 }
}
