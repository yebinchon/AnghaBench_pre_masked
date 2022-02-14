
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct ceph_vino {int dummy; } ;
struct TYPE_2__ {struct ceph_vino i_vino; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ceph_vino) ;
 int FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0)->i_vino = *(struct ceph_vino *)VAR_1;
 VAR_0->i_ino = FUNC_1(*(struct ceph_vino *)VAR_1);
 FUNC_2(VAR_0, 0);
 return 0;
}
