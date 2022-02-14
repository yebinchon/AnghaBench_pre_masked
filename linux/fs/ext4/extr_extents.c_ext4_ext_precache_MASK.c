
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_inode_info {int i_data_sem; } ;
struct ext4_ext_path {scalar_t__ p_idx; int p_hdr; struct buffer_head* p_bh; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int ,int,int ) ;
 int FUNC_8 (struct ext4_ext_path*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 struct ext4_ext_path* FUNC_15 (int,int,int ) ;
 int FUNC_16 (struct ext4_ext_path*) ;
 struct buffer_head* FUNC_17 (struct inode*,int ,int,int ) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct inode *VAR_5)
{
 struct ext4_inode_info *VAR_6 = FUNC_0(VAR_5);
 struct ext4_ext_path *VAR_7 = ((void*)0);
 struct buffer_head *VAR_8;
 int VAR_9 = 0, VAR_10, VAR_11 = 0;

 if (!FUNC_11(VAR_5, VAR_2))
  return 0;

 FUNC_6(&VAR_6->i_data_sem);
 VAR_10 = FUNC_13(VAR_5);

 VAR_7 = FUNC_15(VAR_10 + 1, sizeof(struct ext4_ext_path),
         VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_18(&VAR_6->i_data_sem);
  return -VAR_0;
 }


 if (VAR_10 == 0)
  goto out;
 VAR_7[0].p_hdr = FUNC_14(VAR_5);
 VAR_11 = FUNC_7(VAR_5, VAR_7[0].p_hdr, VAR_10, 0);
 if (VAR_11)
  goto out;
 VAR_7[0].p_idx = FUNC_1(VAR_7[0].p_hdr);
 while (VAR_9 >= 0) {




  if ((VAR_9 == VAR_10) ||
      VAR_7[VAR_9].p_idx > FUNC_2(VAR_7[VAR_9].p_hdr)) {
   FUNC_5(VAR_7[VAR_9].p_bh);
   VAR_7[VAR_9].p_bh = ((void*)0);
   VAR_9--;
   continue;
  }
  VAR_8 = FUNC_17(VAR_5,
         FUNC_9(VAR_7[VAR_9].p_idx++),
         VAR_10 - VAR_9 - 1,
         VAR_1);
  if (FUNC_3(VAR_8)) {
   VAR_11 = FUNC_4(VAR_8);
   break;
  }
  VAR_9++;
  VAR_7[VAR_9].p_bh = VAR_8;
  VAR_7[VAR_9].p_hdr = FUNC_12(VAR_8);
  VAR_7[VAR_9].p_idx = FUNC_1(VAR_7[VAR_9].p_hdr);
 }
 FUNC_10(VAR_5, VAR_3);
out:
 FUNC_18(&VAR_6->i_data_sem);
 FUNC_8(VAR_7);
 FUNC_16(VAR_7);
 return VAR_11;
}
