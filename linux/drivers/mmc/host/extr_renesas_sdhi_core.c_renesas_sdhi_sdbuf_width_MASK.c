
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmio_mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct tmio_mmc_host*,int ) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_2, int VAR_3)
{
 u32 VAR_4;





 switch (FUNC_0(VAR_2, VAR_0)) {
 case 130:
  VAR_4 = (VAR_3 == 32) ? 0x0001 : 0x0000;
  break;
 case 131:
  VAR_4 = (VAR_3 == 32) ? 0x0000 : 0x0001;
  break;
 case 129:
 case 128:
  if (VAR_3 == 64)
   VAR_4 = 0x0000;
  else if (VAR_3 == 32)
   VAR_4 = 0x0101;
  else
   VAR_4 = 0x0001;
  break;
 default:

  return;
 }

 FUNC_1(VAR_2, VAR_1, VAR_4);
}
