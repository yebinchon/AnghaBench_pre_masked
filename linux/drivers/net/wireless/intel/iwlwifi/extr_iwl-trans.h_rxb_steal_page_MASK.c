
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iwl_rx_cmd_buffer {int _page_stolen; struct page* _page; } ;


 int FUNC_0 (struct page*) ;

__attribute__((used)) static inline struct page *FUNC_1(struct iwl_rx_cmd_buffer *VAR_0)
{
 VAR_0->_page_stolen = 1;
 FUNC_0(VAR_0->_page);
 return VAR_0->_page;
}
