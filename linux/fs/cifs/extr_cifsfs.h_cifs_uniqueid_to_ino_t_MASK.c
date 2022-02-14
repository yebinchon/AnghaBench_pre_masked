
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline ino_t
FUNC_1(u64 VAR_0)
{
 if ((sizeof(ino_t)) < (sizeof(u64)))
  return (ino_t)FUNC_0(VAR_0, (sizeof(ino_t) * 8) - 1) + 1;

 return (ino_t)VAR_0;

}
