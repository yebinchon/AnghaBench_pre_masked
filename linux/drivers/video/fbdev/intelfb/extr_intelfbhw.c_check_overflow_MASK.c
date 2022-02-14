
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline__ int FUNC_1(u32 VAR_0, u32 VAR_1,
         const char *VAR_2)
{
 if (VAR_0 > VAR_1) {
  FUNC_0("%s value %d exceeds limit %d\n",
   VAR_2, VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
