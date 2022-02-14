
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int desc_count; unsigned int desc_avail; } ;
struct vnic_rq {TYPE_1__ ring; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct vnic_rq *VAR_0)
{

 return VAR_0->ring.desc_count - VAR_0->ring.desc_avail - 1;
}
