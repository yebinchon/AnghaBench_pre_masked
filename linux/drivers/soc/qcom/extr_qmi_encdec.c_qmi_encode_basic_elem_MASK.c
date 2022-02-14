
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (void*,void const*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const void *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(VAR_0, VAR_1, VAR_3);
  VAR_5 += VAR_3;
 }

 return VAR_5;
}
