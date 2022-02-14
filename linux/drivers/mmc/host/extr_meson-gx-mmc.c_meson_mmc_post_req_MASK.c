
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int sg_len; int sg; scalar_t__ sg_count; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct mmc_data*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0, struct mmc_request *VAR_1,
          int VAR_2)
{
 struct mmc_data *VAR_3 = VAR_1->data;

 if (VAR_3 && FUNC_1(VAR_3) && VAR_3->sg_count)
  FUNC_0(FUNC_2(VAR_0), VAR_3->sg, VAR_3->sg_len,
        FUNC_3(VAR_3));
}
