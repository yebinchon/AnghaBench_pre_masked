
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int hal_tmo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(struct bfad_s *VAR_3)
{
 FUNC_2(&VAR_3->hal_tmo, VAR_1, 0);

 FUNC_0(&VAR_3->hal_tmo,
    VAR_2 + FUNC_1(VAR_0));
}
