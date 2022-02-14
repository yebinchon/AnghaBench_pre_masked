
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int event; int t2_timer; struct gsm_dlci** dlci; } ;
struct gsm_dlci {scalar_t__ state; } ;
struct gsm_control {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct gsm_control* FUNC_1 (struct gsm_mux*,int ,int *,int ) ;
 int FUNC_2 (struct gsm_mux*,struct gsm_control*) ;
 int FUNC_3 (struct gsm_dlci*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct gsm_mux *VAR_4)
{
 struct gsm_dlci *VAR_5 = VAR_4->dlci[0];
 struct gsm_control *VAR_6;

 if (!VAR_5)
  return 0;



 VAR_6 = FUNC_1(VAR_4, VAR_0, ((void*)0), 0);
 if (VAR_6)
  FUNC_2(VAR_4, VAR_6);

 FUNC_0(&VAR_4->t2_timer);


 FUNC_3(VAR_5);
 FUNC_5(VAR_4->event,
    VAR_5->state == VAR_1);

 if (FUNC_4(VAR_3))
  return -VAR_2;

 return 0;
}
