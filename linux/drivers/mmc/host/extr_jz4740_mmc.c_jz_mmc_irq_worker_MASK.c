
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int stop; struct mmc_command* cmd; } ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; int flags; } ;
struct mmc_command {int flags; scalar_t__ error; struct mmc_data* data; } ;
struct jz4740_mmc_host {int state; int use_dma; struct mmc_request* req; } ;
typedef int irqreturn_t ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct jz4740_mmc_host*,int ) ;
 int FUNC_1 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_2 (struct jz4740_mmc_host*,struct mmc_command*) ;
 int FUNC_3 (struct jz4740_mmc_host*) ;
 int FUNC_4 (struct jz4740_mmc_host*,int ) ;
 int FUNC_5 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_6 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_7 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_8 (struct jz4740_mmc_host*,int ) ;
 int FUNC_9 (struct jz4740_mmc_host*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_6, void *VAR_7)
{
 struct jz4740_mmc_host *VAR_8 = (struct jz4740_mmc_host *)VAR_7;
 struct mmc_command *VAR_9 = VAR_8->req->cmd;
 struct mmc_request *VAR_10 = VAR_8->req;
 struct mmc_data *VAR_11 = VAR_9->data;
 bool VAR_12 = 0;

 if (VAR_9->error)
  VAR_8->state = 131;

 switch (VAR_8->state) {
 case 130:
  if (VAR_9->flags & VAR_5)
   FUNC_2(VAR_8, VAR_9);

  if (!VAR_11)
   break;

  FUNC_9(VAR_8);


 case 128:
  if (VAR_8->use_dma) {






   VAR_12 = FUNC_5(VAR_8, VAR_11);
   VAR_11->bytes_xfered = VAR_11->blocks * VAR_11->blksz;
  } else if (VAR_11->flags & VAR_3)





   VAR_12 = FUNC_1(VAR_8, VAR_11);
  else
   VAR_12 = FUNC_7(VAR_8, VAR_11);

  if (FUNC_11(VAR_12)) {
   VAR_8->state = 128;
   break;
  }

  FUNC_6(VAR_8, VAR_11);

  VAR_12 = FUNC_0(VAR_8, VAR_1);
  if (FUNC_11(VAR_12)) {
   VAR_8->state = 129;
   break;
  }
  FUNC_8(VAR_8, VAR_1);


 case 129:
  if (!VAR_10->stop)
   break;

  FUNC_4(VAR_8, VAR_10->stop);

  if (FUNC_10(VAR_10->stop) & VAR_4) {
   VAR_12 = FUNC_0(VAR_8,
            VAR_2);
   if (VAR_12) {
    VAR_8->state = 131;
    break;
   }
  }
 case 131:
  break;
 }

 if (!VAR_12)
  FUNC_3(VAR_8);

 return VAR_0;
}
