
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_bsg_gen_s {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bfad_s*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct bfad_s *VAR_6, void *VAR_7, unsigned int VAR_8)
{
 struct bfa_bsg_gen_s *VAR_9 = (struct bfa_bsg_gen_s *)VAR_7;
 unsigned long VAR_10;

 FUNC_3(&VAR_6->bfad_lock, VAR_10);
 if (VAR_8 == VAR_5) {
  VAR_9->status = FUNC_1(&VAR_6->bfa, VAR_2);

  if (VAR_9->status == VAR_1)
   FUNC_2(VAR_6, VAR_2);
 } else if (VAR_8 == VAR_4) {
  VAR_9->status = FUNC_1(&VAR_6->bfa, VAR_0);

  if (VAR_9->status == VAR_1)
   FUNC_2(VAR_6, VAR_0);
 } else if (VAR_8 == VAR_3)
  VAR_9->status = FUNC_0(&VAR_6->bfa);
 FUNC_4(&VAR_6->bfad_lock, VAR_10);
 return 0;
}
