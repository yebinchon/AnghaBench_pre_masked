
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ssb_pcicore {int dummy; } ;


 int FUNC_0 (struct ssb_pcicore*) ;
 int FUNC_1 (struct ssb_pcicore*,int const,int) ;
 int FUNC_2 (struct ssb_pcicore*,int const,int,int) ;

__attribute__((used)) static void FUNC_3(struct ssb_pcicore *VAR_0)
{
 const u8 VAR_1 = 0x1D;
 const u8 VAR_2 = 0x1F;
 u16 VAR_3;

 FUNC_2(VAR_0, VAR_2, 1 ,
       FUNC_0(VAR_0));
 VAR_3 = FUNC_1(VAR_0, VAR_1, 1 );
 if (VAR_3 & 0x4000)
  FUNC_2(VAR_0, VAR_1, 1, VAR_3 & ~0x4000);
}
