
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vscsifrnt_info {int wq_sync; TYPE_1__* host; scalar_t__ wait_ring_available; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (struct vscsifrnt_info*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vscsifrnt_info *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_1(VAR_0->host->host_lock, VAR_2);

 VAR_1 = FUNC_0(VAR_0);

 VAR_0->wait_ring_available = 0;

 FUNC_2(VAR_0->host->host_lock, VAR_2);

 FUNC_3(&VAR_0->wq_sync);

 return VAR_1;
}
