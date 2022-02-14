
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct TYPE_4__ {scalar_t__ journal_info; } ;
struct TYPE_3__ {struct inode* host; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct writeback_control*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct writeback_control*,struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct page *VAR_1, struct writeback_control *VAR_2)
{
 struct inode *VAR_3 = VAR_1->mapping->host;
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_3);
 struct gfs2_sbd *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (FUNC_4(VAR_5, FUNC_5(VAR_4->i_gl)))
  goto out;
 if (FUNC_2(VAR_1) || VAR_0->journal_info)
  goto out_ignore;
 VAR_6 = FUNC_3(VAR_1, VAR_2);
 return VAR_6;

out_ignore:
 FUNC_6(VAR_2, VAR_1);
out:
 FUNC_7(VAR_1);
 return 0;
}
