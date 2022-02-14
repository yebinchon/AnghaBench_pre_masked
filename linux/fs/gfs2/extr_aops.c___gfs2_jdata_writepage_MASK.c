
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_2__* mapping; } ;
struct inode {TYPE_3__* i_sb; } ;
struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
struct gfs2_inode {int dummy; } ;
struct TYPE_6__ {int s_blocksize; } ;
struct TYPE_5__ {struct inode* host; } ;
struct TYPE_4__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 struct gfs2_inode* FUNC_2 (struct inode*) ;
 struct gfs2_sbd* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ,int) ;
 int VAR_2 ;
 int FUNC_6 (struct gfs2_inode*,struct page*,int ,int ) ;
 int FUNC_7 (struct page*,int ,struct writeback_control*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct page *VAR_3, struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct gfs2_inode *VAR_6 = FUNC_2(VAR_5);
 struct gfs2_sbd *VAR_7 = FUNC_3(VAR_5);

 if (FUNC_4(VAR_3)) {
  FUNC_1(VAR_3);
  if (!FUNC_8(VAR_3)) {
   FUNC_5(VAR_3, VAR_5->i_sb->s_blocksize,
          FUNC_0(VAR_0)|FUNC_0(VAR_1));
  }
  FUNC_6(VAR_6, VAR_3, 0, VAR_7->sd_vfs->s_blocksize);
 }
 return FUNC_7(VAR_3, VAR_2, VAR_4);
}
