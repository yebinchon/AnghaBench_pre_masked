
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_write_ctxt {int w_first_new_cpos; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct inode*,struct buffer_head*,unsigned int,unsigned int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0,
     struct buffer_head *VAR_1,
     loff_t VAR_2, unsigned VAR_3,
     struct ocfs2_write_ctxt *VAR_4)
{
 int VAR_5;
 loff_t VAR_6 = VAR_2 + VAR_3;

 FUNC_0(FUNC_6(FUNC_1(VAR_0->i_sb)));

 if (VAR_6 <= FUNC_2(VAR_0))
  return 0;

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_6, VAR_2);
 if (VAR_5)
  FUNC_3(VAR_5);


 if (VAR_4)
  VAR_4->w_first_new_cpos =
   FUNC_4(VAR_0->i_sb, FUNC_2(VAR_0));

 return VAR_5;
}
