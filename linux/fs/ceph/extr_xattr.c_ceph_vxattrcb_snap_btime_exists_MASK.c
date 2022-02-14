
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct ceph_inode_info {TYPE_1__ i_snap_btime; } ;



__attribute__((used)) static bool FUNC_0(struct ceph_inode_info *VAR_0)
{
 return (VAR_0->i_snap_btime.tv_sec != 0 || VAR_0->i_snap_btime.tv_nsec != 0);
}
