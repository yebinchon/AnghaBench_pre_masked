
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qbman_swp {TYPE_1__* desc; } ;
struct TYPE_2__ {int qman_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct qbman_swp*,int ) ;

void *FUNC_1(struct qbman_swp *VAR_4)
{
 if ((VAR_4->desc->qman_version & VAR_3) < VAR_2)
  return FUNC_0(VAR_4, VAR_0);
 else
  return FUNC_0(VAR_4, VAR_1);
}
