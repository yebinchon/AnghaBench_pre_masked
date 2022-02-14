
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct jffs2_inode_info {int sem; struct jffs2_full_dirent* dents; } ;
struct jffs2_full_dirent {unsigned int nhash; scalar_t__ version; scalar_t__ ino; int name; struct jffs2_full_dirent* next; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct jffs2_inode_info* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_1 ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 unsigned int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int,char*) ;
 struct inode* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,scalar_t__) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_2, struct dentry *VAR_3,
       unsigned int VAR_4)
{
 struct jffs2_inode_info *VAR_5;
 struct jffs2_full_dirent *VAR_6 = ((void*)0), *VAR_7;
 uint32_t VAR_8 = 0;
 struct inode *VAR_9 = ((void*)0);
 unsigned int VAR_10;

 FUNC_5(1, "jffs2_lookup()\n");

 if (VAR_3->d_name.len > VAR_1)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(VAR_2);


 VAR_10 = FUNC_4(((void*)0), VAR_3->d_name.name, VAR_3->d_name.len);

 FUNC_7(&VAR_5->sem);


 for (VAR_7 = VAR_5->dents; VAR_7 && VAR_7->nhash <= VAR_10; VAR_7 = VAR_7->next) {
  if (VAR_7->nhash == VAR_10 &&
      (!VAR_6 || VAR_7->version > VAR_6->version) &&
      FUNC_10(VAR_7->name) == VAR_3->d_name.len &&
      !FUNC_11(VAR_7->name, VAR_3->d_name.name, VAR_3->d_name.len)) {
   VAR_6 = VAR_7;
  }
 }
 if (VAR_6)
  VAR_8 = VAR_6->ino;
 FUNC_8(&VAR_5->sem);
 if (VAR_8) {
  VAR_9 = FUNC_6(VAR_2->i_sb, VAR_8);
  if (FUNC_1(VAR_9))
   FUNC_9("iget() failed for ino #%u\n", VAR_8);
 }

 return FUNC_3(VAR_9, VAR_3);
}
