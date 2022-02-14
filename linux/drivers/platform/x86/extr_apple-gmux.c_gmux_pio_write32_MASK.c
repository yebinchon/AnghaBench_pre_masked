
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct apple_gmux_data {scalar_t__ iostart; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct apple_gmux_data *VAR_0, int VAR_1,
        u32 VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_4 = (VAR_2 >> (VAR_3 * 8)) & 0xff;
  FUNC_0(VAR_4, VAR_0->iostart + VAR_1 + VAR_3);
 }
}
