
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int flags; } ;
struct inode {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct nfs_inode *VAR_1, struct inode *VAR_2)
{
 if (!FUNC_2(VAR_0, &VAR_1->flags)) {
  FUNC_1(VAR_0, &VAR_1->flags);
  FUNC_0(VAR_2->i_mapping);
 }
}
