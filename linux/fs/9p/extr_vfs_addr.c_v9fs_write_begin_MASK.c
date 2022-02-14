
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int writeback_fid; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct v9fs_inode* FUNC_2 (struct inode*) ;
 struct page* FUNC_3 (struct address_space*,int,unsigned int) ;
 int FUNC_4 (int ,char*,struct file*,struct address_space*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ,struct page*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, struct address_space *VAR_5,
       loff_t VAR_6, unsigned VAR_7, unsigned VAR_8,
       struct page **VAR_9, void **VAR_10)
{
 int VAR_11 = 0;
 struct page *VAR_12;
 struct v9fs_inode *VAR_13;
 pgoff_t VAR_14 = VAR_6 >> VAR_2;
 struct inode *VAR_15 = VAR_5->host;


 FUNC_4(VAR_1, "filp %p, mapping %p\n", VAR_4, VAR_5);

 VAR_13 = FUNC_2(VAR_15);
start:
 VAR_12 = FUNC_3(VAR_5, VAR_14, VAR_8);
 if (!VAR_12) {
  VAR_11 = -VAR_0;
  goto out;
 }
 FUNC_0(!VAR_13->writeback_fid);
 if (FUNC_1(VAR_12))
  goto out;

 if (VAR_7 == VAR_3)
  goto out;

 VAR_11 = FUNC_6(VAR_13->writeback_fid, VAR_12);
 FUNC_5(VAR_12);
 if (!VAR_11)
  goto start;
out:
 *VAR_9 = VAR_12;
 return VAR_11;
}
