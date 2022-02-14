
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int mp_aheight; } ;
struct iomap {int type; int flags; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (struct inode*,int ,int ,unsigned int,struct iomap*,struct metapath*) ;
 int FUNC_2 (struct inode*,int ,int ,unsigned int,struct iomap*,struct metapath*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct metapath*) ;
 int FUNC_7 (struct gfs2_inode*,struct iomap*,int) ;
 int FUNC_8 (struct gfs2_inode*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, loff_t VAR_6, loff_t VAR_7,
       unsigned VAR_8, struct iomap *VAR_9)
{
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_5);
 struct metapath VAR_11 = { .mp_aheight = 1, };
 int VAR_12;

 VAR_9->flags |= VAR_2;

 FUNC_8(VAR_10, VAR_6, VAR_7, VAR_8);
 if (FUNC_3(VAR_8)) {
  VAR_12 = FUNC_4(VAR_5);
  if (VAR_12)
   goto out;
 }

 VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, &VAR_11);
 if (VAR_12)
  goto out_unlock;

 switch(VAR_8 & (129 | 128)) {
 case 129:
  if (VAR_8 & VAR_1) {




   if (VAR_9->type != VAR_4)
    VAR_12 = -VAR_0;
   goto out_unlock;
  }
  break;
 case 128:
  if (VAR_9->type == VAR_3)
   goto out_unlock;
  break;
 default:
  goto out_unlock;
 }

 VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, &VAR_11);

out_unlock:
 if (VAR_12 && FUNC_3(VAR_8))
  FUNC_5(VAR_5);
 FUNC_6(&VAR_11);
out:
 FUNC_7(VAR_10, VAR_9, VAR_12);
 return VAR_12;
}
