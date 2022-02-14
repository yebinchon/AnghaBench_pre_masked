
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nand_ecclayout_user {TYPE_1__* oobfree; int oobavail; scalar_t__ eccbytes; scalar_t__* eccpos; } ;
struct mtd_oob_region {scalar_t__ offset; scalar_t__ length; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nand_ecclayout_user*,int ,int) ;
 int FUNC_1 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 int FUNC_2 (struct mtd_info*,int,struct mtd_oob_region*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_4,
       struct nand_ecclayout_user *VAR_5)
{
 struct mtd_oob_region VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9;

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->eccbytes = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2;) {
  u32 VAR_10;

  VAR_9 = FUNC_1(VAR_4, VAR_8++, &VAR_6);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_1)
    return VAR_9;

   break;
  }

  VAR_10 = VAR_6.offset;
  for (; VAR_7 < VAR_2 &&
         VAR_10 < VAR_6.offset + VAR_6.length; VAR_7++) {
   VAR_5->eccpos[VAR_7] = VAR_10++;
   VAR_5->eccbytes++;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_9 = FUNC_2(VAR_4, VAR_7, &VAR_6);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_1)
    return VAR_9;

   break;
  }

  VAR_5->oobfree[VAR_7].offset = VAR_6.offset;
  VAR_5->oobfree[VAR_7].length = VAR_6.length;
  VAR_5->oobavail += VAR_5->oobfree[VAR_7].length;
 }

 return 0;
}
