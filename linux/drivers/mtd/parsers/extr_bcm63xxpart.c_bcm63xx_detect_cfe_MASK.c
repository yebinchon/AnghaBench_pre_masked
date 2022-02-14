
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,int,size_t*,void*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2)
{
 char VAR_3[9];
 int VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1, 5, &VAR_5,
         (void *)VAR_3);
 VAR_3[VAR_5] = 0;

 if (VAR_4)
  return VAR_4;

 if (FUNC_1("cfe-v", VAR_3, 5) == 0)
  return 0;


 VAR_4 = FUNC_0(VAR_2, VAR_0, 8, &VAR_5,
         (void *)VAR_3);
 VAR_3[VAR_5] = 0;

 return FUNC_1("CFE1CFE1", VAR_3, 8);
}
