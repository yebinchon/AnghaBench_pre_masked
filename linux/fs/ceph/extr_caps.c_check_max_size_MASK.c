
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_inode_info {scalar_t__ i_max_size; scalar_t__ i_wanted_max_size; scalar_t__ i_requested_max_size; int i_ceph_lock; TYPE_1__* i_auth_cap; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int issued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_inode_info*,int ,int *) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,struct inode*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_2, loff_t VAR_3)
{
 struct ceph_inode_info *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;


 FUNC_3(&VAR_4->i_ceph_lock);
 if (VAR_3 >= VAR_4->i_max_size && VAR_3 > VAR_4->i_wanted_max_size) {
  FUNC_2("write %p at large endoff %llu, req max_size\n",
       VAR_2, VAR_3);
  VAR_4->i_wanted_max_size = VAR_3;
 }

 if (VAR_4->i_auth_cap &&
     (VAR_4->i_auth_cap->issued & VAR_0) &&
     VAR_4->i_wanted_max_size > VAR_4->i_max_size &&
     VAR_4->i_wanted_max_size > VAR_4->i_requested_max_size)
  VAR_5 = 1;
 FUNC_4(&VAR_4->i_ceph_lock);
 if (VAR_5)
  FUNC_0(VAR_4, VAR_1, ((void*)0));
}
