
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bfa_s {int dummy; } ;
struct bfa_fcpim_s {int path_tov; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;

u16
FUNC_1(struct bfa_s *VAR_0)
{
 struct bfa_fcpim_s *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->path_tov / 1000;
}
