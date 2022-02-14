
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {scalar_t__ index; TYPE_2__* mapping; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
struct TYPE_6__ {scalar_t__ journal_info; } ;
struct TYPE_5__ {TYPE_1__* a_ops; struct inode* host; } ;
struct TYPE_4__ {int (* invalidatepage ) (struct page*,int ,int) ;} ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_2 (struct gfs2_sbd*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*,int ,struct writeback_control*) ;
 int FUNC_6 (struct writeback_control*,struct page*) ;
 int FUNC_7 (struct page*,int ,int) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct page *VAR_4, struct writeback_control *VAR_5)
{
 struct inode *VAR_6 = VAR_4->mapping->host;
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_6);
 loff_t VAR_9 = FUNC_4(VAR_6);
 pgoff_t VAR_10 = VAR_9 >> VAR_0;
 unsigned VAR_11;

 if (FUNC_2(VAR_8, FUNC_3(VAR_7->i_gl)))
  goto out;
 if (VAR_2->journal_info)
  goto redirty;

 VAR_11 = VAR_9 & (VAR_1-1);
 if (VAR_4->index > VAR_10 || (VAR_4->index == VAR_10 && !VAR_11)) {
  VAR_4->mapping->a_ops->invalidatepage(VAR_4, 0, VAR_1);
  goto out;
 }

 return FUNC_5(VAR_4, VAR_3, VAR_5);

redirty:
 FUNC_6(VAR_5, VAR_4);
out:
 FUNC_8(VAR_4);
 return 0;
}
