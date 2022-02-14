
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct nfs_fattr*) ;
 int FUNC_2 (struct inode*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2,
  struct nfs_fattr *VAR_3, unsigned int VAR_4)
{
 if (FUNC_0(VAR_2->i_mode))
  VAR_4 |= VAR_1;
 FUNC_2(VAR_2, VAR_4);
 if ((VAR_3->valid & VAR_0) == 0)
  return 0;
 return FUNC_1(VAR_2, VAR_3);
}
