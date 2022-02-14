
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mmc_request {struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_data {int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; int flags; } ;
struct mmc_command {int arg; int flags; int error; int opcode; } ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_data*,struct mmc_card*) ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 (struct scatterlist*,int*,int) ;

int FUNC_3(struct mmc_card *VAR_5, int VAR_6, int VAR_7,
 u8 VAR_8, u8 *VAR_9)
{
 struct mmc_request VAR_10 = {};
 struct mmc_command VAR_11 = {};
 struct mmc_data VAR_12 = {};
 struct scatterlist VAR_13;



 VAR_6 = !!VAR_6;
 VAR_8 &= 0xF;

 VAR_10.cmd = &VAR_11;
 VAR_10.data = &VAR_12;

 VAR_11.opcode = VAR_4;
 VAR_11.arg = VAR_6 << 31 | 0x00FFFFFF;
 VAR_11.arg &= ~(0xF << (VAR_7 * 4));
 VAR_11.arg |= VAR_8 << (VAR_7 * 4);
 VAR_11.flags = VAR_3 | VAR_2 | VAR_0;

 VAR_12.blksz = 64;
 VAR_12.blocks = 1;
 VAR_12.flags = VAR_1;
 VAR_12.sg = &VAR_13;
 VAR_12.sg_len = 1;

 FUNC_2(&VAR_13, VAR_9, 64);

 FUNC_0(&VAR_12, VAR_5);

 FUNC_1(VAR_5->host, &VAR_10);

 if (VAR_11.error)
  return VAR_11.error;
 if (VAR_12.error)
  return VAR_12.error;

 return 0;
}
