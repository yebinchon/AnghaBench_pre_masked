
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_res_ops {int dummy; } ;
struct ocfs2_lock_res {int l_name; } ;
struct inode {int i_sb; } ;
typedef enum ocfs2_lock_type { ____Placeholder_ocfs2_lock_type } ocfs2_lock_type ;
struct TYPE_2__ {int ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,int ,unsigned int,int ) ;
 struct ocfs2_lock_res_ops VAR_0 ;
 struct ocfs2_lock_res_ops VAR_1 ;
 struct ocfs2_lock_res_ops VAR_2 ;
 int FUNC_4 (int ,struct ocfs2_lock_res*,int,struct ocfs2_lock_res_ops*,struct inode*) ;

void FUNC_5(struct ocfs2_lock_res *VAR_3,
          enum ocfs2_lock_type VAR_4,
          unsigned int VAR_5,
          struct inode *VAR_6)
{
 struct ocfs2_lock_res_ops *VAR_7;

 switch(VAR_4) {
  case 128:
   VAR_7 = &VAR_2;
   break;
  case 130:
   VAR_7 = &VAR_0;
   break;
  case 129:
   VAR_7 = &VAR_1;
   break;
  default:
   FUNC_2(1, "type: %d\n", VAR_4);
   VAR_7 = ((void*)0);
   break;
 };

 FUNC_3(VAR_4, FUNC_0(VAR_6)->ip_blkno,
         VAR_5, VAR_3->l_name);
 FUNC_4(FUNC_1(VAR_6->i_sb), VAR_3, VAR_4, VAR_7, VAR_6);
}
