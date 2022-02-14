
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 struct inode* FUNC_7 (struct ocfs2_super*,int ,scalar_t__) ;
 int FUNC_8 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct ocfs2_super*,struct inode*,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__,int*) ;
 int FUNC_11 (unsigned long long) ;

int FUNC_12(struct ocfs2_super *VAR_3, u64 VAR_4, int *VAR_5)
{
 int VAR_6;
 u64 VAR_7 = 0;
 u16 VAR_8 = 0, VAR_9 = 0;
 struct inode *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);

 FUNC_11((unsigned long long)VAR_4);

 VAR_6 = FUNC_6(VAR_3, VAR_4, &VAR_9,
          &VAR_7, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_4(VAR_2, "get alloc slot and bit failed %d\n", VAR_6);
  goto bail;
 }

 VAR_10 =
  FUNC_7(VAR_3, VAR_1,
         VAR_9);
 if (!VAR_10) {


  VAR_6 = -VAR_0;
  FUNC_4(VAR_2, "unable to get alloc inode in slot %u\n",
       (u32)VAR_9);
  goto bail;
 }

 FUNC_1(VAR_10);
 VAR_6 = FUNC_8(VAR_10, &VAR_11, 0);
 if (VAR_6 < 0) {
  FUNC_2(VAR_10);
  FUNC_3(VAR_10);
  FUNC_4(VAR_2, "lock on alloc inode on slot %u failed %d\n",
       (u32)VAR_9, VAR_6);
  goto bail;
 }

 VAR_6 = FUNC_10(VAR_3, VAR_10, VAR_11,
      VAR_7, VAR_4, VAR_8, VAR_5);
 if (VAR_6 < 0)
  FUNC_4(VAR_2, "test suballoc bit failed %d\n", VAR_6);

 FUNC_9(VAR_10, 0);
 FUNC_2(VAR_10);

 FUNC_3(VAR_10);
 FUNC_0(VAR_11);
bail:
 if (VAR_6)
  FUNC_5(VAR_6);
 return VAR_6;
}
