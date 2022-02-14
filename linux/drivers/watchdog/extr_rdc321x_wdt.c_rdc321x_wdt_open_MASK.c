
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int inuse; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct inode*,struct file*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 if (FUNC_1(0, &VAR_1.inuse))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3);
}
