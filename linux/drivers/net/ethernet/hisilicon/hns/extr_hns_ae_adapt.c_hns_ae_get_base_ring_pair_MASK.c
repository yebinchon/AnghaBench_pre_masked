
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_pair_cb {int dummy; } ;
struct rcb_common_cb {int max_q_per_vf; int max_vfn; struct ring_pair_cb* ring_pair_cb; } ;
struct dsaf_device {struct rcb_common_cb** rcb_common; } ;



__attribute__((used)) static struct ring_pair_cb *FUNC_0(
 struct dsaf_device *VAR_0, int VAR_1)
{
 struct rcb_common_cb *VAR_2 = VAR_0->rcb_common[0];
 int VAR_3 = VAR_2->max_q_per_vf;
 int VAR_4 = VAR_2->max_vfn;

 return &VAR_2->ring_pair_cb[VAR_1 * VAR_3 * VAR_4];
}
