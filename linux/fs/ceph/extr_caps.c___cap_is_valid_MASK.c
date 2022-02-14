
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ceph_cap {scalar_t__ cap_gen; int issued; TYPE_1__* ci; TYPE_2__* session; } ;
struct TYPE_4__ {scalar_t__ s_cap_gen; unsigned long s_cap_ttl; int s_gen_ttl_lock; } ;
struct TYPE_3__ {int vfs_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,struct ceph_cap*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ceph_cap *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_2(&VAR_1->session->s_gen_ttl_lock);
 VAR_3 = VAR_1->session->s_cap_gen;
 VAR_2 = VAR_1->session->s_cap_ttl;
 FUNC_3(&VAR_1->session->s_gen_ttl_lock);

 if (VAR_1->cap_gen < VAR_3 || FUNC_4(VAR_0, VAR_2)) {
  FUNC_1("__cap_is_valid %p cap %p issued %s "
       "but STALE (gen %u vs %u)\n", &VAR_1->ci->vfs_inode,
       VAR_1, FUNC_0(VAR_1->issued), VAR_1->cap_gen, VAR_3);
  return 0;
 }

 return 1;
}
