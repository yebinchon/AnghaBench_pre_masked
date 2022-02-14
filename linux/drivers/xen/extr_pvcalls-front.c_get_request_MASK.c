
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_1__* rsp; TYPE_2__ ring; } ;
struct TYPE_4__ {scalar_t__ req_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_2(struct pvcalls_bedata *VAR_2, int *VAR_3)
{
 *VAR_3 = VAR_2->ring.req_prod_pvt & (FUNC_1(&VAR_2->ring) - 1);
 if (FUNC_0(&VAR_2->ring) ||
     VAR_2->rsp[*VAR_3].req_id != VAR_1)
  return -VAR_0;
 return 0;
}
