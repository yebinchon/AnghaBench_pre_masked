
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_inode {void** i_hash_cache; int i_inode; int i_depth; } ;
struct buffer_head {int b_data; } ;
typedef void* __be64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void**) ;
 int VAR_2 ;
 int FUNC_2 (void**) ;
 int VAR_3 ;
 void** FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 void** FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct gfs2_inode*,char*,int ,int) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_10 (int *,int) ;
 void** FUNC_11 (int,int,int) ;
 int FUNC_12 (void**) ;

__attribute__((used)) static int FUNC_13(struct gfs2_inode *VAR_4)
{
 struct buffer_head *VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 __be64 *VAR_8;
 __be64 *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_6 = FUNC_0(VAR_4->i_depth);
 VAR_7 = VAR_6 * sizeof(__be64);

 VAR_8 = FUNC_6(VAR_4);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_9 = FUNC_11(VAR_7, 2, VAR_1 | VAR_3);
 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_3(VAR_7 * 2, VAR_1, VAR_2);

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = VAR_9;
 VAR_12 = FUNC_9(VAR_4, &VAR_5);
 if (VAR_12)
  goto out_kfree;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  *VAR_10++ = *VAR_8;
  *VAR_10++ = *VAR_8;
  VAR_8++;
 }

 VAR_12 = FUNC_8(VAR_4, (char *)VAR_9, 0, VAR_7 * 2);
 if (VAR_12 != (VAR_7 * 2))
  goto fail;

 FUNC_7(VAR_4);
 VAR_4->i_hash_cache = VAR_9;
 VAR_4->i_depth++;
 FUNC_5(VAR_4, VAR_5->b_data);
 FUNC_4(VAR_5);
 return 0;

fail:

 FUNC_8(VAR_4, (char *)VAR_8, 0, VAR_7);
 FUNC_10(&VAR_4->i_inode, VAR_7);
 FUNC_5(VAR_4, VAR_5->b_data);
 FUNC_4(VAR_5);
out_kfree:
 FUNC_12(VAR_9);
 return VAR_12;
}
