
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct atl1e_rx_page_desc {size_t rx_using; struct atl1e_rx_page* rx_page; } ;
struct atl1e_rx_page {int dummy; } ;
struct TYPE_2__ {scalar_t__ rx_page_desc; } ;
struct atl1e_adapter {TYPE_1__ rx_ring; } ;



__attribute__((used)) static struct atl1e_rx_page *FUNC_0(struct atl1e_adapter *VAR_0,
            u8 VAR_1)
{
 struct atl1e_rx_page_desc *VAR_2 =
  (struct atl1e_rx_page_desc *) VAR_0->rx_ring.rx_page_desc;
 u8 VAR_3 = VAR_2[VAR_1].rx_using;

 return &(VAR_2[VAR_1].rx_page[VAR_3]);
}
