
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dqb_curspace; scalar_t__ dqb_rsvspace; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_bhardlimit; } ;
struct dquot {TYPE_1__ dq_dqb; int dq_flags; } ;
typedef scalar_t__ qsize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct dquot *VAR_4, qsize_t VAR_5)
{
 qsize_t VAR_6;

 VAR_6 = VAR_4->dq_dqb.dqb_curspace + VAR_4->dq_dqb.dqb_rsvspace;

 if (FUNC_0(VAR_0, &VAR_4->dq_flags) ||
     VAR_6 <= VAR_4->dq_dqb.dqb_bsoftlimit)
  return VAR_3;

 if (VAR_6 - VAR_5 <= VAR_4->dq_dqb.dqb_bsoftlimit)
  return VAR_2;
 if (VAR_6 >= VAR_4->dq_dqb.dqb_bhardlimit &&
     VAR_6 - VAR_5 < VAR_4->dq_dqb.dqb_bhardlimit)
  return VAR_1;
 return VAR_3;
}
