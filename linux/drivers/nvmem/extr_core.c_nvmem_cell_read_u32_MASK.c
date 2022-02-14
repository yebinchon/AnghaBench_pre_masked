
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void nvmem_cell ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,void*,int) ;
 void* FUNC_4 (struct device*,char const*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (void*,size_t*) ;

int FUNC_7(struct device *VAR_1, const char *VAR_2, u32 *VAR_3)
{
 struct nvmem_cell *VAR_4;
 void *VAR_5;
 size_t VAR_6;

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_6(VAR_4, &VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_4);
  return FUNC_1(VAR_5);
 }
 if (VAR_6 != sizeof(*VAR_3)) {
  FUNC_2(VAR_5);
  FUNC_5(VAR_4);
  return -VAR_0;
 }
 FUNC_3(VAR_3, VAR_5, sizeof(*VAR_3));

 FUNC_2(VAR_5);
 FUNC_5(VAR_4);
 return 0;
}
