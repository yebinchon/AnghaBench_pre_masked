
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct NvRamType {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (unsigned long,int) ;

__attribute__((used)) static void FUNC_3(struct NvRamType *VAR_2, unsigned long VAR_3)
{
 u8 *VAR_4 = (u8 *)VAR_2;
 u8 VAR_5;


 FUNC_1((FUNC_0(VAR_3 + VAR_1) | VAR_0),
      VAR_3 + VAR_1);


 for (VAR_5 = 0; VAR_5 < 128; VAR_5++, VAR_4++)
  *VAR_4 = FUNC_2(VAR_3, VAR_5);


 FUNC_1((FUNC_0(VAR_3 + VAR_1) & ~VAR_0),
      VAR_3 + VAR_1);
}
