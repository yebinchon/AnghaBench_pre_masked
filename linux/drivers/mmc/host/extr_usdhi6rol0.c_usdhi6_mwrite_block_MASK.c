
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usdhi6_host {scalar_t__ wait; TYPE_2__* mrq; } ;
struct TYPE_4__ {int stop; TYPE_1__* data; } ;
struct TYPE_3__ {int error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usdhi6_host*) ;
 int FUNC_1 (struct usdhi6_host*) ;

__attribute__((used)) static bool FUNC_2(struct usdhi6_host *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 < 0)
  return 0;

 FUNC_1(VAR_1);

 return !VAR_1->mrq->data->error &&
  (VAR_1->wait != VAR_0 || !VAR_1->mrq->stop);
}
