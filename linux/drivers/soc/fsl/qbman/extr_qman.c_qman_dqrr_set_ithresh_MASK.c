
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int ithresh; } ;
struct TYPE_4__ {TYPE_1__ dqrr; } ;
struct qman_portal {TYPE_2__ p; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

int FUNC_1(struct qman_portal *VAR_1, u8 VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_1->p, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->p.dqrr.ithresh = VAR_2;

 return 0;
}
