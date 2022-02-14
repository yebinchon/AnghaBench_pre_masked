
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_davinci_host {scalar_t__ version; scalar_t__ data_dir; scalar_t__ bus_mode; int active_request; scalar_t__ bytes_left; scalar_t__ base; scalar_t__ do_dma; int * data; int mmc; struct mmc_command* cmd; } ;
struct mmc_command {int opcode; int arg; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;




 int FUNC_0 () ;
 int FUNC_1 (struct mmc_davinci_host*,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,struct mmc_davinci_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mmc_command*) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct mmc_davinci_host *VAR_29,
  struct mmc_command *VAR_30)
{
 u32 VAR_31 = 0;
 u32 VAR_32;

 FUNC_2(FUNC_4(VAR_29->mmc), "CMD%d, arg 0x%08x%s\n",
  VAR_30->opcode, VAR_30->arg,
  ({ char *VAR_33;
  switch (FUNC_5(VAR_30)) {
  case 131:
   VAR_33 = ", R1/R5/R6/R7 response";
   break;
  case 130:
   VAR_33 = ", R1b response";
   break;
  case 129:
   VAR_33 = ", R2 response";
   break;
  case 128:
   VAR_33 = ", R3/R4 response";
   break;
  default:
   VAR_33 = ", (R? response)";
   break;
  }; VAR_33; }));
 VAR_29->cmd = VAR_30;

 switch (FUNC_5(VAR_30)) {
 case 130:




  VAR_31 |= VAR_6;

 case 131:
  VAR_31 |= VAR_11;
  break;
 case 129:
  VAR_31 |= VAR_12;
  break;
 case 128:
  VAR_31 |= VAR_13;
  break;
 default:
  VAR_31 |= VAR_10;
  FUNC_2(FUNC_4(VAR_29->mmc), "unknown resp_type %04x\n",
   FUNC_5(VAR_30));
  break;
 }


 VAR_31 |= VAR_30->opcode;


 if (VAR_29->do_dma)
  VAR_31 |= VAR_7;

 if (VAR_29->version == VAR_25 && VAR_29->data != ((void*)0) &&
   VAR_29->data_dir == VAR_4)
  VAR_31 |= VAR_7;


 if (VAR_30->data)
  VAR_31 |= VAR_14;


 if (VAR_29->data_dir == VAR_5)
  VAR_31 |= VAR_8;

 if (VAR_29->bus_mode == VAR_24)
  VAR_31 |= VAR_9;


 FUNC_6(0x1FFF, VAR_29->base + VAR_3);


 VAR_32 = VAR_21 | VAR_16 | VAR_23;
 if (VAR_29->data_dir == VAR_5) {
  VAR_32 |= VAR_18 | VAR_17;

  if (!VAR_29->do_dma)
   VAR_32 |= VAR_20;
 } else if (VAR_29->data_dir == VAR_4) {
  VAR_32 |= VAR_18 | VAR_15 | VAR_22;

  if (!VAR_29->do_dma)
   VAR_32 |= VAR_19;
 }





 if (!VAR_29->do_dma && (VAR_29->data_dir == VAR_5))
  FUNC_1(VAR_29, VAR_28);

 FUNC_6(VAR_30->arg, VAR_29->base + VAR_0);
 FUNC_6(VAR_31, VAR_29->base + VAR_1);

 VAR_29->active_request = 1;

 if (!VAR_29->do_dma && VAR_29->bytes_left <= VAR_27) {
  u32 VAR_34 = VAR_26;

  while (VAR_29->active_request && VAR_34--) {
   FUNC_3(0, VAR_29);
   FUNC_0();
  }
 }

 if (VAR_29->active_request)
  FUNC_6(VAR_32, VAR_29->base + VAR_2);
}
