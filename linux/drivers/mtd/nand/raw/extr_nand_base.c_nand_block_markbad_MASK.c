
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_0, loff_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {

  if (VAR_2 > 0)
   return 0;
  return VAR_2;
 }

 return FUNC_2(FUNC_0(VAR_0), VAR_1);
}
