
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mtd_info*,unsigned long,unsigned long,size_t*,void**,int *) ;
 int FUNC_1 (struct mtd_info*,unsigned long,size_t) ;

unsigned long FUNC_2(struct mtd_info *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3, unsigned long VAR_4)
{
 size_t VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_3, VAR_2, &VAR_5, &VAR_6, ((void*)0));
 if (VAR_7)
  return VAR_7;
 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_1, VAR_3, VAR_5);
  return -VAR_0;
 }
 return (unsigned long)VAR_6;
}
