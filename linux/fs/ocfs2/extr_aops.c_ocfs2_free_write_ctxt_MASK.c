
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_write_ctxt {int w_di_bh; int w_unwritten_list; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_write_ctxt*) ;
 int FUNC_2 (struct inode*,int *) ;
 int FUNC_3 (struct ocfs2_write_ctxt*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0,
      struct ocfs2_write_ctxt *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->w_unwritten_list);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1->w_di_bh);
 FUNC_1(VAR_1);
}
