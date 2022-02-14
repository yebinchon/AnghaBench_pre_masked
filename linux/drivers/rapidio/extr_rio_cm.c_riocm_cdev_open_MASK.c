
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,struct file*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 FUNC_1(VAR_1, "by %s(%d) filp=%p ",
      VAR_3->comm, FUNC_2(VAR_3), VAR_5);

 if (FUNC_0(&VAR_2))
  return -VAR_0;

 return 0;
}
