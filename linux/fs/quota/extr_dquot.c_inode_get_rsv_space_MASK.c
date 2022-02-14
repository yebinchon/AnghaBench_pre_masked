
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_lock; TYPE_2__* i_sb; } ;
typedef int qsize_t ;
struct TYPE_4__ {TYPE_1__* dq_op; } ;
struct TYPE_3__ {int get_reserved_space; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static qsize_t FUNC_3(struct inode *VAR_0)
{
 qsize_t VAR_1;

 if (!VAR_0->i_sb->dq_op->get_reserved_space)
  return 0;
 FUNC_1(&VAR_0->i_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->i_lock);
 return VAR_1;
}
