
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int lock; TYPE_1__* req; TYPE_3__* chip; struct memstick_host* msh; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct jmb38x_ms_host* FUNC_1 (int ,struct timer_list*,int ) ;
 struct jmb38x_ms_host* VAR_1 ;
 int FUNC_2 (struct memstick_host*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct jmb38x_ms_host *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct memstick_host *VAR_5 = VAR_4->msh;
 unsigned long VAR_6;

 FUNC_0(&VAR_4->chip->pdev->dev, "abort\n");
 FUNC_3(&VAR_4->lock, VAR_6);
 if (VAR_4->req) {
  VAR_4->req->error = -VAR_0;
  FUNC_2(VAR_5, 0);
 }
 FUNC_4(&VAR_4->lock, VAR_6);
}
