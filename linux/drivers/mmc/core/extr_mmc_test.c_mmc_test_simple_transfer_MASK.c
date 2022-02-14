
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_request {struct mmc_command* stop; struct mmc_data* data; struct mmc_command* cmd; } ;
struct mmc_data {int dummy; } ;
struct mmc_command {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct mmc_test_card*,struct mmc_request*) ;
 int FUNC_1 (struct mmc_test_card*,struct mmc_request*,struct scatterlist*,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_2 (struct mmc_test_card*) ;
 int FUNC_3 (int ,struct mmc_request*) ;

__attribute__((used)) static int FUNC_4(struct mmc_test_card *VAR_0,
 struct scatterlist *VAR_1, unsigned VAR_2, unsigned VAR_3,
 unsigned VAR_4, unsigned VAR_5, int VAR_6)
{
 struct mmc_request VAR_7 = {};
 struct mmc_command VAR_8 = {};
 struct mmc_command VAR_9 = {};
 struct mmc_data VAR_10 = {};

 VAR_7.cmd = &VAR_8;
 VAR_7.data = &VAR_10;
 VAR_7.stop = &VAR_9;

 FUNC_1(VAR_0, &VAR_7, VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5, VAR_6);

 FUNC_3(VAR_0->card->host, &VAR_7);

 FUNC_2(VAR_0);

 return FUNC_0(VAR_0, &VAR_7);
}
