
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_eattr; } ;
struct gfs2_ea_location {int el_bh; int el_prev; int el_ea; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode*,struct gfs2_ea_location*) ;
 int FUNC_3 (struct gfs2_inode*,int ,int ,int ,int ) ;
 int FUNC_4 (struct gfs2_inode*,int,char const*,struct gfs2_ea_location*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_inode *VAR_1, int VAR_2, const char *VAR_3)
{
 struct gfs2_ea_location VAR_4;
 int VAR_5;

 if (!VAR_1->i_eattr)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;
 if (!VAR_4.el_ea)
  return -VAR_0;

 if (FUNC_0(VAR_4.el_ea))
  VAR_5 = FUNC_2(VAR_1, &VAR_4);
 else
  VAR_5 = FUNC_3(VAR_1, VAR_4.el_bh, VAR_4.el_ea, VAR_4.el_prev, 0);

 FUNC_1(VAR_4.el_bh);

 return VAR_5;
}
