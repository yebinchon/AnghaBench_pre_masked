
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_oob_region {int length; int offset; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_info*,int ,struct mtd_oob_region*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3 = 0;

 while (1) {
  struct mtd_oob_region VAR_4 = { };
  int VAR_5, VAR_6;

  VAR_5 = FUNC_1(VAR_1, VAR_3++, &VAR_4);
  if (VAR_5)
   break;

  if (!VAR_4.length || VAR_4.offset > 15 ||
      (VAR_4.offset + VAR_4.length) < 8)
   continue;

  VAR_6 = VAR_4.offset >= 8 ? VAR_4.offset : 8;
  for (; VAR_6 < VAR_4.offset + VAR_4.length && VAR_6 < 16; VAR_6++)
   VAR_2 |= FUNC_0(VAR_6 - 8);

  if (VAR_2 == 0xff)
   return 0;
 }

 return -VAR_0;
}
