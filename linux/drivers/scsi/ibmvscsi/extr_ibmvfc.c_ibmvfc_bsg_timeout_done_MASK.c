
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int dev; scalar_t__ aborting_passthru; } ;
struct ibmvfc_event {struct ibmvfc_host* vhost; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ibmvfc_event*) ;

__attribute__((used)) static void FUNC_2(struct ibmvfc_event *VAR_0)
{
 struct ibmvfc_host *VAR_1 = VAR_0->vhost;

 FUNC_1(VAR_0);
 VAR_1->aborting_passthru = 0;
 FUNC_0(VAR_1->dev, "Passthru command cancelled\n");
}
