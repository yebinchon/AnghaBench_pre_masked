
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,size_t,size_t*,void const*) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  const void *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5, VAR_4);
 if (!VAR_6 && VAR_5 != VAR_3)
  VAR_6 = -VAR_0;
 if (VAR_6)
  FUNC_1("error: write failed at %#llx\n", VAR_2);

 return VAR_6;
}
