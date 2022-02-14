
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ibmvfc_host {int dev; } ;
struct ibmvfc_event {struct ibmvfc_host* vhost; } ;


 int FUNC_0 (int ,char*,struct ibmvfc_event*) ;
 struct ibmvfc_event* VAR_0 ;
 struct ibmvfc_event* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct ibmvfc_host*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct ibmvfc_event *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct ibmvfc_host *VAR_4 = VAR_3->vhost;
 FUNC_0(VAR_4->dev, "Command timed out (%p). Resetting connection\n", VAR_3);
 FUNC_2(VAR_4);
}
