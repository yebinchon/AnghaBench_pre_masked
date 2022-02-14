
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct be_rx_page_info {int last_frag; int page; } ;
struct be_queue_info {size_t tail; int used; } ;
struct be_rx_obj {struct be_rx_page_info* page_info_tbl; struct be_queue_info q; struct be_adapter* adapter; } ;
struct be_adapter {TYPE_1__* pdev; int big_page_size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct be_rx_page_info*,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct be_queue_info*) ;
 int VAR_2 ;

__attribute__((used)) static struct be_rx_page_info *FUNC_6(struct be_rx_obj *VAR_3)
{
 struct be_adapter *VAR_4 = VAR_3->adapter;
 struct be_rx_page_info *VAR_5;
 struct be_queue_info *VAR_6 = &VAR_3->q;
 u32 VAR_7 = VAR_6->tail;

 VAR_5 = &VAR_3->page_info_tbl[VAR_7];
 FUNC_0(!VAR_5->page);

 if (VAR_5->last_frag) {
  FUNC_4(&VAR_4->pdev->dev,
          FUNC_3(VAR_5, VAR_1),
          VAR_4->big_page_size, VAR_0);
  VAR_5->last_frag = 0;
 } else {
  FUNC_2(&VAR_4->pdev->dev,
     FUNC_3(VAR_5, VAR_1),
     VAR_2, VAR_0);
 }

 FUNC_5(VAR_6);
 FUNC_1(&VAR_6->used);
 return VAR_5;
}
