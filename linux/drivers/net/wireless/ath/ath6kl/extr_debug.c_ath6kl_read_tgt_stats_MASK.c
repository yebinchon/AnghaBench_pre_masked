
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int flags; } ;
struct ath6kl {int sem; int event_wq; int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (int ,int,int ) ;

int FUNC_6(struct ath6kl *VAR_5, struct ath6kl_vif *VAR_6)
{
 long VAR_7;

 if (FUNC_1(&VAR_5->sem))
  return -VAR_0;

 FUNC_2(VAR_3, &VAR_6->flags);

 if (FUNC_0(VAR_5->wmi, 0)) {
  FUNC_4(&VAR_5->sem);
  return -VAR_1;
 }

 VAR_7 = FUNC_5(VAR_5->event_wq,
      !FUNC_3(VAR_3,
      &VAR_6->flags), VAR_4);

 FUNC_4(&VAR_5->sem);

 if (VAR_7 <= 0)
  return -VAR_2;

 return 0;
}
