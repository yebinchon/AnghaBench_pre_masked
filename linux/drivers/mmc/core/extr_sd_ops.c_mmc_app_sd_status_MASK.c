
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mmc_request {struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_data {int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; int flags; } ;
struct mmc_command {int flags; int error; scalar_t__ arg; int opcode; } ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct mmc_card*) ;
 int FUNC_1 (struct mmc_data*,struct mmc_card*) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 int FUNC_3 (struct scatterlist*,void*,int) ;

int FUNC_4(struct mmc_card *VAR_5, void *VAR_6)
{
 int VAR_7;
 struct mmc_request VAR_8 = {};
 struct mmc_command VAR_9 = {};
 struct mmc_data VAR_10 = {};
 struct scatterlist VAR_11;



 VAR_7 = FUNC_0(VAR_5->host, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_8.cmd = &VAR_9;
 VAR_8.data = &VAR_10;

 VAR_9.opcode = VAR_4;
 VAR_9.arg = 0;
 VAR_9.flags = VAR_3 | VAR_2 | VAR_0;

 VAR_10.blksz = 64;
 VAR_10.blocks = 1;
 VAR_10.flags = VAR_1;
 VAR_10.sg = &VAR_11;
 VAR_10.sg_len = 1;

 FUNC_3(&VAR_11, VAR_6, 64);

 FUNC_1(&VAR_10, VAR_5);

 FUNC_2(VAR_5->host, &VAR_8);

 if (VAR_9.error)
  return VAR_9.error;
 if (VAR_10.error)
  return VAR_10.error;

 return 0;
}
