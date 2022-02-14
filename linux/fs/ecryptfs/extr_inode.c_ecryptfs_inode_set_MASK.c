
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int * i_fop; int i_rdev; int i_mode; int * i_op; TYPE_1__* i_mapping; int i_ino; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct inode*,struct inode*) ;
 int VAR_5 ;
 int FUNC_3 (struct inode*,struct inode*) ;
 int FUNC_4 (struct inode*,struct inode*) ;
 int FUNC_5 (struct inode*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_7;

 FUNC_2(VAR_6, VAR_8);
 FUNC_3(VAR_6, VAR_8);

 FUNC_4(VAR_6, VAR_8);
 VAR_6->i_ino = VAR_8->i_ino;
 VAR_6->i_mapping->a_ops = &VAR_0;

 if (FUNC_1(VAR_6->i_mode))
  VAR_6->i_op = &VAR_5;
 else if (FUNC_0(VAR_6->i_mode))
  VAR_6->i_op = &VAR_2;
 else
  VAR_6->i_op = &VAR_4;

 if (FUNC_0(VAR_6->i_mode))
  VAR_6->i_fop = &VAR_1;
 else if (FUNC_6(VAR_6->i_mode))
  FUNC_5(VAR_6, VAR_6->i_mode, VAR_6->i_rdev);
 else
  VAR_6->i_fop = &VAR_3;

 return 0;
}
