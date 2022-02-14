
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct TYPE_2__ {scalar_t__ dqb_rsvspace; scalar_t__ dqb_curspace; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_btime; } ;
struct dquot {int dq_flags; TYPE_1__ dq_dqb; } ;
typedef scalar_t__ qsize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline
void FUNC_2(struct dquot *VAR_1, qsize_t VAR_2)
{
 if (VAR_1->dq_dqb.dqb_rsvspace >= VAR_2)
  VAR_1->dq_dqb.dqb_rsvspace -= VAR_2;
 else {
  FUNC_0(1);
  VAR_1->dq_dqb.dqb_rsvspace = 0;
 }
 if (VAR_1->dq_dqb.dqb_curspace + VAR_1->dq_dqb.dqb_rsvspace <=
     VAR_1->dq_dqb.dqb_bsoftlimit)
  VAR_1->dq_dqb.dqb_btime = (time64_t) 0;
 FUNC_1(VAR_0, &VAR_1->dq_flags);
}
