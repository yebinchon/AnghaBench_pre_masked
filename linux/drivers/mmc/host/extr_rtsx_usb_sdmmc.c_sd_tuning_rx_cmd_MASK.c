
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_usb_sdmmc {int dummy; } ;
struct mmc_command {int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtsx_usb_sdmmc*,int ,int ) ;
 int FUNC_1 (struct rtsx_usb_sdmmc*) ;
 int FUNC_2 (struct rtsx_usb_sdmmc*,struct mmc_command*,int,int *,int ,int) ;
 int FUNC_3 (struct rtsx_usb_sdmmc*) ;

__attribute__((used)) static int FUNC_4(struct rtsx_usb_sdmmc *VAR_1,
  u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct mmc_command VAR_5 = {};

 VAR_4 = FUNC_0(VAR_1, VAR_3, 0);
 if (VAR_4)
  return VAR_4;

 VAR_5.opcode = VAR_0;
 VAR_4 = FUNC_2(VAR_1, &VAR_5, 0x40, ((void*)0), 0, 100);
 if (VAR_4) {

  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  return VAR_4;
 }

 return 0;
}
