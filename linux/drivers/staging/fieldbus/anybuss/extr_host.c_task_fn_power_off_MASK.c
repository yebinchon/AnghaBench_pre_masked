
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int power_on; int ind_ab; int irq; struct anybuss_client* client; } ;
struct anybuss_client {int (* on_online_changed ) (struct anybuss_client*,int) ;} ;
struct ab_task {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct anybuss_host*) ;
 int FUNC_3 (struct anybuss_client*,int) ;

__attribute__((used)) static int FUNC_4(struct anybuss_host *VAR_1,
        struct ab_task *VAR_2)
{
 struct anybuss_client *VAR_3 = VAR_1->client;

 if (!VAR_1->power_on)
  return 0;
 FUNC_1(VAR_1->irq);
 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->ind_ab, VAR_0);
 if (VAR_3->on_online_changed)
  VAR_3->on_online_changed(VAR_3, 0);
 VAR_1->power_on = 0;
 return 0;
}
