
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_jdesc {int jd_found_blocks; int jd_replayed_blocks; int jd_jid; int jd_inode; } ;
struct gfs2_inode {int i_gl; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_sbd*,char*,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gfs2_jdesc *VAR_0, int VAR_1, int VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_0->jd_inode);
 struct gfs2_sbd *VAR_4 = FUNC_1(VAR_0->jd_inode);

 if (VAR_1) {
  FUNC_3(VAR_3->i_gl);
  return;
 }
 if (VAR_2 != 1)
  return;

 FUNC_3(VAR_3->i_gl);

 FUNC_2(VAR_4, "jid=%u: Replayed %u of %u blocks\n",
         VAR_0->jd_jid, VAR_0->jd_replayed_blocks, VAR_0->jd_found_blocks);
}
