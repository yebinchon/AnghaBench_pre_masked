
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_flags; int im; } ;
struct bfa_fcs_itnim_s {int dummy; } ;
struct bfad_itnim_s {int itnim_work; int state; struct bfa_fcs_itnim_s fcs_itnim; int im; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct bfad_itnim_s* FUNC_1 (int,int ) ;

int
FUNC_2(struct bfad_s *VAR_5, struct bfa_fcs_itnim_s **VAR_6,
      struct bfad_itnim_s **VAR_7)
{
 *VAR_7 = FUNC_1(sizeof(struct bfad_itnim_s), VAR_2);
 if (*VAR_7 == ((void*)0))
  return -VAR_1;

 (*VAR_7)->im = VAR_5->im;
 *VAR_6 = &(*VAR_7)->fcs_itnim;
 (*VAR_7)->state = VAR_3;




 FUNC_0(&(*VAR_7)->itnim_work, VAR_4);
 VAR_5->bfad_flags |= VAR_0;
 return 0;
}
