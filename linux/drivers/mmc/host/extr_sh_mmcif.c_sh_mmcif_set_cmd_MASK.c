
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_mmcif_host {int bus_width; int timing; } ;
struct mmc_request {struct mmc_command* cmd; struct mmc_data* data; } ;
struct mmc_data {int blocks; } ;
struct mmc_command {int opcode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;



 int VAR_17 ;





 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (struct sh_mmcif_host*,int ,int) ;
 struct device* FUNC_3 (struct sh_mmcif_host*) ;

__attribute__((used)) static u32 FUNC_4(struct sh_mmcif_host *VAR_23,
       struct mmc_request *VAR_24)
{
 struct device *VAR_25 = FUNC_3(VAR_23);
 struct mmc_data *VAR_26 = VAR_24->data;
 struct mmc_command *VAR_27 = VAR_24->cmd;
 u32 VAR_28 = VAR_27->opcode;
 u32 VAR_29 = 0;


 switch (FUNC_1(VAR_27)) {
 case 133:
  VAR_29 |= VAR_13;
  break;
 case 132:
 case 129:
  VAR_29 |= VAR_12;
  break;
 case 131:
  VAR_29 |= VAR_9 | VAR_12;
  break;
 case 130:
  VAR_29 |= VAR_11;
  break;
 default:
  FUNC_0(VAR_25, "Unsupported response type.\n");
  break;
 }


 if (VAR_26) {
  VAR_29 |= VAR_14;
  switch (VAR_23->bus_width) {
  case 136:
   VAR_29 |= VAR_5;
   break;
  case 135:
   VAR_29 |= VAR_6;
   break;
  case 134:
   VAR_29 |= VAR_7;
   break;
  default:
   FUNC_0(VAR_25, "Unsupported bus width.\n");
   break;
  }
  switch (VAR_23->timing) {
  case 128:







   VAR_29 |= VAR_4;
   break;
  }
 }

 if (VAR_28 == VAR_21 || VAR_28 == VAR_22)
  VAR_29 |= VAR_8;

 if (VAR_28 == VAR_17 || VAR_28 == VAR_22) {
  VAR_29 |= VAR_1 | VAR_0;
  FUNC_2(VAR_23, VAR_15,
    VAR_26->blocks << 16);
 }

 if (VAR_28 == VAR_20 || VAR_28 == VAR_16 ||
     VAR_28 == VAR_19 || VAR_28 == VAR_18)
  VAR_29 |= VAR_10;

 if (VAR_28 == VAR_20)
  VAR_29 |= VAR_2;

 if (VAR_28 == VAR_16 ||
  VAR_28 == VAR_19 || VAR_28 == VAR_18)
  VAR_29 |= VAR_3;

 return (VAR_28 << 24) | VAR_29;
}
