
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(off_t VAR_1, off_t VAR_2)
{
 VAR_1 = VAR_1 & (VAR_0 - 1);
 VAR_2 = VAR_2 & (VAR_0 - 1);
 return !(VAR_1 == VAR_2);
}
