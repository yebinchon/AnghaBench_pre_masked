
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int nlm_host; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int ,int,struct file_lock*,int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_0, int VAR_1, struct file_lock *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_0);

 return FUNC_2(FUNC_0(VAR_3)->nlm_host, VAR_1, VAR_2, ((void*)0));
}
