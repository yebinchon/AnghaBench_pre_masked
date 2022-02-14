
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxcmci_host {int mmc; struct mmc_command* cmd; } ;
struct mmc_command {int flags; int* resp; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mxcmci_host*,int ) ;

__attribute__((used)) static void FUNC_3(struct mxcmci_host *VAR_8, unsigned int VAR_9)
{
 struct mmc_command *VAR_10 = VAR_8->cmd;
 int VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 if (!VAR_10)
  return;

 if (VAR_9 & VAR_7) {
  FUNC_0(FUNC_1(VAR_8->mmc), "CMD TIMEOUT\n");
  VAR_10->error = -VAR_1;
 } else if (VAR_9 & VAR_6 && VAR_10->flags & VAR_4) {
  FUNC_0(FUNC_1(VAR_8->mmc), "cmd crc error\n");
  VAR_10->error = -VAR_0;
 }

 if (VAR_10->flags & VAR_5) {
  if (VAR_10->flags & VAR_3) {
   for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
    VAR_12 = FUNC_2(VAR_8, VAR_2);
    VAR_13 = FUNC_2(VAR_8, VAR_2);
    VAR_10->resp[VAR_11] = VAR_12 << 16 | VAR_13;
   }
  } else {
   VAR_12 = FUNC_2(VAR_8, VAR_2);
   VAR_13 = FUNC_2(VAR_8, VAR_2);
   VAR_14 = FUNC_2(VAR_8, VAR_2);
   VAR_10->resp[0] = VAR_12 << 24 | VAR_13 << 8 | VAR_14 >> 8;
  }
 }
}
