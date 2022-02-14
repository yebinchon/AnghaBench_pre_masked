
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listxattr_iter {int buffer_ofs; int it; int dentry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,unsigned int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct listxattr_iter *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_1(&VAR_1->it, FUNC_0(VAR_1->dentry));
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = VAR_2;
 while (VAR_3) {
  VAR_2 = FUNC_2(&VAR_1->it, &VAR_0, &VAR_3);
  if (VAR_2)
   break;
 }
 FUNC_3(&VAR_1->it);
 return VAR_2 ? VAR_2 : VAR_1->buffer_ofs;
}
