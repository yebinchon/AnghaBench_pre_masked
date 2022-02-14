
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int cmd; scalar_t__ sbc; TYPE_1__* data; } ;
struct mmc_host {int dummy; } ;
struct meson_host {scalar_t__ regs; } ;
struct TYPE_2__ {int host_cookie; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*,int ) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_4 (struct mmc_host*,int ) ;
 struct meson_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct meson_host *VAR_4 = FUNC_5(VAR_2);
 bool VAR_5 = VAR_3->data &&
   !(VAR_3->data->host_cookie & VAR_0);

 if (VAR_5) {
  FUNC_1(VAR_2, VAR_3);
  if (!FUNC_0(VAR_3->data))
   VAR_5 = 0;
 }

 if (VAR_5)
  FUNC_3(VAR_2, VAR_3);


 FUNC_6(0, VAR_4->regs + VAR_1);

 FUNC_4(VAR_2, VAR_3->sbc ?: VAR_3->cmd);

 if (VAR_5)
  FUNC_2(VAR_2, VAR_3, 0);
}
