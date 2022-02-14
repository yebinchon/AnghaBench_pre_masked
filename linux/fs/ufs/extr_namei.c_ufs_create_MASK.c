
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5 (struct inode * VAR_3, struct dentry * VAR_4, umode_t VAR_5,
  bool VAR_6)
{
 struct inode *VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->i_op = &VAR_1;
 VAR_7->i_fop = &VAR_2;
 VAR_7->i_mapping->a_ops = &VAR_0;
 FUNC_2(VAR_7);
 return FUNC_3(VAR_4, VAR_7);
}
