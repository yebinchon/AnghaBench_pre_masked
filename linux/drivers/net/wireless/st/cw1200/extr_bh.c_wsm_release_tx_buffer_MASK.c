
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input_buffers; } ;
struct cw1200_common {int hw_bufs_used; int bh_evt_wq; TYPE_1__ wsm_caps; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct cw1200_common *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = VAR_0->hw_bufs_used;

 VAR_0->hw_bufs_used -= VAR_1;
 if (FUNC_0(VAR_0->hw_bufs_used < 0))
  VAR_2 = -1;
 else if (VAR_3 >= VAR_0->wsm_caps.input_buffers)
  VAR_2 = 1;
 if (!VAR_0->hw_bufs_used)
  FUNC_1(&VAR_0->bh_evt_wq);
 return VAR_2;
}
