
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_test_card {int dummy; } ;
struct mmc_request {TYPE_3__* data; TYPE_2__* stop; TYPE_1__* cmd; } ;
struct TYPE_6__ {int error; int blocks; scalar_t__ bytes_xfered; scalar_t__ blksz; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_4__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_4,
 struct mmc_request *VAR_5)
{
 int VAR_6;

 if (FUNC_0(!VAR_5 || !VAR_5->cmd || !VAR_5->data))
  return -VAR_0;

 VAR_6 = 0;

 if (!VAR_6 && VAR_5->cmd->error)
  VAR_6 = VAR_5->cmd->error;
 if (!VAR_6 && VAR_5->data->error == 0)
  VAR_6 = VAR_2;
 if (!VAR_6 && VAR_5->data->error != -VAR_1)
  VAR_6 = VAR_5->data->error;
 if (!VAR_6 && VAR_5->stop && VAR_5->stop->error)
  VAR_6 = VAR_5->stop->error;
 if (VAR_5->data->blocks > 1) {
  if (!VAR_6 && VAR_5->data->bytes_xfered > VAR_5->data->blksz)
   VAR_6 = VAR_2;
 } else {
  if (!VAR_6 && VAR_5->data->bytes_xfered > 0)
   VAR_6 = VAR_2;
 }

 if (VAR_6 == -VAR_0)
  VAR_6 = VAR_3;

 return VAR_6;
}
