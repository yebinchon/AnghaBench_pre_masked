
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
typedef int qsize_t ;
struct TYPE_4__ {TYPE_1__* dq_op; } ;
struct TYPE_3__ {int get_reserved_space; } ;


 int * FUNC_0 (struct inode*) ;

__attribute__((used)) static qsize_t FUNC_1(struct inode *VAR_0)
{
 if (!VAR_0->i_sb->dq_op->get_reserved_space)
  return 0;
 return *FUNC_0(VAR_0);
}
