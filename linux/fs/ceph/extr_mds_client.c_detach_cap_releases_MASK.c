
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ceph_mds_session {int s_mds; scalar_t__ s_num_cap_releases; int s_cap_releases; int s_cap_lock; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_mds_session *VAR_0,
    struct list_head *VAR_1)
{
 FUNC_2(&VAR_0->s_cap_lock);

 FUNC_1(&VAR_0->s_cap_releases, VAR_1);
 VAR_0->s_num_cap_releases = 0;
 FUNC_0("dispose_cap_releases mds%d\n", VAR_0->s_mds);
}
