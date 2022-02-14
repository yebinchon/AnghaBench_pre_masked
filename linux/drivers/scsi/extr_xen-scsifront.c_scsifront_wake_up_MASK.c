
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsifrnt_info {int wq_sync; scalar_t__ wait_ring_available; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vscsifrnt_info *VAR_0)
{
 VAR_0->wait_ring_available = 0;
 FUNC_0(&VAR_0->wq_sync);
}
