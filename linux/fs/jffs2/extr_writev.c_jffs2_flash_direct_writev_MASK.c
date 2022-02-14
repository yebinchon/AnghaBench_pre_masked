
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kvec {int dummy; } ;
struct jffs2_sb_info {int mtd; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct jffs2_sb_info*,struct kvec const*,unsigned long,int ) ;
 int FUNC_3 (int ,struct kvec const*,unsigned long,scalar_t__,size_t*) ;

int FUNC_4(struct jffs2_sb_info *VAR_0, const struct kvec *VAR_1,
         unsigned long VAR_2, loff_t VAR_3, size_t *VAR_4)
{
 if (!FUNC_0(VAR_0)) {
  if (FUNC_1()) {
   int VAR_5;
   VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, (uint32_t) VAR_3);
   if (VAR_5) {
    return VAR_5;
   }
  }
 }

 return FUNC_3(VAR_0->mtd, VAR_1, VAR_2, VAR_3, VAR_4);
}
