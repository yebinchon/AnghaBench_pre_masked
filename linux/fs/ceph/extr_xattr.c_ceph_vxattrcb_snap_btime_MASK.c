
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct ceph_inode_info {TYPE_1__ i_snap_btime; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,size_t,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct ceph_inode_info *VAR_0, char *VAR_1,
     size_t VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, "%lld.%09ld", VAR_0->i_snap_btime.tv_sec,
    VAR_0->i_snap_btime.tv_nsec);
}
