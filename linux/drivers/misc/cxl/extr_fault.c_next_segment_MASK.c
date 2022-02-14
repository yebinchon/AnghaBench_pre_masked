
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_1, u64 VAR_2)
{
 if (VAR_2 & VAR_0)
  VAR_1 |= (1ULL << 40) - 1;
 else
  VAR_1 |= (1ULL << 28) - 1;

 return VAR_1 + 1;
}
