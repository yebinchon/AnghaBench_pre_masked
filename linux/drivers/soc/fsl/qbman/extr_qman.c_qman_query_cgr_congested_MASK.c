
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qman_cgr {int dummy; } ;
struct TYPE_2__ {int cs; } ;
struct qm_mcr_querycgr {TYPE_1__ cgr; } ;


 int FUNC_0 (struct qman_cgr*,struct qm_mcr_querycgr*) ;

int FUNC_1(struct qman_cgr *VAR_0, bool *VAR_1)
{
 struct qm_mcr_querycgr VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 *VAR_1 = !!VAR_2.cgr.cs;
 return 0;
}
