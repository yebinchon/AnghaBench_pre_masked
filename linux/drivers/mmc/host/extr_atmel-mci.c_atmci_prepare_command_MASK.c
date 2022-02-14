
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ bus_mode; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct mmc_data {int blocks; int flags; } ;
struct mmc_command {scalar_t__ opcode; int flags; struct mmc_data* data; int error; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static u32 FUNC_1(struct mmc_host *VAR_15,
     struct mmc_command *VAR_16)
{
 struct mmc_data *VAR_17;
 u32 VAR_18;

 VAR_16->error = -VAR_9;

 VAR_18 = FUNC_0(VAR_16->opcode);

 if (VAR_16->flags & VAR_13) {
  if (VAR_16->flags & VAR_12)
   VAR_18 |= VAR_4;
  else
   VAR_18 |= VAR_5;
 }






 VAR_18 |= VAR_1;

 if (VAR_15->ios.bus_mode == VAR_10)
  VAR_18 |= VAR_3;

 VAR_17 = VAR_16->data;
 if (VAR_17) {
  VAR_18 |= VAR_7;

  if (VAR_16->opcode == VAR_14) {
   VAR_18 |= VAR_6;
  } else {
   if (VAR_17->blocks > 1)
    VAR_18 |= VAR_2;
   else
    VAR_18 |= VAR_0;
  }

  if (VAR_17->flags & VAR_11)
   VAR_18 |= VAR_8;
 }

 return VAR_18;
}
