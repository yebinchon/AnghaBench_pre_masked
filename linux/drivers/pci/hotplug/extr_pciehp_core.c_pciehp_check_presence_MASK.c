
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {scalar_t__ state; int reset_lock; int state_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct controller*) ;
 int FUNC_4 (struct controller*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct controller *VAR_5)
{
 bool VAR_6;

 FUNC_0(&VAR_5->reset_lock);
 FUNC_1(&VAR_5->state_lock);

 VAR_6 = FUNC_3(VAR_5);
 if ((VAR_6 && (VAR_5->state == VAR_2 ||
     VAR_5->state == VAR_1)) ||
     (!VAR_6 && (VAR_5->state == VAR_3 ||
      VAR_5->state == VAR_0)))
  FUNC_4(VAR_5, VAR_4);

 FUNC_2(&VAR_5->state_lock);
 FUNC_5(&VAR_5->reset_lock);
}
