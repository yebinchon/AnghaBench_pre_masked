
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int attributes; int attributes_mask; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_diskflags; int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct kstat*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_8(const struct path *VAR_9, struct kstat *VAR_10,
   u32 VAR_11, unsigned int VAR_12)
{
 struct inode *VAR_13 = FUNC_1(VAR_9->dentry);
 struct gfs2_inode *VAR_14 = FUNC_0(VAR_13);
 struct gfs2_holder VAR_15;
 u32 VAR_16;
 int VAR_17;

 FUNC_7(&VAR_15);
 if (FUNC_4(VAR_14->i_gl) == ((void*)0)) {
  VAR_17 = FUNC_5(VAR_14->i_gl, VAR_3, VAR_2, &VAR_15);
  if (VAR_17)
   return VAR_17;
 }

 VAR_16 = VAR_14->i_diskflags;
 if (VAR_16 & VAR_0)
  VAR_10->attributes |= VAR_4;
 if (VAR_16 & VAR_1)
  VAR_10->attributes |= VAR_7;

 VAR_10->attributes_mask |= (VAR_4 |
      VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_8);

 FUNC_2(VAR_13, VAR_10);

 if (FUNC_6(&VAR_15))
  FUNC_3(&VAR_15);

 return 0;
}
