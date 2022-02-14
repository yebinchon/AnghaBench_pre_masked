
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct gfs2_leaf {int lf_depth; } ;
struct gfs2_inode {scalar_t__ i_depth; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int * FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct gfs2_inode*,size_t,size_t,scalar_t__,struct buffer_head*,int) ;

int FUNC_10(struct gfs2_inode *VAR_1)
{
 struct buffer_head *VAR_2;
 struct gfs2_leaf *VAR_3;
 u32 VAR_4, VAR_5;
 u32 VAR_6 = 0, VAR_7;
 __be64 *VAR_8;
 u64 VAR_9;
 int VAR_10 = 0, VAR_11;

 VAR_4 = FUNC_0(VAR_1->i_depth);

 VAR_8 = FUNC_8(VAR_1);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 while (VAR_6 < VAR_4) {
  VAR_9 = FUNC_4(VAR_8[VAR_6]);
  if (VAR_9) {
   VAR_10 = FUNC_6(VAR_1, VAR_9, &VAR_2);
   if (VAR_10)
    goto out;
   VAR_3 = (struct gfs2_leaf *)VAR_2->b_data;
   VAR_5 = FUNC_0(VAR_1->i_depth - FUNC_3(VAR_3->lf_depth));

   VAR_7 = (VAR_6 & ~(VAR_5 - 1)) + VAR_5;
   VAR_11 = ((VAR_7 >= VAR_4) ? 1 : 0);
   VAR_10 = FUNC_9(VAR_1, VAR_6, VAR_5, VAR_9, VAR_2,
          VAR_11);
   FUNC_5(VAR_2);
   if (VAR_10)
    goto out;
   VAR_6 = VAR_7;
  } else
   VAR_6++;
 }

 if (VAR_6 != VAR_4) {
  FUNC_7(VAR_1);
  VAR_10 = -VAR_0;
 }

out:

 return VAR_10;
}
