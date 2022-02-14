
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int cfg_flags; int dim_timer; int run_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5(struct bnad *VAR_5)
{
 if (VAR_5->cfg_flags & VAR_0 &&
     !FUNC_3(VAR_2, &VAR_5->run_flags)) {
  FUNC_4(&VAR_5->dim_timer, VAR_3, 0);
  FUNC_2(VAR_2, &VAR_5->run_flags);
  FUNC_0(&VAR_5->dim_timer,
     VAR_4 + FUNC_1(VAR_1));
 }
}
