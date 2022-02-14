
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_cred; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{



 if (!FUNC_0(VAR_3->f_cred->user_ns, VAR_0))
  return -VAR_1;
 return 0;
}
