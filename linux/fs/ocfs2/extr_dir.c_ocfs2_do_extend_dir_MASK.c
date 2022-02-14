
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_clusters; int ip_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,struct inode*,int*,int,int ,struct buffer_head*,int *,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,int *) ;
 int FUNC_8 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (struct inode*,int ,int *,int *,int *) ;
 struct buffer_head* FUNC_11 (struct super_block*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_2,
          handle_t *VAR_3,
          struct inode *VAR_4,
          struct buffer_head *VAR_5,
          struct ocfs2_alloc_context *VAR_6,
          struct ocfs2_alloc_context *VAR_7,
          struct buffer_head **VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11 = 0;
 u64 VAR_12, VAR_13;

 FUNC_12(&FUNC_1(VAR_4)->ip_lock);
 VAR_10 = (FUNC_5(VAR_4) == FUNC_9(VAR_2, FUNC_1(VAR_4)->ip_clusters));
 FUNC_13(&FUNC_1(VAR_4)->ip_lock);

 if (VAR_10) {
  u32 VAR_14 = FUNC_1(VAR_4)->ip_clusters;

  VAR_9 = FUNC_3(VAR_4,
     FUNC_9(VAR_2, 1));
  if (VAR_9)
   goto bail;
  VAR_11 = 1;

  VAR_9 = FUNC_7(FUNC_2(VAR_2), VAR_4, &VAR_14,
           1, 0, VAR_5, VAR_3,
           VAR_6, VAR_7, ((void*)0));
  FUNC_0(VAR_9 == -VAR_0);
  if (VAR_9 < 0) {
   FUNC_6(VAR_9);
   goto bail;
  }
 }

 VAR_13 = FUNC_8(VAR_2, FUNC_5(VAR_4));
 VAR_9 = FUNC_10(VAR_4, VAR_13, &VAR_12, ((void*)0), ((void*)0));
 if (VAR_9 < 0) {
  FUNC_6(VAR_9);
  goto bail;
 }

 *VAR_8 = FUNC_11(VAR_2, VAR_12);
 if (!*VAR_8) {
  VAR_9 = -VAR_1;
  FUNC_6(VAR_9);
  goto bail;
 }
 VAR_9 = 0;
bail:
 if (VAR_11 && VAR_9 < 0)
  FUNC_4(VAR_4, FUNC_9(VAR_2, 1));
 return VAR_9;
}
