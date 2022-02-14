
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const u8 *VAR_0)
{
 u64 VAR_1 = FUNC_1(FUNC_2(VAR_0)) >> 16;
 u64 VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  VAR_2 |= FUNC_0(VAR_4 * 6);

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_3 |= (FUNC_3(VAR_1 & (VAR_2 << VAR_4)) & 0x1) << VAR_4;

 return VAR_3;
}
