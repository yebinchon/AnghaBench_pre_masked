
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_xattr_bucket*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct inode*,int *,scalar_t__,scalar_t__,int*) ;
 int FUNC_5 (struct inode*,int *,struct ocfs2_xattr_bucket*,struct ocfs2_xattr_bucket*,scalar_t__,int,int*) ;
 int FUNC_6 (struct inode*,int *,scalar_t__,scalar_t__,scalar_t__,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned long long,unsigned long long,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0,
         handle_t *VAR_1,
         struct ocfs2_xattr_bucket *VAR_2,
         struct ocfs2_xattr_bucket *VAR_3,
         u64 VAR_4,
         u32 VAR_5,
         u32 *VAR_6,
         int *VAR_7)
{
 int VAR_8;

 FUNC_8(
   (unsigned long long)FUNC_1(VAR_2),
   (unsigned long long)VAR_4, VAR_5);

 if (FUNC_7(FUNC_0(VAR_0->i_sb)) > 1) {
  VAR_8 = FUNC_5(VAR_0,
         VAR_1,
         VAR_2, VAR_3,
         VAR_4,
         VAR_5,
         VAR_6);
  if (VAR_8)
   FUNC_2(VAR_8);
 } else {

  u64 VAR_9 = FUNC_1(VAR_2) +
   ((VAR_5 - 1) *
    FUNC_3(VAR_0->i_sb, 1));

  if (VAR_5 > 1 && FUNC_1(VAR_3) != VAR_9) {
   VAR_8 = FUNC_6(VAR_0, VAR_1,
           FUNC_1(VAR_2),
           VAR_9, VAR_4, 0,
           VAR_6);
   if (VAR_8)
    FUNC_2(VAR_8);
  } else {
   VAR_8 = FUNC_4(VAR_0, VAR_1,
        VAR_9, VAR_4,
        VAR_6);
   if (VAR_8)
    FUNC_2(VAR_8);

   if ((FUNC_1(VAR_3) == VAR_9) && VAR_7)
    *VAR_7 = 0;
  }
 }

 return VAR_8;
}
