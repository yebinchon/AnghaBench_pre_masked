
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {scalar_t__ packed_ring; } ;


 int FUNC_0 (struct vring_virtqueue const*) ;
 int FUNC_1 (struct vring_virtqueue const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct vring_virtqueue *VAR_0)
{
 return VAR_0->packed_ring ? FUNC_0(VAR_0) : FUNC_1(VAR_0);
}
