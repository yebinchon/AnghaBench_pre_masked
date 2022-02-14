
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* native; } ;
struct user_arg_ptr {TYPE_1__ ptr; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct user_arg_ptr,struct user_arg_ptr,int ,struct file*) ;

int FUNC_1(struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct user_arg_ptr VAR_4 = { .ptr.native = VAR_2 };
 struct user_arg_ptr VAR_5 = { .ptr.native = VAR_3 };

 return FUNC_0(VAR_0, ((void*)0), VAR_4, VAR_5, 0, VAR_1);
}
