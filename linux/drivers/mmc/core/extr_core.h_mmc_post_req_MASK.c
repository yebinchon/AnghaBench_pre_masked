
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int dummy; } ;
struct mmc_host {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* post_req ) (struct mmc_host*,struct mmc_request*,int) ;} ;


 int FUNC_0 (struct mmc_host*,struct mmc_request*,int) ;

__attribute__((used)) static inline void FUNC_1(struct mmc_host *VAR_0, struct mmc_request *VAR_1,
    int VAR_2)
{
 if (VAR_0->ops->post_req)
  VAR_0->ops->post_req(VAR_0, VAR_1, VAR_2);
}
