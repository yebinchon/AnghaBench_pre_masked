
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 unsigned char* FUNC_1 (struct mtd_info*,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, int VAR_1,
      unsigned char *VAR_2, int VAR_3,
      size_t VAR_4)
{
 unsigned char *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2, VAR_5 + VAR_3, VAR_4);
 return 0;
}
