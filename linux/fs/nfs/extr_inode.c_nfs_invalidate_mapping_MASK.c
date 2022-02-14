
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_inode {int cookieverf; } ;
struct inode {TYPE_1__* i_sb; int i_lock; int i_mode; } ;
struct address_space {scalar_t__ nrpages; } ;
struct TYPE_2__ {int s_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,unsigned long long) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct address_space*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_2, struct address_space *VAR_3)
{
 struct nfs_inode *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_3->nrpages != 0) {
  if (FUNC_3(VAR_2->i_mode)) {
   VAR_5 = FUNC_9(VAR_3);
   if (VAR_5 < 0)
    return VAR_5;
  }
  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
 }
 if (FUNC_2(VAR_2->i_mode)) {
  FUNC_10(&VAR_2->i_lock);
  FUNC_6(VAR_4->cookieverf, 0, sizeof(VAR_4->cookieverf));
  FUNC_11(&VAR_2->i_lock);
 }
 FUNC_8(VAR_2, VAR_0);
 FUNC_7(VAR_2);

 FUNC_4(VAR_1, "NFS: (%s/%Lu) data cache invalidated\n",
   VAR_2->i_sb->s_id,
   (unsigned long long)FUNC_0(VAR_2));
 return 0;
}
