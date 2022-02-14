
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_size; char* i_link; int * i_op; int i_sb; } ;
struct erofs_inode {scalar_t__ datalayout; int nid; scalar_t__ xattr_isize; scalar_t__ inode_isize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct erofs_inode* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_7, void *VAR_8,
         unsigned int VAR_9)
{
 struct erofs_inode *VAR_10 = FUNC_1(VAR_7);
 char *VAR_11;


 if (VAR_10->datalayout != VAR_2 ||
     VAR_7->i_size >= VAR_4) {
  VAR_7->i_op = &VAR_6;
  return 0;
 }

 VAR_11 = FUNC_4(VAR_7->i_size + 1, VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 += VAR_10->inode_isize + VAR_10->xattr_isize;

 if (VAR_9 + VAR_7->i_size > VAR_4) {
  FUNC_3(VAR_11);
  FUNC_2(VAR_7->i_sb,
     "inline data cross block boundary @ nid %llu",
     VAR_10->nid);
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_5(VAR_11, VAR_8 + VAR_9, VAR_7->i_size);
 VAR_11[VAR_7->i_size] = '\0';

 VAR_7->i_link = VAR_11;
 VAR_7->i_op = &VAR_5;
 return 0;
}
