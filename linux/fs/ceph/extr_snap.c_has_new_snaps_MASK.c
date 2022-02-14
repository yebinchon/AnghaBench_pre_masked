
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_context {scalar_t__ num_snaps; scalar_t__* snaps; scalar_t__ seq; } ;



__attribute__((used)) static bool FUNC_0(struct ceph_snap_context *VAR_0,
     struct ceph_snap_context *VAR_1)
{
 if (VAR_1->num_snaps == 0)
  return 0;

 return VAR_1->snaps[0] > VAR_0->seq;
}
