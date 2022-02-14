
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int oobsize; int writesize; } ;



__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = VAR_0->oobsize * 512 / VAR_0->writesize;

 if (VAR_1 < 26)
  return 4;
 else
  return 8;
}
