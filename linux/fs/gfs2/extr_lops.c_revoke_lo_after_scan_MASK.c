
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_jdesc {int jd_found_revokes; int jd_jid; int jd_inode; } ;


 struct gfs2_sbd* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int ,int ) ;
 int FUNC_2 (struct gfs2_jdesc*) ;

__attribute__((used)) static void FUNC_3(struct gfs2_jdesc *VAR_0, int VAR_1, int VAR_2)
{
 struct gfs2_sbd *VAR_3 = FUNC_0(VAR_0->jd_inode);

 if (VAR_1) {
  FUNC_2(VAR_0);
  return;
 }
 if (VAR_2 != 1)
  return;

 FUNC_1(VAR_3, "jid=%u: Found %u revoke tags\n",
         VAR_0->jd_jid, VAR_0->jd_found_revokes);

 FUNC_2(VAR_0);
}
