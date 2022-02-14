
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ driver_closed; int driver_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct file*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{


 if (FUNC_1(0, &VAR_2.driver_open))
  return -VAR_0;


 if (VAR_2.driver_closed)
  return -VAR_1;

 return FUNC_0(VAR_3, VAR_4);
}
