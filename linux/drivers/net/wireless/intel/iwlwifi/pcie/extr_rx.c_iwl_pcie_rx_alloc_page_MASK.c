
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iwl_trans_pcie {scalar_t__ rx_page_order; } ;
struct iwl_trans {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*,char*,scalar_t__) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static struct page *FUNC_5(struct iwl_trans *VAR_2,
        gfp_t VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_2(VAR_2);
 struct page *VAR_5;
 gfp_t VAR_6 = VAR_3;

 if (VAR_4->rx_page_order > 0)
  VAR_6 |= VAR_0;


 VAR_5 = FUNC_3(VAR_6, VAR_4->rx_page_order);
 if (!VAR_5) {
  if (FUNC_4())
   FUNC_1(VAR_2, "alloc_pages failed, order: %d\n",
           VAR_4->rx_page_order);




  if (!(VAR_6 & VAR_1) && FUNC_4())
   FUNC_0(VAR_2,
     "Failed to alloc_pages\n");
  return ((void*)0);
 }
 return VAR_5;
}
