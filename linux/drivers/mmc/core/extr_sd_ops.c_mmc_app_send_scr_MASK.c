
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mmc_request {struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_data {int blksz; int blocks; int sg_len; int error; struct scatterlist* sg; int flags; } ;
struct mmc_command {int flags; int error; scalar_t__ arg; int opcode; } ;
struct mmc_card {void** raw_scr; int host; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct mmc_card*) ;
 int FUNC_4 (struct mmc_data*,struct mmc_card*) ;
 int FUNC_5 (int ,struct mmc_request*) ;
 int FUNC_6 (struct scatterlist*,int *,int) ;

int FUNC_7(struct mmc_card *VAR_7)
{
 int VAR_8;
 struct mmc_request VAR_9 = {};
 struct mmc_command VAR_10 = {};
 struct mmc_data VAR_11 = {};
 struct scatterlist VAR_12;
 __be32 *VAR_13;



 VAR_8 = FUNC_3(VAR_7->host, VAR_7);
 if (VAR_8)
  return VAR_8;




 VAR_13 = FUNC_2(sizeof(VAR_7->raw_scr), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_9.cmd = &VAR_10;
 VAR_9.data = &VAR_11;

 VAR_10.opcode = VAR_6;
 VAR_10.arg = 0;
 VAR_10.flags = VAR_5 | VAR_4 | VAR_2;

 VAR_11.blksz = 8;
 VAR_11.blocks = 1;
 VAR_11.flags = VAR_3;
 VAR_11.sg = &VAR_12;
 VAR_11.sg_len = 1;

 FUNC_6(&VAR_12, VAR_13, 8);

 FUNC_4(&VAR_11, VAR_7);

 FUNC_5(VAR_7->host, &VAR_9);

 VAR_7->raw_scr[0] = FUNC_0(VAR_13[0]);
 VAR_7->raw_scr[1] = FUNC_0(VAR_13[1]);

 FUNC_1(VAR_13);

 if (VAR_10.error)
  return VAR_10.error;
 if (VAR_11.error)
  return VAR_11.error;

 return 0;
}
