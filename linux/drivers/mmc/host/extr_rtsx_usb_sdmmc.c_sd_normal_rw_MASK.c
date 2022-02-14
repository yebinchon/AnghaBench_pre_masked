
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_usb_sdmmc {scalar_t__ initial_mode; } ;
struct mmc_request {struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_data {int flags; scalar_t__ blksz; int sg_len; int sg; } ;
struct mmc_command {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct rtsx_usb_sdmmc*) ;
 int FUNC_3 (struct rtsx_usb_sdmmc*) ;
 int FUNC_4 (struct rtsx_usb_sdmmc*,struct mmc_command*,int ,int *,scalar_t__,int) ;
 int FUNC_5 (struct rtsx_usb_sdmmc*,struct mmc_command*,int ,int *,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int *,scalar_t__) ;
 int FUNC_7 (int ,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct rtsx_usb_sdmmc *VAR_3,
  struct mmc_request *VAR_4)
{
 struct mmc_command *VAR_5 = VAR_4->cmd;
 struct mmc_data *VAR_6 = VAR_4->data;
 u8 *VAR_7;

 VAR_7 = FUNC_1(VAR_6->blksz, VAR_1);
 if (!VAR_7) {
  VAR_5->error = -VAR_0;
  return;
 }

 if (VAR_6->flags & VAR_2) {
  if (VAR_3->initial_mode)
   FUNC_2(VAR_3);

  VAR_5->error = FUNC_4(VAR_3, VAR_5, (u16)VAR_6->blksz, VAR_7,
    VAR_6->blksz, 200);

  if (VAR_3->initial_mode)
   FUNC_3(VAR_3);

  FUNC_6(VAR_6->sg, VAR_6->sg_len, VAR_7, VAR_6->blksz);
 } else {
  FUNC_7(VAR_6->sg, VAR_6->sg_len, VAR_7, VAR_6->blksz);

  VAR_5->error = FUNC_5(VAR_3, VAR_5, (u16)VAR_6->blksz, VAR_7,
    VAR_6->blksz, 200);
 }

 FUNC_0(VAR_7);
}
