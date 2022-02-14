
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct apple_gmux_data {scalar_t__ iostart; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct apple_gmux_data *VAR_0)
{
 u16 VAR_1;

 FUNC_1(0xaa, VAR_0->iostart + 0xcc);
 FUNC_1(0x55, VAR_0->iostart + 0xcd);
 FUNC_1(0x00, VAR_0->iostart + 0xce);

 VAR_1 = FUNC_0(VAR_0->iostart + 0xcc) |
  (FUNC_0(VAR_0->iostart + 0xcd) << 8);

 if (VAR_1 == 0x55aa)
  return 1;

 return 0;
}
