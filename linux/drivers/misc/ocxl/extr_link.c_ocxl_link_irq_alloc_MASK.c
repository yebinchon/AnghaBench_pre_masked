
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocxl_link {int irq_available; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int *) ;

int FUNC_3(void *VAR_1, int *VAR_2, u64 *VAR_3)
{
 struct ocxl_link *VAR_4 = (struct ocxl_link *) VAR_1;
 int VAR_5, VAR_6;
 u64 VAR_7;

 if (FUNC_0(&VAR_4->irq_available) < 0)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_6, &VAR_7);
 if (VAR_5) {
  FUNC_1(&VAR_4->irq_available);
  return VAR_5;
 }

 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;
 return 0;
}
