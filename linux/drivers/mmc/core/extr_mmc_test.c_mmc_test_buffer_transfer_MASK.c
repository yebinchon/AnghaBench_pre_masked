
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_request {struct mmc_command* stop; struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_data {int error; } ;
struct mmc_command {int error; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct mmc_test_card*,struct mmc_request*,struct scatterlist*,int,unsigned int,int,unsigned int,int) ;
 int FUNC_1 (struct mmc_test_card*) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 int FUNC_3 (struct scatterlist*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mmc_test_card *VAR_0,
 u8 *VAR_1, unsigned VAR_2, unsigned VAR_3, int VAR_4)
{
 struct mmc_request VAR_5 = {};
 struct mmc_command VAR_6 = {};
 struct mmc_command VAR_7 = {};
 struct mmc_data VAR_8 = {};

 struct scatterlist VAR_9;

 VAR_5.cmd = &VAR_6;
 VAR_5.data = &VAR_8;
 VAR_5.stop = &VAR_7;

 FUNC_3(&VAR_9, VAR_1, VAR_3);

 FUNC_0(VAR_0, &VAR_5, &VAR_9, 1, VAR_2, 1, VAR_3, VAR_4);

 FUNC_2(VAR_0->card->host, &VAR_5);

 if (VAR_6.error)
  return VAR_6.error;
 if (VAR_8.error)
  return VAR_8.error;

 return FUNC_1(VAR_0);
}
