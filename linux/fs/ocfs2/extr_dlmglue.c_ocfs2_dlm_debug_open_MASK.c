
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int osb_dlm_debug; } ;
struct TYPE_2__ {int l_debug_list; } ;
struct ocfs2_dlm_seq_priv {int p_dlm_debug; TYPE_1__ p_iter_res; } ;
struct inode {struct ocfs2_super* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ocfs2_dlm_seq_priv* FUNC_1 (struct file*,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct ocfs2_dlm_seq_priv *VAR_4;
 struct ocfs2_super *VAR_5;

 VAR_4 = FUNC_1(VAR_3, &VAR_1, sizeof(*VAR_4));
 if (!VAR_4) {
  FUNC_2(-VAR_0);
  return -VAR_0;
 }

 VAR_5 = VAR_2->i_private;
 FUNC_4(VAR_5->osb_dlm_debug);
 VAR_4->p_dlm_debug = VAR_5->osb_dlm_debug;
 FUNC_0(&VAR_4->p_iter_res.l_debug_list);

 FUNC_3(&VAR_4->p_iter_res,
       VAR_4->p_dlm_debug);

 return 0;
}
