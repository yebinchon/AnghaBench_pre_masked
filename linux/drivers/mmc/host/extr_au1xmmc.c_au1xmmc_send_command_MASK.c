
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_data {int flags; int blocks; } ;
struct mmc_command {int opcode; int arg; } ;
struct au1xmmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct au1xmmc_host*) ;
 int FUNC_1 (struct au1xmmc_host*) ;
 int FUNC_2 (struct au1xmmc_host*) ;
 int FUNC_3 (struct au1xmmc_host*,int ) ;
 int FUNC_4 (struct au1xmmc_host*,int ) ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct mmc_command*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct au1xmmc_host *VAR_15, int VAR_16,
    struct mmc_command *VAR_17, struct mmc_data *VAR_18)
{
 u32 VAR_19 = (VAR_17->opcode << VAR_3);

 switch (FUNC_7(VAR_17)) {
 case 132:
  break;
 case 131:
  VAR_19 |= VAR_9;
  break;
 case 130:
  VAR_19 |= VAR_10;
  break;
 case 129:
  VAR_19 |= VAR_11;
  break;
 case 128:
  VAR_19 |= VAR_12;
  break;
 default:
  FUNC_8("au1xmmc: unhandled response type %02x\n",
   FUNC_7(VAR_17));
  return -VAR_0;
 }

 if (VAR_18) {
  if (VAR_18->flags & VAR_1) {
   if (VAR_18->blocks > 1)
    VAR_19 |= VAR_7;
   else
    VAR_19 |= VAR_5;
  } else if (VAR_18->flags & VAR_2) {
   if (VAR_18->blocks > 1)
    VAR_19 |= VAR_6;
   else
    VAR_19 |= VAR_4;
  }
 }

 FUNC_6(VAR_17->arg, FUNC_1(VAR_15));
 FUNC_9();

 if (VAR_16)
  FUNC_3(VAR_15, VAR_13);

 FUNC_6((VAR_19 | VAR_8), FUNC_0(VAR_15));
 FUNC_9();


 while (FUNC_5(FUNC_0(VAR_15)) & VAR_8)
           ;


 if (VAR_16) {
  u32 VAR_20 = FUNC_5(FUNC_2(VAR_15));

  while (!(VAR_20 & VAR_14))
   VAR_20 = FUNC_5(FUNC_2(VAR_15));


  FUNC_6(VAR_14, FUNC_2(VAR_15));

  FUNC_4(VAR_15, VAR_13);
 }

 return 0;
}
