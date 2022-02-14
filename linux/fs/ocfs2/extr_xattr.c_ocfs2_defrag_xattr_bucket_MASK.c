
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct ocfs2_xattr_header {void* xh_count; void* xh_free_start; struct ocfs2_xattr_entry* xh_entries; void* xh_name_value_len; } ;
struct ocfs2_xattr_entry {void* xe_name_offset; } ;
struct ocfs2_xattr_bucket {int bu_blocks; } ;
struct inode {TYPE_1__* i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {size_t s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct ocfs2_xattr_bucket*) ;
 char* FUNC_1 (struct ocfs2_xattr_bucket*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (char*,int ,size_t) ;
 int FUNC_9 (int,char*,unsigned long long) ;
 int FUNC_10 (int) ;
 size_t FUNC_11 (struct ocfs2_xattr_entry*) ;
 int FUNC_12 (int *,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_13 (int *,struct ocfs2_xattr_bucket*) ;
 int FUNC_14 (char*,int,int,int ,int ) ;
 int VAR_6 ;
 int FUNC_15 (unsigned long long,int,size_t,int) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_7,
         handle_t *VAR_8,
         struct ocfs2_xattr_bucket *VAR_9)
{
 int VAR_10, VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 struct ocfs2_xattr_header *VAR_15;
 char *VAR_16, *VAR_17, *VAR_18 = ((void*)0);
 u64 VAR_19 = FUNC_0(VAR_9);
 u16 VAR_20;
 size_t VAR_21 = VAR_7->i_sb->s_blocksize;
 struct ocfs2_xattr_entry *VAR_22;







 VAR_18 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_18) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_17 = VAR_18;
 for (VAR_11 = 0; VAR_11 < VAR_9->bu_blocks; VAR_11++, VAR_17 += VAR_21)
  FUNC_6(VAR_17, FUNC_1(VAR_9, VAR_11), VAR_21);

 VAR_10 = FUNC_12(VAR_8, VAR_9,
      VAR_2);
 if (VAR_10 < 0) {
  FUNC_10(VAR_10);
  goto out;
 }

 VAR_15 = (struct ocfs2_xattr_header *)VAR_18;
 VAR_16 = (char *)VAR_15->xh_entries;
 VAR_20 = FUNC_5(VAR_15->xh_free_start);

 FUNC_15(
      (unsigned long long)VAR_19, FUNC_5(VAR_15->xh_count),
      VAR_20, FUNC_5(VAR_15->xh_name_value_len));






 FUNC_14(VAR_16, FUNC_5(VAR_15->xh_count),
      sizeof(struct ocfs2_xattr_entry),
      VAR_5, VAR_6);


 VAR_22 = VAR_15->xh_entries;
 VAR_12 = VAR_3;
 for (VAR_11 = 0; VAR_11 < FUNC_5(VAR_15->xh_count); VAR_11++, VAR_22++) {
  VAR_13 = FUNC_5(VAR_22->xe_name_offset);
  VAR_14 = FUNC_11(VAR_22);






  if (((VAR_12 - VAR_14) / VAR_21 !=
   (VAR_12 - 1) / VAR_21))
   VAR_12 = VAR_12 - VAR_12 % VAR_21;

  if (VAR_12 > VAR_13 + VAR_14) {
   FUNC_7(VAR_18 + VAR_12 - VAR_14,
    VAR_18 + VAR_13, VAR_14);
   VAR_22->xe_name_offset = FUNC_2(VAR_12 - VAR_14);
  }

  FUNC_9(VAR_12 < VAR_13 + VAR_14, "Defrag check failed for "
    "bucket %llu\n", (unsigned long long)VAR_19);

  VAR_12 -= VAR_14;
 }

 FUNC_9(VAR_20 > VAR_12, "Defrag check failed for "
   "bucket %llu\n", (unsigned long long)VAR_19);

 if (VAR_20 == VAR_12)
  goto out;

 FUNC_8(VAR_18 + VAR_20, 0, VAR_12 - VAR_20);
 VAR_15->xh_free_start = FUNC_2(VAR_12);


 FUNC_14(VAR_16, FUNC_5(VAR_15->xh_count),
      sizeof(struct ocfs2_xattr_entry),
      VAR_4, VAR_6);

 VAR_17 = VAR_18;
 for (VAR_11 = 0; VAR_11 < VAR_9->bu_blocks; VAR_11++, VAR_17 += VAR_21)
  FUNC_6(FUNC_1(VAR_9, VAR_11), VAR_17, VAR_21);
 FUNC_13(VAR_8, VAR_9);

out:
 FUNC_3(VAR_18);
 return VAR_10;
}
