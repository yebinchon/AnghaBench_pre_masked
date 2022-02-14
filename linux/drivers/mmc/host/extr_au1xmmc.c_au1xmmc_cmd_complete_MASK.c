
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_command {int flags; int* resp; int error; } ;
struct au1xmmc_host {int flags; int status; int finish_task; scalar_t__ iobase; struct mmc_request* mrq; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct au1xmmc_host*) ;
 int VAR_5 ;
 int FUNC_2 (struct au1xmmc_host*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct au1xmmc_host *VAR_20, u32 VAR_21)
{
 struct mmc_request *VAR_22 = VAR_20->mrq;
 struct mmc_command *VAR_23;
 u32 VAR_24[4];
 int VAR_25, VAR_26;

 if (!VAR_20->mrq)
  return;

 VAR_23 = VAR_22->cmd;
 VAR_23->error = 0;

 if (VAR_23->flags & VAR_7) {
  if (VAR_23->flags & VAR_6) {
   VAR_24[0] = FUNC_3(VAR_20->iobase + VAR_14);
   VAR_24[1] = FUNC_3(VAR_20->iobase + VAR_13);
   VAR_24[2] = FUNC_3(VAR_20->iobase + VAR_12);
   VAR_24[3] = FUNC_3(VAR_20->iobase + VAR_11);





   for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {
    VAR_23->resp[VAR_25] = (VAR_24[VAR_25] & 0x00FFFFFF) << 8;
    if (VAR_25 != 3)
     VAR_23->resp[VAR_25] |= (VAR_24[VAR_25 + 1] & 0xFF000000) >> 24;
   }
  } else {







   VAR_23->resp[0] = FUNC_3(VAR_20->iobase + VAR_11);
  }
 }


 if (VAR_21 & (VAR_18 | VAR_19 | VAR_17))
  VAR_23->error = -VAR_0;

 VAR_26 = VAR_20->flags & (VAR_4 | VAR_3);

 if (!VAR_26 || VAR_23->error) {
  FUNC_2(VAR_20, VAR_10 | VAR_8 | VAR_9);
  FUNC_5(&VAR_20->finish_task);
  return;
 }

 VAR_20->status = VAR_5;

 if ((VAR_20->flags & (VAR_2 | VAR_1))) {
  u32 VAR_27 = FUNC_0(VAR_20);



  if (VAR_20->flags & VAR_3) {
   u32 VAR_28 = VAR_15 | VAR_16;

   while((VAR_21 & VAR_28) != VAR_28)
    VAR_21 = FUNC_3(FUNC_1(VAR_20));
  }

  FUNC_4(VAR_27);
 }
}
