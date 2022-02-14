
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct be_rx_page_info {int page; } ;
struct be_rx_obj {int dummy; } ;
struct be_rx_compl_info {scalar_t__ num_rcvd; } ;


 struct be_rx_page_info* FUNC_0 (struct be_rx_obj*) ;
 int FUNC_1 (struct be_rx_page_info*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct be_rx_obj *VAR_0,
    struct be_rx_compl_info *VAR_1)
{
 struct be_rx_page_info *VAR_2;
 u16 VAR_3, VAR_4 = VAR_1->num_rcvd;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0);
  FUNC_2(VAR_2->page);
  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 }
}
