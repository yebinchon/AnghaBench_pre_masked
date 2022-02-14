
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_rport_s {int stats; void* rport_drv; struct bfa_s* bfa; } ;


 int FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct bfa_rport_s* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct bfa_rport_s*,int ) ;
 int FUNC_4 (struct bfa_rport_s*,int ) ;
 int FUNC_5 (int *,int ,int) ;

struct bfa_rport_s *
FUNC_6(struct bfa_s *VAR_2, void *VAR_3)
{
 struct bfa_rport_s *VAR_4;

 VAR_4 = FUNC_2(FUNC_0(VAR_2));

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->bfa = VAR_2;
 VAR_4->rport_drv = VAR_3;
 FUNC_5(&VAR_4->stats, 0, sizeof(VAR_4->stats));

 FUNC_1(!FUNC_3(VAR_4, VAR_1));
 FUNC_4(VAR_4, VAR_0);

 return VAR_4;
}
