
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
struct aq_rxpage {unsigned int order; scalar_t__ pg_off; int daddr; struct page* page; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct page*,unsigned int) ;
 struct page* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,struct page*,int ,unsigned int,int ) ;
 int FUNC_3 (struct device*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct aq_rxpage *VAR_3, unsigned int VAR_4,
    struct device *VAR_5)
{
 struct page *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8 = -VAR_1;

 VAR_6 = FUNC_1(VAR_4);
 if (FUNC_4(!VAR_6))
  goto err_exit;

 VAR_7 = FUNC_2(VAR_5, VAR_6, 0, VAR_2 << VAR_4,
        VAR_0);

 if (FUNC_4(FUNC_3(VAR_5, VAR_7)))
  goto free_page;

 VAR_3->page = VAR_6;
 VAR_3->daddr = VAR_7;
 VAR_3->order = VAR_4;
 VAR_3->pg_off = 0;

 return 0;

free_page:
 FUNC_0(VAR_6, VAR_4);

err_exit:
 return VAR_8;
}
