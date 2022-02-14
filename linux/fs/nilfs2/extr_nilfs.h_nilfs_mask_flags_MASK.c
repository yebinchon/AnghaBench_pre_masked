
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline __u32 FUNC_2(umode_t VAR_4, __u32 VAR_5)
{
 if (FUNC_0(VAR_4))
  return VAR_5;
 else if (FUNC_1(VAR_4))
  return VAR_5 & ~(VAR_0 | VAR_3);
 else
  return VAR_5 & (VAR_2 | VAR_1);
}
