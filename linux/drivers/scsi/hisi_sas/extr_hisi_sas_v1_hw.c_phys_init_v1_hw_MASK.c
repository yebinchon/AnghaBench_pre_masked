
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hisi_hba {int n_phy; struct timer_list timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (struct hisi_hba*,int,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct timer_list*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (struct timer_list*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_4)
{
 int VAR_5;
 struct timer_list *VAR_6 = &VAR_4->timer;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_phy; VAR_5++) {
  FUNC_1(VAR_4, VAR_5, VAR_0, 0x6a);
  FUNC_0(VAR_4, VAR_5, VAR_0);
 }

 FUNC_3(VAR_6, VAR_3, 0);
 FUNC_2(VAR_6, VAR_2 + VAR_1);
}
