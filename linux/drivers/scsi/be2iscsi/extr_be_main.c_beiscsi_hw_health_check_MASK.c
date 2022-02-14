
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int function; } ;
struct beiscsi_hba {TYPE_1__ hw_check; int state; int sess_work; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct beiscsi_hba*) ;
 int VAR_3 ;
 struct beiscsi_hba* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 struct beiscsi_hba* VAR_6 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct beiscsi_hba *VAR_8 = FUNC_2(VAR_8, VAR_7, VAR_4);

 FUNC_1(VAR_8);
 if (FUNC_1(VAR_8)) {
  FUNC_0(VAR_8, VAR_2,
         "BM_%d : port in error: %lx\n", VAR_8->state);

  FUNC_5(VAR_8->wq, &VAR_8->sess_work);


  if (!FUNC_6(VAR_0, &VAR_8->state))
   return;

  VAR_8->hw_check.function = VAR_3;
 }

 FUNC_3(&VAR_8->hw_check,
    VAR_5 + FUNC_4(VAR_1));
}
