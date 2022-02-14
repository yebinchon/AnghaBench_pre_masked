
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct coda_inode_info {int c_fid; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 char* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int *,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_2->mapping->host;
 int VAR_4;
 struct coda_inode_info *VAR_5;
 unsigned int VAR_6 = VAR_0;
 char *VAR_7 = FUNC_3(VAR_2);

 VAR_5 = FUNC_0(VAR_3);

 VAR_4 = FUNC_5(VAR_3->i_sb, &VAR_5->c_fid, VAR_7, &VAR_6);
 if (VAR_4)
  goto fail;
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 return 0;

fail:
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 return VAR_4;
}
