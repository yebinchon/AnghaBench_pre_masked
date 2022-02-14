
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_list {int dummy; } ;
struct beiscsi_hba {scalar_t__ ue2rp; int recover_port; int wq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 struct beiscsi_hba* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 struct beiscsi_hba* VAR_2 ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct beiscsi_hba *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_1);
 u32 VAR_5;


 if (!FUNC_0(VAR_4))
  return;


 VAR_5 = 4000;
 if (VAR_4->ue2rp > VAR_0)
  VAR_5 = VAR_4->ue2rp - VAR_0;
 FUNC_3(VAR_4->wq, &VAR_4->recover_port,
      FUNC_2(VAR_5));
}
