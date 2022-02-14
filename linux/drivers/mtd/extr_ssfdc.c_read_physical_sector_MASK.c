
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mtd_info*,int,size_t,size_t*,int *) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, uint8_t *VAR_3,
    int VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 loff_t VAR_7 = (loff_t)VAR_4 << VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_7, VAR_1, &VAR_6, VAR_3);
 if (VAR_5 < 0 || VAR_6 != VAR_1)
  return -1;

 return 0;
}
