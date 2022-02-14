
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int dentry_dir_leases; } ;
struct ceph_dentry_info {int flags; int lease_list; int time; scalar_t__ lease_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ceph_mds_client* VAR_3,
         struct ceph_dentry_info *VAR_4)
{
 VAR_4->flags &= ~(VAR_0 | VAR_1);
 VAR_4->lease_gen = 0;
 VAR_4->time = VAR_2;
 FUNC_0(&VAR_4->lease_list, &VAR_3->dentry_dir_leases);
}
