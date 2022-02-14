
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct cmac {int adapter; } ;


 int FUNC_0 (int ,unsigned int,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct cmac *VAR_0, unsigned int VAR_1, u64 *VAR_2)
{
 u32 VAR_3, VAR_4;

 FUNC_0(VAR_0->adapter, VAR_1, &VAR_3);
 VAR_4 = *VAR_2;
 *VAR_2 = *VAR_2 - VAR_4 + VAR_3;

 if (VAR_3 == 0)
  return;

 if (VAR_3 < VAR_4)
  *VAR_2 += (1ULL << 32);
}
