
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_page {int wb_bytes; struct page* wb_page; } ;
struct inode {TYPE_1__* i_sb; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {int dentry; } ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,unsigned long long,int ,long long) ;
 int FUNC_7 (struct address_space*,struct page*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct nfs_page*,int ) ;
 int FUNC_10 (struct inode*,struct page*,int ) ;
 int FUNC_11 (struct nfs_page*) ;
 TYPE_2__* FUNC_12 (struct nfs_page*) ;
 struct address_space* FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct nfs_page*) ;
 int FUNC_15 (struct page*) ;

__attribute__((used)) static void FUNC_16(struct nfs_page *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = FUNC_5(FUNC_12(VAR_2)->dentry);
 struct page *VAR_5 = VAR_2->wb_page;

 FUNC_6("NFS: read done (%s/%llu %d@%lld)\n", VAR_4->i_sb->s_id,
  (unsigned long long)FUNC_0(VAR_4), VAR_2->wb_bytes,
  (long long)FUNC_14(VAR_2));

 if (FUNC_8(VAR_3) && VAR_3 != -VAR_0)
  FUNC_4(VAR_5);
 if (FUNC_9(VAR_2, VAR_1)) {
  struct address_space *VAR_6 = FUNC_13(VAR_5);

  if (FUNC_3(VAR_5))
   FUNC_10(VAR_4, VAR_5, 0);
  else if (!FUNC_1(VAR_5) && !FUNC_2(VAR_5))
   FUNC_7(VAR_6, VAR_5);
  FUNC_15(VAR_5);
 }
 FUNC_11(VAR_2);
}
