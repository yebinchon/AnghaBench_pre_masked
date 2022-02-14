
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* res_buf; TYPE_2__* req_buf; } ;
struct fjes_hw {int max_epid; int my_epid; TYPE_2__* ep_shm_info; TYPE_1__ hw_info; } ;
struct TYPE_4__ {int rx; int tx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fjes_hw*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct fjes_hw *VAR_0)
{
 int VAR_1;

 if (!VAR_0->ep_shm_info)
  return;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0->hw_info.req_buf);
 VAR_0->hw_info.req_buf = ((void*)0);

 FUNC_2(VAR_0->hw_info.res_buf);
 VAR_0->hw_info.res_buf = ((void*)0);

 for (VAR_1 = 0; VAR_1 < VAR_0->max_epid ; VAR_1++) {
  if (VAR_1 == VAR_0->my_epid)
   continue;
  FUNC_0(&VAR_0->ep_shm_info[VAR_1].tx);
  FUNC_0(&VAR_0->ep_shm_info[VAR_1].rx);
 }

 FUNC_2(VAR_0->ep_shm_info);
 VAR_0->ep_shm_info = ((void*)0);
}
