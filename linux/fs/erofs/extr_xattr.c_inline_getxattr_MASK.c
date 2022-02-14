
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct getxattr_iter {int buffer_size; int it; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct inode*) ;
 int FUNC_1 (int *,int *,unsigned int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct getxattr_iter *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(&VAR_3->it, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = VAR_4;
 while (VAR_5) {
  VAR_4 = FUNC_1(&VAR_3->it, &VAR_1, &VAR_5);
  if (VAR_4 != -VAR_0)
   break;
 }
 FUNC_2(&VAR_3->it);

 return VAR_4 ? VAR_4 : VAR_3->buffer_size;
}
