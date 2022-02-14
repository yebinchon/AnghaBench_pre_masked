
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {scalar_t__ wbuf_pagesize; } ;
struct jffs2_raw_inode {int dummy; } ;


 int FUNC_0 (struct jffs2_sb_info*) ;

__attribute__((used)) static inline int FUNC_1(struct jffs2_sb_info *VAR_0)
{
 uint32_t VAR_1 = 2 * sizeof(struct jffs2_raw_inode);




 return VAR_1;

}
