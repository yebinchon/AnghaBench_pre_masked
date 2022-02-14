
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_caching_info*,int ,int,struct buffer_head**,int ,int (*) (struct super_block*,struct buffer_head*)) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline int FUNC_2(struct ocfs2_caching_info *VAR_1, u64 VAR_2,
       struct buffer_head **VAR_3,
       int (*VAR_4)(struct super_block *VAR_5,
         struct buffer_head *VAR_6))
{
 int VAR_7 = 0;

 if (VAR_3 == ((void*)0)) {
  FUNC_1("ocfs2: bh == NULL\n");
  VAR_7 = -VAR_0;
  goto bail;
 }

 VAR_7 = FUNC_0(VAR_1, VAR_2, 1, VAR_3, 0, VAR_4);

bail:
 return VAR_7;
}
