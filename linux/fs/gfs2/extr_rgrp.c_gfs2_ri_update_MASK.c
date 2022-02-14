
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_rindex_uptodate; } ;
struct gfs2_inode {int i_inode; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_0)
{
 struct gfs2_sbd *VAR_1 = FUNC_0(&VAR_0->i_inode);
 int VAR_2;

 do {
  VAR_2 = FUNC_1(VAR_0);
 } while (VAR_2 == 0);

 if (VAR_2 < 0)
  return VAR_2;

 FUNC_2(VAR_1);

 VAR_1->sd_rindex_uptodate = 1;
 return 0;
}
