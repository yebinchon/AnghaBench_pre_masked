
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iomap {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_trans {scalar_t__ tr_num_buf_new; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct gfs2_trans* journal_info; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,struct page*,int ,unsigned int) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_2, loff_t VAR_3,
     unsigned VAR_4, struct page *VAR_5,
     struct iomap *VAR_6)
{
 struct gfs2_trans *VAR_7 = VAR_1->journal_info;
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_2);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_2);

 if (VAR_5 && !FUNC_3(VAR_8))
  FUNC_4(VAR_8, VAR_5, FUNC_6(VAR_3), VAR_4);

 if (VAR_7->tr_num_buf_new)
  FUNC_2(VAR_2, VAR_0);

 FUNC_5(VAR_9);
}
