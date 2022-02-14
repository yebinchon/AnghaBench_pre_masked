
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_pi_tuple {int dummy; } ;
struct nvme_ns {int ms; scalar_t__ pi_type; } ;



__attribute__((used)) static inline bool FUNC_0(struct nvme_ns *VAR_0)
{
 return VAR_0->pi_type && VAR_0->ms == sizeof(struct t10_pi_tuple);
}
