
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_size; int i_mode; } ;
struct gfs2_inode {int dummy; } ;


 int FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;

int FUNC_9(struct inode *VAR_0, u64 VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 FUNC_0(!FUNC_2(VAR_0->i_mode));

 VAR_3 = FUNC_8(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_7(VAR_0);

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  goto out;

 if (VAR_1 >= VAR_0->i_size) {
  VAR_3 = FUNC_3(VAR_0, VAR_1);
  goto out;
 }

 VAR_3 = FUNC_4(VAR_0, VAR_1);
out:
 FUNC_6(VAR_2, ((void*)0));
 return VAR_3;
}
