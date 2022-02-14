
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_eattr; } ;
struct gfs2_ea_location {int el_bh; int el_ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_inode*,int,char const*,struct gfs2_ea_location*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_ea_location*,void*,size_t) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, const char *VAR_4,
       void *VAR_5, size_t VAR_6, int VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_1(VAR_3);
 struct gfs2_ea_location VAR_9;
 int VAR_10;

 if (!VAR_8->i_eattr)
  return -VAR_1;
 if (FUNC_5(VAR_4) > VAR_2)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_4, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (!VAR_9.el_ea)
  return -VAR_1;
 if (VAR_6)
  VAR_10 = FUNC_4(VAR_8, &VAR_9, VAR_5, VAR_6);
 else
  VAR_10 = FUNC_0(VAR_9.el_ea);
 FUNC_2(VAR_9.el_bh);

 return VAR_10;
}
