
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hisi_hba {int n_phy; } ;


 int VAR_0 ;
 struct hisi_hba* FUNC_0 (int ,struct timer_list*,int ) ;
 struct hisi_hba* VAR_1 ;
 int FUNC_1 (struct hisi_hba*,int,int) ;
 int FUNC_2 (struct hisi_hba*,int,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct hisi_hba *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_phy; VAR_5++) {
  FUNC_2(VAR_4, VAR_5, VAR_0, 0x12a);
  FUNC_1(VAR_4, VAR_5, 1);
 }
}
