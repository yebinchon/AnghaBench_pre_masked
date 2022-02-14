
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ blkcnt_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline blkcnt_t FUNC_0(u64 VAR_1)
{
 blkcnt_t VAR_2 = (VAR_1 + 511) >> 9;
 return (VAR_2 > VAR_0) ? VAR_0 : VAR_2;
}
