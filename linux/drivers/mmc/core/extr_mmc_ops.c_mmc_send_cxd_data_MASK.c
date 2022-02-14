
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct mmc_request {struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {unsigned int blksz; int blocks; int sg_len; int timeout_clks; int error; scalar_t__ timeout_ns; struct scatterlist* sg; int flags; } ;
struct mmc_command {int flags; int error; scalar_t__ arg; scalar_t__ opcode; } ;
struct mmc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mmc_data*,struct mmc_card*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_2 (struct scatterlist*,void*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct mmc_card *VAR_6, struct mmc_host *VAR_7,
  u32 VAR_8, void *VAR_9, unsigned VAR_10)
{
 struct mmc_request VAR_11 = {};
 struct mmc_command VAR_12 = {};
 struct mmc_data VAR_13 = {};
 struct scatterlist VAR_14;

 VAR_11.cmd = &VAR_12;
 VAR_11.data = &VAR_13;

 VAR_12.opcode = VAR_8;
 VAR_12.arg = 0;






 VAR_12.flags = VAR_3 | VAR_2 | VAR_0;

 VAR_13.blksz = VAR_10;
 VAR_13.blocks = 1;
 VAR_13.flags = VAR_1;
 VAR_13.sg = &VAR_14;
 VAR_13.sg_len = 1;

 FUNC_2(&VAR_14, VAR_9, VAR_10);

 if (VAR_8 == VAR_5 || VAR_8 == VAR_4) {




  VAR_13.timeout_ns = 0;
  VAR_13.timeout_clks = 64;
 } else
  FUNC_0(&VAR_13, VAR_6);

 FUNC_1(VAR_7, &VAR_11);

 if (VAR_12.error)
  return VAR_12.error;
 if (VAR_13.error)
  return VAR_13.error;

 return 0;
}
