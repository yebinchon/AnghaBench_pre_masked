
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct dquot {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {struct dquot** (* get_dquots ) (struct inode*) ;} ;


 struct dquot** FUNC_0 (struct inode*) ;

__attribute__((used)) static inline struct dquot **FUNC_1(struct inode *VAR_0)
{
 return VAR_0->i_sb->s_op->get_dquots(VAR_0);
}
