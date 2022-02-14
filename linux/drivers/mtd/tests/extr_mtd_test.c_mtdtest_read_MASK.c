
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mtd_info*,int ,size_t,size_t*,void*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3, void *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5, VAR_4);

 if (FUNC_0(VAR_6))
  VAR_6 = 0;
 if (!VAR_6 && VAR_5 != VAR_3)
  VAR_6 = -VAR_0;
 if (VAR_6)
  FUNC_2("error: read failed at %#llx\n", VAR_2);

 return VAR_6;
}
