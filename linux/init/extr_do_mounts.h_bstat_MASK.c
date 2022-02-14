
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kstat {int rdev; int mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,struct kstat*) ;

__attribute__((used)) static inline u32 FUNC_2(char *VAR_0)
{
 struct kstat VAR_1;
 if (FUNC_1(VAR_0, &VAR_1) != 0)
  return 0;
 if (!FUNC_0(VAR_1.mode))
  return 0;
 return VAR_1.rdev;
}
