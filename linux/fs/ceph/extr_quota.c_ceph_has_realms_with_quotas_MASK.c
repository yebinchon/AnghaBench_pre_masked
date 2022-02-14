
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_3__* s_root; } ;
struct inode {int dummy; } ;
struct ceph_mds_client {int quotarealms_count; TYPE_1__* fsc; } ;
struct TYPE_8__ {struct ceph_mds_client* mdsc; } ;
struct TYPE_7__ {TYPE_2__* d_inode; } ;
struct TYPE_6__ {scalar_t__ i_ino; } ;
struct TYPE_5__ {struct super_block* sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (struct inode*) ;

__attribute__((used)) static inline bool FUNC_2(struct inode *VAR_1)
{
 struct ceph_mds_client *VAR_2 = FUNC_1(VAR_1)->mdsc;
 struct super_block *VAR_3 = VAR_2->fsc->sb;

 if (FUNC_0(&VAR_2->quotarealms_count) > 0)
  return 1;

 if (VAR_3->s_root->d_inode &&
     (VAR_3->s_root->d_inode->i_ino == VAR_0))
  return 0;

 return 1;
}
