
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_caching_info {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 struct ocfs2_caching_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (struct ocfs2_caching_info*,void*,struct buffer_head**,int *) ;
 int FUNC_9 (struct ocfs2_caching_info*,struct buffer_head*) ;
 struct buffer_head* FUNC_10 (int ,void*) ;
 int FUNC_11 (int ,int ,int ,int ) ;

int FUNC_12(handle_t *VAR_2,
        struct inode *VAR_3,
        u32 VAR_4, u32 VAR_5,
        u32 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 struct super_block *VAR_9 = VAR_3->i_sb;
 struct ocfs2_caching_info *VAR_10 = FUNC_0(VAR_3);
 int VAR_11, VAR_12 = FUNC_5(VAR_9, VAR_7);
 u64 VAR_13 = FUNC_5(VAR_9, VAR_5);
 u64 VAR_14 = FUNC_5(VAR_9, VAR_6);
 struct ocfs2_super *VAR_15 = FUNC_1(VAR_9);
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);

 FUNC_11(VAR_4, VAR_5,
            VAR_6, VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++, VAR_13++, VAR_14++) {
  VAR_17 = FUNC_10(VAR_15->sb, VAR_14);
  if (VAR_17 == ((void*)0)) {
   VAR_8 = -VAR_0;
   FUNC_4(VAR_8);
   break;
  }

  FUNC_9(VAR_10, VAR_17);

  VAR_8 = FUNC_8(VAR_10, VAR_13, &VAR_16, ((void*)0));
  if (VAR_8) {
   FUNC_4(VAR_8);
   break;
  }

  VAR_8 = FUNC_6(VAR_2, VAR_10, VAR_17,
        VAR_1);
  if (VAR_8) {
   FUNC_4(VAR_8);
   break;
  }

  FUNC_3(VAR_17->b_data, VAR_16->b_data, VAR_9->s_blocksize);
  FUNC_7(VAR_2, VAR_17);

  FUNC_2(VAR_17);
  FUNC_2(VAR_16);
  VAR_17 = ((void*)0);
  VAR_16 = ((void*)0);
 }

 FUNC_2(VAR_17);
 FUNC_2(VAR_16);
 return VAR_8;
}
