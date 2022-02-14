
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_vino {scalar_t__ ino; scalar_t__ snap; } ;
struct TYPE_2__ {scalar_t__ ino; scalar_t__ snap; } ;
struct ceph_inode_info {TYPE_1__ i_vino; } ;


 struct ceph_inode_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 struct ceph_vino *VAR_2 = (struct ceph_vino *)VAR_1;
 struct ceph_inode_info *VAR_3 = FUNC_0(VAR_0);
 return VAR_3->i_vino.ino == VAR_2->ino &&
  VAR_3->i_vino.snap == VAR_2->snap;
}
