
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_write_ctxt {unsigned int w_cpos; unsigned int w_clen; int w_large_pages; int w_unwritten_list; int w_dealloc; int w_type; struct buffer_head* w_di_bh; int w_first_new_cpos; } ;
struct ocfs2_super {unsigned int s_clustersize_bits; } ;
struct buffer_head {int dummy; } ;
typedef int ocfs2_write_type_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 struct ocfs2_write_ctxt* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_write_ctxt **VAR_4,
      struct ocfs2_super *VAR_5, loff_t VAR_6,
      unsigned VAR_7, ocfs2_write_type_t VAR_8,
      struct buffer_head *VAR_9)
{
 u32 VAR_10;
 struct ocfs2_write_ctxt *VAR_11;

 VAR_11 = FUNC_2(sizeof(struct ocfs2_write_ctxt), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->w_cpos = VAR_6 >> VAR_5->s_clustersize_bits;
 VAR_11->w_first_new_cpos = VAR_3;
 VAR_10 = (VAR_6 + VAR_7 - 1) >> VAR_5->s_clustersize_bits;
 VAR_11->w_clen = VAR_10 - VAR_11->w_cpos + 1;
 FUNC_1(VAR_9);
 VAR_11->w_di_bh = VAR_9;
 VAR_11->w_type = VAR_8;

 if (FUNC_4(VAR_2 > VAR_5->s_clustersize_bits))
  VAR_11->w_large_pages = 1;
 else
  VAR_11->w_large_pages = 0;

 FUNC_3(&VAR_11->w_dealloc);
 FUNC_0(&VAR_11->w_unwritten_list);

 *VAR_4 = VAR_11;

 return 0;
}
