
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int refn; } ;
struct TYPE_8__ {TYPE_1__ fsync; } ;
struct TYPE_9__ {TYPE_2__ req; } ;
struct orangefs_kernel_op_s {TYPE_3__ upcall; } ;
struct orangefs_inode_s {int refn; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_10__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct orangefs_inode_s* FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct file*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*,int) ;
 struct orangefs_kernel_op_s* FUNC_5 (int ) ;
 int FUNC_6 (struct orangefs_kernel_op_s*) ;
 int FUNC_7 (struct orangefs_kernel_op_s*,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3,
         loff_t VAR_4,
         loff_t VAR_5,
         int VAR_6)
{
 int VAR_7;
 struct orangefs_inode_s *VAR_8 =
  FUNC_0(FUNC_1(VAR_3));
 struct orangefs_kernel_op_s *VAR_9 = ((void*)0);

 VAR_7 = FUNC_2(FUNC_1(VAR_3)->i_mapping,
     VAR_4, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_9 = FUNC_5(VAR_2);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->upcall.req.fsync.refn = VAR_8->refn;

 VAR_7 = FUNC_7(VAR_9,
   "orangefs_fsync",
   FUNC_3(FUNC_1(VAR_3)));

 FUNC_4(VAR_1,
       "orangefs_fsync got return value of %d\n",
       VAR_7);

 FUNC_6(VAR_9);
 return VAR_7;
}
