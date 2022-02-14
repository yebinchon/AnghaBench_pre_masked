
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_rx_page_info {int page; } ;
struct be_queue_info {scalar_t__ head; scalar_t__ tail; int used; } ;
struct be_rx_obj {struct be_queue_info q; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 struct be_rx_page_info* FUNC_2 (struct be_rx_obj*) ;
 int FUNC_3 (struct be_rx_page_info*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct be_rx_obj *VAR_0)
{
 struct be_queue_info *VAR_1 = &VAR_0->q;
 struct be_rx_page_info *VAR_2;

 while (FUNC_1(&VAR_1->used) > 0) {
  VAR_2 = FUNC_2(VAR_0);
  FUNC_4(VAR_2->page);
  FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 }
 FUNC_0(FUNC_1(&VAR_1->used));
 VAR_1->tail = 0;
 VAR_1->head = 0;
}
