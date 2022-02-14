
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {unsigned long long acked_backend_features; } ;



__attribute__((used)) static inline bool FUNC_0(struct vhost_virtqueue *VAR_0, int VAR_1)
{
 return VAR_0->acked_backend_features & (1ULL << VAR_1);
}
