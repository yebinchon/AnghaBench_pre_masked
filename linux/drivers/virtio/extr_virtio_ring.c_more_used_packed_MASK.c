
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used_wrap_counter; } ;
struct vring_virtqueue {TYPE_1__ packed; int last_used_idx; } ;


 int FUNC_0 (struct vring_virtqueue const*,int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct vring_virtqueue *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->last_used_idx,
   VAR_0->packed.used_wrap_counter);
}
