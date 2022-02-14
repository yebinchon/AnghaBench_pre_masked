
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; } ;
struct erofs_inode {int nid; } ;
typedef int erofs_nid_t ;


 int VAR_0 ;
 struct erofs_inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,int) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct super_block *VAR_2,
    erofs_nid_t VAR_3,
    bool VAR_4)
{
 struct inode *VAR_5 = FUNC_3(VAR_2, VAR_3);

 if (!VAR_5)
  return FUNC_1(-VAR_0);

 if (VAR_5->i_state & VAR_1) {
  int VAR_6;
  struct erofs_inode *VAR_7 = FUNC_0(VAR_5);

  VAR_7->nid = VAR_3;

  VAR_6 = FUNC_2(VAR_5, VAR_4);
  if (!VAR_6)
   FUNC_5(VAR_5);
  else {
   FUNC_4(VAR_5);
   VAR_5 = FUNC_1(VAR_6);
  }
 }
 return VAR_5;
}
