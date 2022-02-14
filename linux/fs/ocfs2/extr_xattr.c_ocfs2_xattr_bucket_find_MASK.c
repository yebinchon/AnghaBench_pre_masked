
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_xattr_search {struct ocfs2_xattr_bucket* bucket; TYPE_1__* header; int * here; scalar_t__ base; scalar_t__ end; } ;
struct ocfs2_xattr_header {scalar_t__ xh_count; struct ocfs2_xattr_entry* xh_entries; scalar_t__ xh_num_buckets; } ;
struct ocfs2_xattr_entry {int xe_name_hash; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_6__ {int ip_blkno; } ;
struct TYPE_5__ {scalar_t__ s_blocksize; } ;
struct TYPE_4__ {int * xh_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct ocfs2_xattr_bucket*) ;
 scalar_t__ FUNC_2 (struct ocfs2_xattr_bucket*,int ) ;
 void* FUNC_3 (struct ocfs2_xattr_bucket*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct inode*,struct ocfs2_xattr_bucket*,int,char const*,int ,int*,int*) ;
 int FUNC_9 (struct ocfs2_xattr_bucket*,scalar_t__) ;
 int FUNC_10 (struct ocfs2_xattr_bucket*) ;
 struct ocfs2_xattr_bucket* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ocfs2_xattr_bucket*) ;
 int FUNC_13 (int ,char const*,int,int ,unsigned long long,int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_2,
       int VAR_3,
       const char *VAR_4,
       u32 VAR_5,
       u64 VAR_6,
       u32 VAR_7,
       u32 VAR_8,
       struct ocfs2_xattr_search *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 struct ocfs2_xattr_header *VAR_12 = ((void*)0);
 struct ocfs2_xattr_entry *VAR_13 = ((void*)0);
 u16 VAR_14 = 0;
 u16 VAR_15 = FUNC_7(VAR_2->i_sb);
 int VAR_16 = 0, VAR_17, VAR_18;
 struct ocfs2_xattr_bucket *VAR_19;
 u64 VAR_20, VAR_21 = 0;

 VAR_19 = FUNC_11(VAR_2);
 if (!VAR_19) {
  VAR_10 = -VAR_1;
  FUNC_6(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_9(VAR_19, VAR_6);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }

 VAR_12 = FUNC_3(VAR_19);
 VAR_18 = FUNC_4(VAR_12->xh_num_buckets) - 1;
 while (VAR_16 <= VAR_18) {
  FUNC_12(VAR_19);

  VAR_17 = (VAR_16 + VAR_18) / 2;
  VAR_20 = VAR_6 + VAR_17 * VAR_15;
  VAR_10 = FUNC_9(VAR_19, VAR_20);
  if (VAR_10) {
   FUNC_6(VAR_10);
   goto out;
  }

  VAR_12 = FUNC_3(VAR_19);
  VAR_13 = &VAR_12->xh_entries[0];
  if (VAR_5 < FUNC_5(VAR_13->xe_name_hash)) {
   VAR_18 = VAR_17 - 1;
   continue;
  }






  if (VAR_12->xh_count)
   VAR_13 = &VAR_12->xh_entries[FUNC_4(VAR_12->xh_count) - 1];


  VAR_21 = VAR_20;

  if (VAR_5 > FUNC_5(VAR_13->xe_name_hash)) {
   VAR_16 = VAR_17 + 1;
   continue;
  }


  VAR_10 = FUNC_8(VAR_2, VAR_19,
           VAR_3, VAR_4, VAR_5,
           &VAR_14, &VAR_11);
  if (VAR_10) {
   FUNC_6(VAR_10);
   goto out;
  }
  break;
 }






 if (!VAR_21)
  VAR_21 = VAR_6;


 VAR_10 = FUNC_9(VAR_9->bucket, VAR_21);
 if (VAR_10) {
  FUNC_6(VAR_10);
  goto out;
 }

 VAR_9->header = FUNC_3(VAR_9->bucket);
 VAR_9->base = FUNC_2(VAR_9->bucket, 0);
 VAR_9->end = VAR_9->base + VAR_2->i_sb->s_blocksize;

 if (VAR_11) {
  VAR_9->here = &VAR_9->header->xh_entries[VAR_14];
  FUNC_13(FUNC_0(VAR_2)->ip_blkno,
   VAR_4, VAR_3, VAR_5,
   (unsigned long long)FUNC_1(VAR_9->bucket),
   VAR_14);
 } else
  VAR_10 = -VAR_0;

out:
 FUNC_10(VAR_19);
 return VAR_10;
}
