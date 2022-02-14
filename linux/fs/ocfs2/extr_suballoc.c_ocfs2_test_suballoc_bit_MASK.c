
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_group_desc {scalar_t__ bg_bitmap; } ;
struct TYPE_2__ {int i_chain; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ,char*,unsigned long long,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_5 (scalar_t__,unsigned long*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (unsigned long long,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_super *VAR_2,
       struct inode *VAR_3,
       struct buffer_head *VAR_4,
       u64 VAR_5, u64 VAR_6,
       u16 VAR_7, int *VAR_8)
{
 struct ocfs2_dinode *VAR_9;
 struct ocfs2_group_desc *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 u64 VAR_12;
 int VAR_13;

 FUNC_7((unsigned long long)VAR_6,
          (unsigned int)VAR_7);

 VAR_9 = (struct ocfs2_dinode *)VAR_4->b_data;
 if ((VAR_7 + 1) > FUNC_3(&VAR_9->id2.i_chain)) {
  FUNC_1(VAR_1, "suballoc bit %u out of range of %u\n",
       (unsigned int)VAR_7,
       FUNC_3(&VAR_9->id2.i_chain));
  VAR_13 = -VAR_0;
  goto bail;
 }

 VAR_12 = VAR_5 ? VAR_5 :
     FUNC_6(VAR_6, VAR_7);
 VAR_13 = FUNC_4(VAR_3, VAR_9, VAR_12,
          &VAR_11);
 if (VAR_13 < 0) {
  FUNC_1(VAR_1, "read group %llu failed %d\n",
       (unsigned long long)VAR_12, VAR_13);
  goto bail;
 }

 VAR_10 = (struct ocfs2_group_desc *) VAR_11->b_data;
 *VAR_8 = FUNC_5(VAR_7, (unsigned long *)VAR_10->bg_bitmap);

bail:
 FUNC_0(VAR_11);

 if (VAR_13)
  FUNC_2(VAR_13);
 return VAR_13;
}
