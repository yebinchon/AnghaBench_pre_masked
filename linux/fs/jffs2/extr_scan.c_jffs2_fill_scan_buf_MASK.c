
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_sb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,size_t,size_t,...) ;
 int FUNC_1 (struct jffs2_sb_info*,size_t,size_t,size_t*,void*) ;

__attribute__((used)) static int FUNC_2(struct jffs2_sb_info *VAR_1, void *VAR_2,
          uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4, &VAR_6, VAR_2);
 if (VAR_5) {
  FUNC_0(1, "mtd->read(0x%x bytes from 0x%x) returned %d\n",
     VAR_4, VAR_3, VAR_5);
  return VAR_5;
 }
 if (VAR_6 < VAR_4) {
  FUNC_0(1, "Read at 0x%x gave only 0x%zx bytes\n",
     VAR_3, VAR_6);
  return -VAR_0;
 }
 return 0;
}
