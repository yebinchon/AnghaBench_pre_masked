
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nand_oobinfo {scalar_t__** oobfree; int useecc; scalar_t__ eccbytes; scalar_t__* eccpos; } ;
struct mtd_oob_region {int length; scalar_t__ offset; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nand_oobinfo*,int ,int) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 int FUNC_3 (struct mtd_info*,int,struct mtd_oob_region*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_3, struct nand_oobinfo *VAR_4)
{
 struct mtd_oob_region VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->eccbytes = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->eccpos);) {
  u32 VAR_9;

  VAR_8 = FUNC_2(VAR_3, VAR_7++, &VAR_5);
  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_1)
    return VAR_8;

   break;
  }

  if (VAR_5.length + VAR_6 > FUNC_0(VAR_4->eccpos))
   return -VAR_0;

  VAR_9 = VAR_5.offset;
  for (; VAR_9 < VAR_5.offset + VAR_5.length; VAR_6++) {
   VAR_4->eccpos[VAR_6] = VAR_9++;
   VAR_4->eccbytes++;
  }
 }

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_8 = FUNC_3(VAR_3, VAR_6, &VAR_5);
  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_1)
    return VAR_8;

   break;
  }

  VAR_4->oobfree[VAR_6][0] = VAR_5.offset;
  VAR_4->oobfree[VAR_6][1] = VAR_5.length;
 }

 VAR_4->useecc = VAR_2;

 return 0;
}
