
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int dev; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {int host_cookie; int sg_len; int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_2(struct msdc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct mmc_data *VAR_4 = VAR_3->data;

 if (VAR_4->host_cookie & VAR_0)
  return;

 if (VAR_4->host_cookie & VAR_1) {
  FUNC_0(VAR_2->dev, VAR_4->sg, VAR_4->sg_len,
        FUNC_1(VAR_4));
  VAR_4->host_cookie &= ~VAR_1;
 }
}
