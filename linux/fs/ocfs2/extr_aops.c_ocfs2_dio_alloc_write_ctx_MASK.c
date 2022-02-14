
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dio_write_ctxt {int dw_writer_pid; scalar_t__ dw_orphaned; scalar_t__ dw_zero_count; int dw_zero_list; } ;
struct buffer_head {struct ocfs2_dio_write_ctxt* b_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ocfs2_dio_write_ctxt* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct ocfs2_dio_write_ctxt *
FUNC_3(struct buffer_head *VAR_2, int *VAR_3)
{
 struct ocfs2_dio_write_ctxt *VAR_4 = ((void*)0);

 if (VAR_2->b_private)
  return VAR_2->b_private;

 VAR_4 = FUNC_1(sizeof(struct ocfs2_dio_write_ctxt), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_4->dw_zero_list);
 VAR_4->dw_zero_count = 0;
 VAR_4->dw_orphaned = 0;
 VAR_4->dw_writer_pid = FUNC_2(VAR_1);
 VAR_2->b_private = VAR_4;
 *VAR_3 = 1;

 return VAR_4;
}
