
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_snap_context {scalar_t__ seq; } ;


 int FUNC_0 (struct ceph_snap_context*) ;
 struct ceph_snap_context* FUNC_1 (struct inode*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0,
        struct ceph_snap_context *VAR_1)
{
 struct ceph_snap_context *VAR_2 = FUNC_1(VAR_0, ((void*)0), ((void*)0));
 int VAR_3 = !VAR_2 || VAR_1->seq <= VAR_2->seq;

 FUNC_0(VAR_2);
 return VAR_3;
}
