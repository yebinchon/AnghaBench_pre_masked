
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int spinlock; } ;
struct TYPE_3__ {int alive; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 unsigned long VAR_5;


 FUNC_0(&VAR_1.spinlock, VAR_5);
 if (VAR_2.alive) {
  FUNC_1(&VAR_1.spinlock, VAR_5);
  return -VAR_0;
 }
 VAR_2.alive = 1;
 FUNC_1(&VAR_1.spinlock, VAR_5);
 return 0;
}
