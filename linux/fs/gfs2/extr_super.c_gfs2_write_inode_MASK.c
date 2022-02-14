
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int i_flags; int i_lock; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct TYPE_2__ {scalar_t__ dirty_exceeded; } ;
struct backing_dev_info {TYPE_1__ wb; } ;
struct address_space {int host; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct gfs2_sbd*,struct writeback_control*) ;
 struct address_space* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_sbd*,int ,int) ;
 int FUNC_8 (struct gfs2_inode*) ;
 struct backing_dev_info* FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_4);
 struct gfs2_sbd *VAR_7 = FUNC_1(VAR_4);
 struct address_space *VAR_8 = FUNC_5(VAR_6->i_gl);
 struct backing_dev_info *VAR_9 = FUNC_9(VAR_8->host);
 int VAR_10 = 0;
 bool VAR_11 = (VAR_5->sync_mode == VAR_3 || FUNC_6(VAR_6));

 if (VAR_11)
  FUNC_7(FUNC_1(VAR_4), VAR_6->i_gl,
          VAR_1 |
          VAR_0);
 if (VAR_9->wb.dirty_exceeded)
  FUNC_4(VAR_7, VAR_5);
 else
  FUNC_3(VAR_8);
 if (VAR_11)
  VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  FUNC_10(VAR_4);
 else {
  FUNC_11(&VAR_4->i_lock);
  if (!(VAR_4->i_flags & VAR_2))
   FUNC_8(VAR_6);
  FUNC_12(&VAR_4->i_lock);
 }
 return VAR_10;
}
