
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_addr_list {scalar_t__ preferred; } ;
struct afs_addr_cursor {scalar_t__ index; int error; struct afs_addr_list* alist; int tried; scalar_t__ responded; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct afs_addr_list*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;

int FUNC_3(struct afs_addr_cursor *VAR_0)
{
 struct afs_addr_list *VAR_1;

 VAR_1 = VAR_0->alist;
 if (VAR_1) {
  if (VAR_0->responded &&
      VAR_0->index != VAR_1->preferred &&
      FUNC_2(VAR_0->alist->preferred, &VAR_0->tried))
   FUNC_0(VAR_1->preferred, VAR_0->index);
  FUNC_1(VAR_1);
  VAR_0->alist = ((void*)0);
 }

 return VAR_0->error;
}
