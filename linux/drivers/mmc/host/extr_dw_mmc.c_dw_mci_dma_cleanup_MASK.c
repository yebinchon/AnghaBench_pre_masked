
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {scalar_t__ host_cookie; int sg_len; int sg; } ;
struct dw_mci {int dev; struct mmc_data* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_2(struct dw_mci *VAR_2)
{
 struct mmc_data *VAR_3 = VAR_2->data;

 if (VAR_3 && VAR_3->host_cookie == VAR_0) {
  FUNC_0(VAR_2->dev,
        VAR_3->sg,
        VAR_3->sg_len,
        FUNC_1(VAR_3));
  VAR_3->host_cookie = VAR_1;
 }
}
