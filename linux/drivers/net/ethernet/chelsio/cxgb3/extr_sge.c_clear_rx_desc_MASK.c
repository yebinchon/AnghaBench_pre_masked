
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_fl {int buf_size; int alloc_size; scalar_t__ use_pages; } ;
struct TYPE_2__ {int * page; int mapping; int * p_cnt; } ;
struct rx_sw_desc {int * skb; TYPE_1__ pg_chunk; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rx_sw_desc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2, const struct sge_fl *VAR_3,
     struct rx_sw_desc *VAR_4)
{
 if (VAR_3->use_pages && VAR_4->pg_chunk.page) {
  (*VAR_4->pg_chunk.p_cnt)--;
  if (!*VAR_4->pg_chunk.p_cnt)
   FUNC_2(VAR_2,
           VAR_4->pg_chunk.mapping,
           VAR_3->alloc_size, VAR_0);

  FUNC_4(VAR_4->pg_chunk.page);
  VAR_4->pg_chunk.page = ((void*)0);
 } else {
  FUNC_3(VAR_2, FUNC_0(VAR_4, VAR_1),
     VAR_3->buf_size, VAR_0);
  FUNC_1(VAR_4->skb);
  VAR_4->skb = ((void*)0);
 }
}
