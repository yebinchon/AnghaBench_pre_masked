
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_3__ {int * a_ops; } ;
struct inode {int * i_fop; int * i_op; TYPE_1__ i_data; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {scalar_t__ i_alloc_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7,
        bool VAR_8)
{
 struct inode *VAR_9 = FUNC_5(VAR_5, VAR_7);

 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (FUNC_2(VAR_9)->i_alloc_type == VAR_0)
  VAR_9->i_data.a_ops = &VAR_1;
 else
  VAR_9->i_data.a_ops = &VAR_2;
 VAR_9->i_op = &VAR_3;
 VAR_9->i_fop = &VAR_4;
 FUNC_3(VAR_9);

 return FUNC_4(VAR_6, VAR_9);
}
