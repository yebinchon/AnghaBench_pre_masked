
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_itnim_s {int io_q; int pending_q; } ;
struct bfa_ioim_s {int qe; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioim_s*) ;
 int FUNC_1 (struct bfa_itnim_s*,int ) ;
 int FUNC_2 (struct bfa_itnim_s*) ;
 int FUNC_3 (int *,struct bfa_ioim_s**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bfa_itnim_s *VAR_1)
{
 struct bfa_ioim_s *VAR_2;

 FUNC_2(VAR_1);




 FUNC_1(VAR_1, VAR_0);




 while (!FUNC_5(&VAR_1->pending_q)) {
  FUNC_3(&VAR_1->pending_q, &VAR_2);
  FUNC_4(&VAR_2->qe, &VAR_1->io_q);
  FUNC_0(VAR_2);
 }
}
