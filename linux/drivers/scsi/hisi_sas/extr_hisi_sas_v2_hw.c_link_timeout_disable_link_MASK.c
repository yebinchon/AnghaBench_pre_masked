
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
 int VAR_1 ;
 struct hisi_hba* FUNC_1 (int ,struct timer_list*,int ) ;
 struct hisi_hba* VAR_2 ;
 int FUNC_2 (struct hisi_hba*,int,int ,int) ;
 int FUNC_3 (struct hisi_hba*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{
 struct hisi_hba *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 int VAR_8, VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_7->n_phy && VAR_9; VAR_8++) {
  if (VAR_7->reject_stp_links_msk & FUNC_0(VAR_8))
   continue;

  if (VAR_9 & FUNC_0(VAR_8)) {
   FUNC_2(VAR_7, VAR_8,
     VAR_0, 0x6);
   break;
  }
 }

 VAR_7->timer.function = VAR_4;
 FUNC_4(&VAR_7->timer, VAR_3 + FUNC_5(100));
}
