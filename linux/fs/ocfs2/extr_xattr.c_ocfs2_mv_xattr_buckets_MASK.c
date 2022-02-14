
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_4__ {TYPE_1__* xh_entries; int xh_num_buckets; } ;
struct TYPE_3__ {int xe_name_hash; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct ocfs2_xattr_bucket*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct ocfs2_xattr_bucket*,scalar_t__) ;
 int FUNC_11 (struct ocfs2_xattr_bucket*) ;
 int FUNC_12 (int *,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_13 (int *,struct ocfs2_xattr_bucket*) ;
 struct ocfs2_xattr_bucket* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ocfs2_super*) ;
 int FUNC_16 (unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_2, handle_t *VAR_3,
      u64 VAR_4, u64 VAR_5, u64 VAR_6,
      unsigned int VAR_7,
      u32 *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct ocfs2_super *VAR_12 = FUNC_1(VAR_2->i_sb);
 int VAR_13 = FUNC_7(VAR_2->i_sb);
 int VAR_14 = FUNC_15(VAR_12);
 struct ocfs2_xattr_bucket *VAR_15, *VAR_16;

 FUNC_16((unsigned long long)VAR_5,
         (unsigned long long)VAR_6);

 FUNC_0(VAR_7 >= VAR_14);
 if (VAR_7) {
  VAR_14 -= VAR_7;
  VAR_5 += (VAR_7 * VAR_13);
 }


 VAR_15 = FUNC_14(VAR_2);

 VAR_16 = FUNC_14(VAR_2);
 if (!VAR_15 || !VAR_16) {
  VAR_10 = -VAR_0;
  FUNC_6(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_10(VAR_15, VAR_4);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }





 VAR_11 = ((VAR_14 + 1) * VAR_13);
 VAR_10 = FUNC_9(VAR_3, VAR_11);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_12(VAR_3, VAR_15,
      VAR_1);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }

 for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
  VAR_10 = FUNC_8(VAR_2, VAR_3,
         VAR_5 + (VAR_9 * VAR_13),
         VAR_6 + (VAR_9 * VAR_13),
         1);
  if (VAR_10) {
   FUNC_6(VAR_10);
   goto out;
  }
 }






 VAR_10 = FUNC_10(VAR_16, VAR_6);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }
 VAR_10 = FUNC_12(VAR_3, VAR_16,
      VAR_1);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }


 FUNC_4(&FUNC_2(VAR_15)->xh_num_buckets, -VAR_14);
 FUNC_13(VAR_3, VAR_15);

 FUNC_2(VAR_16)->xh_num_buckets = FUNC_3(VAR_14);
 FUNC_13(VAR_3, VAR_16);

 if (VAR_8)
  *VAR_8 = FUNC_5(FUNC_2(VAR_16)->xh_entries[0].xe_name_hash);

out:
 FUNC_11(VAR_16);
 FUNC_11(VAR_15);
 return VAR_10;
}
