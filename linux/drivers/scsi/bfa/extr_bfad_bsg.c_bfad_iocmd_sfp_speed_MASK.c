
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_bsg_sfp_speed_s {scalar_t__ status; int speed; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct bfad_hal_comp*) ;
 int FUNC_2 (struct bfad_s*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_sfp_speed_s *VAR_4 = (struct bfa_bsg_sfp_speed_s *)VAR_3;
 struct bfad_hal_comp VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_5.comp);
 FUNC_4(&VAR_2->bfad_lock, VAR_6);
 VAR_4->status = FUNC_1(FUNC_0(&VAR_2->bfa), VAR_4->speed,
    VAR_1, &VAR_5);
 FUNC_5(&VAR_2->bfad_lock, VAR_6);
 FUNC_2(VAR_2, VAR_4->status);
 if (VAR_4->status != VAR_0)
  goto out;
 FUNC_6(&VAR_5.comp);
 VAR_4->status = VAR_5.status;
out:
 return 0;
}
