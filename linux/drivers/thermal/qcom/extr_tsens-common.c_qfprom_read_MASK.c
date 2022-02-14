
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_cell {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct nvmem_cell*) ;
 scalar_t__ FUNC_1 (struct nvmem_cell*) ;
 struct nvmem_cell* FUNC_2 (struct device*,char const*) ;
 int FUNC_3 (struct nvmem_cell*) ;
 char* FUNC_4 (struct nvmem_cell*,int *) ;

char *FUNC_5(struct device *VAR_0, const char *VAR_1)
{
 struct nvmem_cell *VAR_2;
 ssize_t VAR_3;
 char *VAR_4;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 FUNC_3(VAR_2);

 return VAR_4;
}
