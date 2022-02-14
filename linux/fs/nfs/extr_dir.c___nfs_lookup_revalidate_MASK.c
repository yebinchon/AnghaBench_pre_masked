
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct inode inode ;
struct dentry {int d_parent; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static int
FUNC_5(struct dentry *VAR_2, unsigned int VAR_3,
   int (*VAR_4)(struct inode *, struct dentry *, unsigned int))
{
 struct dentry *VAR_5;
 struct inode *VAR_6;
 int VAR_7;

 if (VAR_3 & VAR_1) {
  VAR_5 = FUNC_0(VAR_2->d_parent);
  VAR_6 = FUNC_2(VAR_5);
  if (!VAR_6)
   return -VAR_0;
  VAR_7 = VAR_4(VAR_6, VAR_2, VAR_3);
  if (VAR_5 != FUNC_0(VAR_2->d_parent))
   return -VAR_0;
 } else {
  VAR_5 = FUNC_3(VAR_2);
  VAR_7 = VAR_4(FUNC_1(VAR_5), VAR_2, VAR_3);
  FUNC_4(VAR_5);
 }
 return VAR_7;
}
