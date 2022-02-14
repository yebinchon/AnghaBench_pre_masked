
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct mtd_info*,unsigned int) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(struct mtd_info *VAR_0, unsigned char *VAR_1,
     unsigned int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (!FUNC_2(VAR_0))
  return 0;

 FUNC_3("scanning for bad eraseblocks\n");
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  VAR_1[VAR_4] = FUNC_1(VAR_0, VAR_2 + VAR_4) ? 1 : 0;
  if (VAR_1[VAR_4])
   VAR_5 += 1;
  FUNC_0();
 }
 FUNC_3("scanned %d eraseblocks, %d are bad\n", VAR_4, VAR_5);

 return 0;
}
