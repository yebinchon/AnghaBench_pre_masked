
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {struct ocfs2_file_private* l_priv; } ;
struct ocfs2_file_private {TYPE_3__* fp_file; } ;
struct TYPE_6__ {TYPE_2__* f_mapping; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;

__attribute__((used)) static struct ocfs2_super *FUNC_1(struct ocfs2_lock_res *VAR_0)
{
 struct ocfs2_file_private *VAR_1 = VAR_0->l_priv;

 return FUNC_0(VAR_1->fp_file->f_mapping->host->i_sb);
}
