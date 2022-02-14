
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_pcicore {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_pcicore*,int const) ;
 int FUNC_2 (struct ssb_pcicore*,int const,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ssb_pcicore *VAR_0, u8 VAR_1)
{
 const u16 VAR_2 = 0x128;
 const u16 VAR_3 = 0x12C;
 u32 VAR_4;
 int VAR_5;

 VAR_4 = (1 << 30);
 VAR_4 |= (1 << 28);
 VAR_4 |= (1 << 17);
 VAR_4 |= (0x1F << 18);
 VAR_4 |= (VAR_1 << 4);
 FUNC_2(VAR_0, VAR_3, VAR_4);

 FUNC_3(10);
 for (VAR_5 = 0; VAR_5 < 200; VAR_5++) {
  VAR_4 = FUNC_1(VAR_0, VAR_2);
  if (VAR_4 & 0x100 )
   break;
  FUNC_0(1);
 }
}
