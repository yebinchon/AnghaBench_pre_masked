
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; int * i_mapping; int i_sb; } ;
struct file {unsigned short f_flags; int * private_data; TYPE_1__* f_cred; } ;
struct coda_inode_info {int c_lock; scalar_t__ c_mapcount; } ;
struct coda_file_info {int cfi_container; scalar_t__ cfi_mapcount; } ;
struct TYPE_2__ {int fsuid; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 unsigned short VAR_0 ;
 unsigned short FUNC_1 (unsigned short) ;
 struct coda_file_info* FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,unsigned short,int ) ;

int FUNC_10(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned short VAR_3 = (VAR_2->f_flags) & (~VAR_0);
 unsigned short VAR_4 = FUNC_1(VAR_3);
 struct coda_file_info *VAR_5;
 struct coda_inode_info *VAR_6;
 struct inode *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_2);

 VAR_8 = FUNC_9(VAR_1->i_sb, FUNC_3(VAR_1),
     VAR_4, VAR_2->f_cred->fsuid);

 VAR_7 = FUNC_4(VAR_5->cfi_container);
 VAR_6 = FUNC_0(VAR_1);


 FUNC_7(&VAR_6->c_lock);
 if (VAR_1->i_mapping == &VAR_7->i_data) {
  VAR_6->c_mapcount -= VAR_5->cfi_mapcount;
  if (!VAR_6->c_mapcount)
   VAR_1->i_mapping = &VAR_1->i_data;
 }
 FUNC_8(&VAR_6->c_lock);

 FUNC_5(VAR_5->cfi_container);
 FUNC_6(VAR_2->private_data);
 VAR_2->private_data = ((void*)0);



 return 0;
}
