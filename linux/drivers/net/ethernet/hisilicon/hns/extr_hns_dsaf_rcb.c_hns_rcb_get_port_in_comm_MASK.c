
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcb_common_cb {int max_q_per_vf; int max_vfn; } ;



__attribute__((used)) static int FUNC_0(
 struct rcb_common_cb *VAR_0, int VAR_1)
{
 return VAR_1 / (VAR_0->max_q_per_vf * VAR_0->max_vfn);
}
