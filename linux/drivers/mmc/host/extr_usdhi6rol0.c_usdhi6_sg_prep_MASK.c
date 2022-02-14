
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usdhi6_host {TYPE_1__* sg; int offset; struct mmc_request* mrq; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {TYPE_1__* sg; int blocks; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct usdhi6_host*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct usdhi6_host *VAR_1)
{
 struct mmc_request *VAR_2 = VAR_1->mrq;
 struct mmc_data *VAR_3 = VAR_2->data;

 FUNC_0(VAR_1, VAR_0, VAR_3->blocks);

 VAR_1->sg = VAR_3->sg;

 VAR_1->offset = VAR_1->sg->offset;
}
