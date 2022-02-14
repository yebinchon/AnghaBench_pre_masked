
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int flags; int sg_len; int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct mmc_data *VAR_5 = VAR_4->data;

 if (VAR_5) {
  FUNC_0(FUNC_1(VAR_3), VAR_5->sg, VAR_5->sg_len,
        (VAR_5->flags & VAR_2) ?
        VAR_0 : VAR_1);
 }
}
