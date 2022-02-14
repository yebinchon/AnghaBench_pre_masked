
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct page {int dummy; } ;
struct bnx2_sw_pg {struct page* page; } ;
struct bnx2_rx_ring_info {struct bnx2_sw_pg* rx_pg_ring; } ;
struct bnx2 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct bnx2_sw_pg*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_3, struct bnx2_rx_ring_info *VAR_4, u16 VAR_5)
{
 struct bnx2_sw_pg *VAR_6 = &VAR_4->rx_pg_ring[VAR_5];
 struct page *VAR_7 = VAR_6->page;

 if (!VAR_7)
  return;

 FUNC_2(&VAR_3->pdev->dev, FUNC_1(VAR_6, VAR_2),
         VAR_0, VAR_1);

 FUNC_0(VAR_7);
 VAR_6->page = ((void*)0);
}
