
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int num; int signalled_used_valid; int log_used; unsigned long long log_addr; int * iotlb; int * umem; scalar_t__ busyloop_timeout; int * log_ctx; int * call_ctx; int * kick; int * error_ctx; int * log_base; scalar_t__ acked_backend_features; scalar_t__ acked_features; int * private_data; scalar_t__ used_flags; scalar_t__ signalled_used; scalar_t__ last_used_idx; scalar_t__ avail_idx; scalar_t__ last_avail_idx; int * used; int * avail; int * desc; } ;
struct vhost_dev {int dummy; } ;


 int FUNC_0 (struct vhost_virtqueue*) ;
 int FUNC_1 (struct vhost_virtqueue*) ;
 int FUNC_2 (struct vhost_virtqueue*) ;

__attribute__((used)) static void FUNC_3(struct vhost_dev *VAR_0,
      struct vhost_virtqueue *VAR_1)
{
 VAR_1->num = 1;
 VAR_1->desc = ((void*)0);
 VAR_1->avail = ((void*)0);
 VAR_1->used = ((void*)0);
 VAR_1->last_avail_idx = 0;
 VAR_1->avail_idx = 0;
 VAR_1->last_used_idx = 0;
 VAR_1->signalled_used = 0;
 VAR_1->signalled_used_valid = 0;
 VAR_1->used_flags = 0;
 VAR_1->log_used = 0;
 VAR_1->log_addr = -1ull;
 VAR_1->private_data = ((void*)0);
 VAR_1->acked_features = 0;
 VAR_1->acked_backend_features = 0;
 VAR_1->log_base = ((void*)0);
 VAR_1->error_ctx = ((void*)0);
 VAR_1->kick = ((void*)0);
 VAR_1->call_ctx = ((void*)0);
 VAR_1->log_ctx = ((void*)0);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_1->busyloop_timeout = 0;
 VAR_1->umem = ((void*)0);
 VAR_1->iotlb = ((void*)0);
 FUNC_0(VAR_1);
}
