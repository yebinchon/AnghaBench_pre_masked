
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct inode*,unsigned long,int (*) (struct inode*,void*),int *,void*) ;
 int FUNC_1 (struct inode*) ;

int FUNC_2(struct inode *VAR_2, unsigned long VAR_3,
  int (*VAR_4)(struct inode *, void *), void *VAR_5)
{
 struct inode *VAR_6;

 VAR_2->i_state |= VAR_1;
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_5);

 if (VAR_6 != VAR_2) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 return 0;
}
