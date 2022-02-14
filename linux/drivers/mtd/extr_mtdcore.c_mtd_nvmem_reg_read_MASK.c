
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,unsigned int,size_t,size_t*,void*) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, unsigned int VAR_3,
         void *VAR_4, size_t VAR_5)
{
 struct mtd_info *VAR_6 = VAR_2;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_3, VAR_5, &VAR_7, VAR_4);
 if (VAR_8 && VAR_8 != -VAR_1)
  return VAR_8;

 return VAR_7 == VAR_5 ? 0 : -VAR_0;
}
