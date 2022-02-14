
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; int i_sb; int * i_fop; int * i_op; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(struct inode *VAR_6)
{
 VAR_6->i_op = &VAR_3;
 VAR_6->i_fop = &VAR_4;
 if (FUNC_0(VAR_6))
  VAR_6->i_mapping->a_ops = &VAR_2;
 else if (FUNC_1(VAR_6->i_sb, VAR_0))
  VAR_6->i_mapping->a_ops = &VAR_5;
 else
  VAR_6->i_mapping->a_ops = &VAR_1;
}
