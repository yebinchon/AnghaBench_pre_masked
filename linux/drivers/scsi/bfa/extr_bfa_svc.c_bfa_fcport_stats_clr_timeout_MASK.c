
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcport_s {int stats_status; scalar_t__ stats_qfull; int stats_reqq_wait; int bfa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_fcport_s*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct bfa_fcport_s *VAR_4 = (struct bfa_fcport_s *) VAR_3;

 FUNC_2(VAR_4->bfa, VAR_4->stats_qfull);

 if (VAR_4->stats_qfull) {
  FUNC_1(&VAR_4->stats_reqq_wait);
  VAR_4->stats_qfull = VAR_0;
 }

 VAR_4->stats_status = VAR_1;
 FUNC_0(VAR_4, VAR_2);
}
