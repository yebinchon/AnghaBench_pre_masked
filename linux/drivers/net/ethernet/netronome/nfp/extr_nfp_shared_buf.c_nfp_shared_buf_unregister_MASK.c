
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_pf {unsigned int num_shared_bufs; TYPE_1__* shared_bufs; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct devlink*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 struct devlink* FUNC_3 (struct nfp_pf*) ;

void FUNC_4(struct nfp_pf *VAR_0)
{
 struct devlink *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_shared_bufs; VAR_2++)
  FUNC_0(VAR_1,
          FUNC_2(VAR_0->shared_bufs[VAR_2].id));
 FUNC_1(VAR_0->shared_bufs);
}
