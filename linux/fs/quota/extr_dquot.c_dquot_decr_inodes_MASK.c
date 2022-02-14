
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct TYPE_3__ {scalar_t__ dqb_curinodes; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_itime; } ;
struct dquot {int dq_flags; TYPE_1__ dq_dqb; int dq_sb; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dquot *VAR_2, qsize_t VAR_3)
{
 if (FUNC_1(VAR_2->dq_sb)->flags & VAR_0 ||
     VAR_2->dq_dqb.dqb_curinodes >= VAR_3)
  VAR_2->dq_dqb.dqb_curinodes -= VAR_3;
 else
  VAR_2->dq_dqb.dqb_curinodes = 0;
 if (VAR_2->dq_dqb.dqb_curinodes <= VAR_2->dq_dqb.dqb_isoftlimit)
  VAR_2->dq_dqb.dqb_itime = (time64_t) 0;
 FUNC_0(VAR_1, &VAR_2->dq_flags);
}
