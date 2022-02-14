
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_sbd {int sd_rgrps; } ;
struct gfs2_inode {int i_inode; } ;
typedef int skip ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static u32 FUNC_2(const struct gfs2_inode *VAR_0)
{
 const struct gfs2_sbd *VAR_1 = FUNC_0(&VAR_0->i_inode);
 u32 VAR_2;

 FUNC_1(&VAR_2, sizeof(VAR_2));
 return VAR_2 % VAR_1->sd_rgrps;
}
