
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int function; } ;
struct hisi_hba {int n_phy; int reject_stp_links_msk; TYPE_1__ timer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct hisi_hba* FUNC_1 (int ,struct timer_list*,int ) ;
 struct hisi_hba* VAR_1 ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct hisi_hba*,int,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct hisi_hba *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6->n_phy; VAR_7++) {
  if (VAR_6->reject_stp_links_msk & FUNC_0(VAR_7))
   continue;

  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_0);
  if (!(VAR_8 & FUNC_0(0))) {
   FUNC_3(VAR_6, VAR_7,
     VAR_0, 0x7);
   break;
  }
 }

 VAR_6->timer.function = VAR_3;
 FUNC_4(&VAR_6->timer, VAR_2 + FUNC_5(900));
}
