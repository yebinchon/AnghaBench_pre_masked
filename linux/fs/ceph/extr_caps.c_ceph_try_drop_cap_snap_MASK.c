
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_inode_info {int i_ceph_flags; int i_cap_snaps; } ;
struct TYPE_2__ {scalar_t__ tid; } ;
struct ceph_cap_snap {int ci_item; int context; TYPE_1__ cap_flush; int follows; int dirty_pages; int writing; int need_flush; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ceph_cap_snap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct ceph_cap_snap*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct ceph_inode_info *VAR_1,
      struct ceph_cap_snap *VAR_2)
{
 if (!VAR_2->need_flush &&
     !VAR_2->writing && !VAR_2->dirty_pages) {
  FUNC_3("dropping cap_snap %p follows %llu\n",
       VAR_2, VAR_2->follows);
  FUNC_0(VAR_2->cap_flush.tid > 0);
  FUNC_2(VAR_2->context);
  if (!FUNC_5(&VAR_2->ci_item, &VAR_1->i_cap_snaps))
   VAR_1->i_ceph_flags |= VAR_0;

  FUNC_4(&VAR_2->ci_item);
  FUNC_1(VAR_2);
  return 1;
 }
 return 0;
}
