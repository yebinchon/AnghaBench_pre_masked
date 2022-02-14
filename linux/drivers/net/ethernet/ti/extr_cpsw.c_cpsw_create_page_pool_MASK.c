
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_pool_params {int pool_size; int dev; int dma_dir; int nid; int flags; scalar_t__ order; } ;
struct page_pool {int dummy; } ;
struct cpsw_common {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page_pool*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct page_pool* FUNC_2 (struct page_pool_params*) ;

__attribute__((used)) static struct page_pool *FUNC_3(struct cpsw_common *VAR_3,
            int VAR_4)
{
 struct page_pool_params VAR_5;
 struct page_pool *VAR_6;

 VAR_5.order = 0;
 VAR_5.flags = VAR_2;
 VAR_5.pool_size = VAR_4;
 VAR_5.nid = VAR_1;
 VAR_5.dma_dir = VAR_0;
 VAR_5.dev = VAR_3->dev;

 VAR_6 = FUNC_2(&VAR_5);
 if (FUNC_0(VAR_6))
  FUNC_1(VAR_3->dev, "cannot create rx page pool\n");

 return VAR_6;
}
