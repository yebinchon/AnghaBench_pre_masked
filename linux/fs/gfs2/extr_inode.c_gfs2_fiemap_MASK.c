
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct fiemap_extent_info {int dummy; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_holder*) ;
 int FUNC_2 (int ,int ,int ,struct gfs2_holder*) ;
 int VAR_1 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct fiemap_extent_info*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct fiemap_extent_info *VAR_3,
         u64 VAR_4, u64 VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_2);
 struct gfs2_holder VAR_7;
 int VAR_8;

 FUNC_3(VAR_2);

 VAR_8 = FUNC_2(VAR_6->i_gl, VAR_0, 0, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_1);

 FUNC_1(&VAR_7);

out:
 FUNC_4(VAR_2);
 return VAR_8;
}
