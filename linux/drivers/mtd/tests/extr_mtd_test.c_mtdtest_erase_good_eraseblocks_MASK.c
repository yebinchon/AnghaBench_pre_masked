
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mtd_info*,unsigned int) ;

int FUNC_2(struct mtd_info *VAR_0, unsigned char *VAR_1,
    unsigned int VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  if (VAR_1[VAR_5])
   continue;
  VAR_4 = FUNC_1(VAR_0, VAR_2 + VAR_5);
  if (VAR_4)
   return VAR_4;
  FUNC_0();
 }

 return 0;
}
