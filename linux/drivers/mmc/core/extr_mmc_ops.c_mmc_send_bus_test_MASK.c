
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mmc_request {struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; int flags; } ;
struct mmc_command {int opcode; int flags; int error; scalar_t__ arg; } ;
struct mmc_card {int dummy; } ;


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
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_data*,struct mmc_card*) ;
 int FUNC_5 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct scatterlist*,int*,int) ;

__attribute__((used)) static int
FUNC_8(struct mmc_card *VAR_11, struct mmc_host *VAR_12, u8 VAR_13,
    u8 VAR_14)
{
 struct mmc_request VAR_15 = {};
 struct mmc_command VAR_16 = {};
 struct mmc_data VAR_17 = {};
 struct scatterlist VAR_18;
 u8 *VAR_19;
 u8 *VAR_20;
 int VAR_21, VAR_22;
 static u8 VAR_23[8] = { 0x55, 0xaa, 0, 0, 0, 0, 0, 0 };
 static u8 VAR_24[4] = { 0x5a, 0, 0, 0 };




 VAR_19 = FUNC_1(VAR_14, VAR_3);
 if (!VAR_19)
  return -VAR_2;

 if (VAR_14 == 8)
  VAR_20 = VAR_23;
 else if (VAR_14 == 4)
  VAR_20 = VAR_24;
 else {
  FUNC_6("%s: Invalid bus_width %d\n",
         FUNC_3(VAR_12), VAR_14);
  FUNC_0(VAR_19);
  return -VAR_0;
 }

 if (VAR_13 == VAR_5)
  FUNC_2(VAR_19, VAR_20, VAR_14);

 VAR_15.cmd = &VAR_16;
 VAR_15.data = &VAR_17;
 VAR_16.opcode = VAR_13;
 VAR_16.arg = 0;






 VAR_16.flags = VAR_10 | VAR_9 | VAR_6;

 VAR_17.blksz = VAR_14;
 VAR_17.blocks = 1;
 if (VAR_13 == VAR_4)
  VAR_17.flags = VAR_7;
 else
  VAR_17.flags = VAR_8;

 VAR_17.sg = &VAR_18;
 VAR_17.sg_len = 1;
 FUNC_4(&VAR_17, VAR_11);
 FUNC_7(&VAR_18, VAR_19, VAR_14);
 FUNC_5(VAR_12, &VAR_15);
 VAR_22 = 0;
 if (VAR_13 == VAR_4) {
  for (VAR_21 = 0; VAR_21 < VAR_14 / 4; VAR_21++)
   if ((VAR_20[VAR_21] ^ VAR_19[VAR_21]) != 0xff) {
    VAR_22 = -VAR_1;
    break;
   }
 }
 FUNC_0(VAR_19);

 if (VAR_16.error)
  return VAR_16.error;
 if (VAR_17.error)
  return VAR_17.error;

 return VAR_22;
}
