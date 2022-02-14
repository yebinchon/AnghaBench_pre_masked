
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_driver_info_s {int dummy; } ;
struct bfa_fcs_s {int fabric; struct bfa_fcs_driver_info_s driver_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct bfa_fcs_s *VAR_0,
   struct bfa_fcs_driver_info_s *VAR_1)
{

 VAR_0->driver_info = *VAR_1;

 FUNC_1(&VAR_0->fabric);
 FUNC_0(&VAR_0->fabric);
}
