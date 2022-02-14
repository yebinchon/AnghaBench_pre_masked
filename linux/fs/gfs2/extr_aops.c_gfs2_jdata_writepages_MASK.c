
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct address_space {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct gfs2_sbd*,int ,int) ;
 int FUNC_3 (struct address_space*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_4(struct address_space *VAR_3,
     struct writeback_control *VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_3->host);
 struct gfs2_sbd *VAR_6 = FUNC_1(VAR_3->host);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 == 0 && VAR_4->sync_mode == VAR_2) {
  FUNC_2(VAR_6, VAR_5->i_gl, VAR_1 |
          VAR_0);
  VAR_7 = FUNC_3(VAR_3, VAR_4);
 }
 return VAR_7;
}
