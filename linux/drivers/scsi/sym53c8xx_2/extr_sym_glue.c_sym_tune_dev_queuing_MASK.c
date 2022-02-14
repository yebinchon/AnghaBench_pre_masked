
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct sym_tcb {TYPE_1__* starget; } ;
struct TYPE_4__ {scalar_t__ reqtags; scalar_t__ scdev_depth; } ;
struct sym_lcb {TYPE_2__ s; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,scalar_t__) ;
 struct sym_lcb* FUNC_1 (struct sym_tcb*,int) ;

__attribute__((used)) static void FUNC_2(struct sym_tcb *VAR_0, int VAR_1, u_short VAR_2)
{
 struct sym_lcb *VAR_3 = FUNC_1(VAR_0, VAR_1);
 u_short VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = VAR_3->s.reqtags;

 if (VAR_2 > VAR_3->s.scdev_depth)
  VAR_2 = VAR_3->s.scdev_depth;

 VAR_3->s.reqtags = VAR_2;

 if (VAR_2 != VAR_4) {
  FUNC_0(&VAR_0->starget->dev,
           "tagged command queuing %s, command queue depth %d.\n",
            VAR_3->s.reqtags ? "enabled" : "disabled", VAR_2);
 }
}
