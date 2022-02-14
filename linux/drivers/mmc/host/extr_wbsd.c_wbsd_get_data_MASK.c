
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wbsd_host {TYPE_1__* mrq; } ;
struct mmc_data {int dummy; } ;
struct TYPE_4__ {struct mmc_data* data; } ;
struct TYPE_3__ {TYPE_2__* cmd; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct mmc_data *FUNC_1(struct wbsd_host *VAR_0)
{
 FUNC_0(!VAR_0->mrq);
 if (!VAR_0->mrq)
  return ((void*)0);

 FUNC_0(!VAR_0->mrq->cmd);
 if (!VAR_0->mrq->cmd)
  return ((void*)0);

 FUNC_0(!VAR_0->mrq->cmd->data);
 if (!VAR_0->mrq->cmd->data)
  return ((void*)0);

 return VAR_0->mrq->cmd->data;
}
