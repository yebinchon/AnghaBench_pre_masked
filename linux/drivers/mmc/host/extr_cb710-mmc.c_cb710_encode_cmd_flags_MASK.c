
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mmc_command {unsigned int flags; int opcode; TYPE_1__* data; } ;
struct cb710_mmc_reader {int dummy; } ;
struct TYPE_2__ {int flags; } ;


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




 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;

__attribute__((used)) static u16 FUNC_0(struct cb710_mmc_reader *VAR_16,
 struct mmc_command *VAR_17)
{
 unsigned int VAR_18 = VAR_17->flags;
 u16 VAR_19 = 0;
 switch (VAR_18 & VAR_10) {
 case 131: VAR_19 = VAR_0; break;
 case 130: VAR_19 = VAR_1; break;
 case 129: VAR_19 = VAR_2; break;
 case 128: VAR_19 = VAR_3; break;
 }

 if (VAR_18 & VAR_13)
  VAR_19 |= VAR_7;

 VAR_19 |= VAR_17->opcode << VAR_4;

 if (VAR_17->data && (VAR_17->data->flags & VAR_11))
  VAR_19 |= VAR_5;

 if (VAR_18 & VAR_15) {
  VAR_19 |= VAR_9;

  if (VAR_18 & VAR_12)
   VAR_19 |= VAR_6;
  if (!(VAR_18 & VAR_14))
   VAR_19 |= VAR_8;
 }

 return VAR_19;
}
