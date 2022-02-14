
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pfn_array {int pa_nr; int* pa_pfn; int member_0; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct pfn_array*,int,unsigned long) ;
 int FUNC_3 (struct pfn_array*,struct device*) ;
 int FUNC_4 (struct pfn_array*,struct device*) ;

__attribute__((used)) static long FUNC_5(struct device *VAR_2,
      void *VAR_3, u64 VAR_4,
      unsigned long VAR_5)
{
 struct pfn_array VAR_6 = {0};
 u64 VAR_7;
 int VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;

 VAR_9 = FUNC_2(&VAR_6, VAR_4, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_3(&VAR_6, VAR_2);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_6, VAR_2);
  return VAR_9;
 }

 VAR_10 = VAR_5;
 for (VAR_8 = 0; VAR_8 < VAR_6.pa_nr; VAR_8++) {
  VAR_7 = VAR_6.pa_pfn[VAR_8] << VAR_0;
  VAR_11 = VAR_1;
  if (VAR_8 == 0) {
   VAR_7 += VAR_4 & (VAR_1 - 1);
   VAR_11 -= VAR_4 & (VAR_1 - 1);
  }

  VAR_11 = FUNC_1(VAR_10, VAR_11);
  FUNC_0(VAR_3 + (VAR_5 - VAR_10), (void *)VAR_7, VAR_11);

  VAR_10 -= VAR_11;
  if (VAR_10 == 0)
   break;
 }

 FUNC_4(&VAR_6, VAR_2);

 return VAR_10;
}
