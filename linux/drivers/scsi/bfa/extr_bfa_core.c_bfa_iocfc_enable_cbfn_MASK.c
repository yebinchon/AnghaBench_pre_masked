
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int iocfc; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_3, enum bfa_status VAR_4)
{
 struct bfa_s *VAR_5 = VAR_3;

 if (VAR_4 == VAR_0)
  FUNC_0(&VAR_5->iocfc, VAR_1);
 else
  FUNC_0(&VAR_5->iocfc, VAR_2);
}
