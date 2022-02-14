
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int flash_size; int sector_size; } ;
struct jffs2_eraseblock {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct jffs2_sb_info *VAR_0)
{
 return ((VAR_0->flash_size / VAR_0->sector_size) * sizeof (struct jffs2_eraseblock)) > (128 * 1024);
}
