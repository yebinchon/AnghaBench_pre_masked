
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int ino; int blksize; } ;
struct inode {int i_sb; } ;
struct TYPE_4__ {scalar_t__ nfs; } ;
struct TYPE_5__ {TYPE_1__ options; int cluster_size; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,struct inode*) ;
 int FUNC_3 (struct inode*,struct kstat*) ;

int FUNC_4(const struct path *VAR_1, struct kstat *VAR_2,
  u32 VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_1->dentry);
 FUNC_3(VAR_5, VAR_2);
 VAR_2->blksize = FUNC_0(VAR_5->i_sb)->cluster_size;

 if (FUNC_0(VAR_5->i_sb)->options.nfs == VAR_0) {

  VAR_2->ino = FUNC_2(FUNC_0(VAR_5->i_sb), VAR_5);
 }
 return 0;
}
