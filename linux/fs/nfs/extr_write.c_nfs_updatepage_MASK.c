
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (char*,int,long long,...) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 scalar_t__ FUNC_4 (struct file*,struct page*,struct inode*) ;
 struct nfs_open_context* FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct address_space*) ;
 int FUNC_9 (struct nfs_open_context*,struct page*,unsigned int,unsigned int) ;
 struct address_space* FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;

int FUNC_12(struct file *VAR_1, struct page *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 struct nfs_open_context *VAR_5 = FUNC_5(VAR_1);
 struct address_space *VAR_6 = FUNC_10(VAR_2);
 struct inode *VAR_7 = VAR_6->host;
 int VAR_8 = 0;

 FUNC_6(VAR_7, VAR_0);

 FUNC_1("NFS:       nfs_updatepage(%pD2 %d@%lld)\n",
  VAR_1, VAR_4, (long long)(FUNC_11(VAR_2) + VAR_3));

 if (!VAR_4)
  goto out;

 if (FUNC_4(VAR_1, VAR_2, VAR_7)) {
  VAR_4 = FUNC_3(VAR_4 + VAR_3, FUNC_7(VAR_2));
  VAR_3 = 0;
 }

 VAR_8 = FUNC_9(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_8 < 0)
  FUNC_8(VAR_6);
 else
  FUNC_0(VAR_2);
out:
 FUNC_1("NFS:       nfs_updatepage returns %d (isize %lld)\n",
   VAR_8, (long long)FUNC_2(VAR_7));
 return VAR_8;
}
