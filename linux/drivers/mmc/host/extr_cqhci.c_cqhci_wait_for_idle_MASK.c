
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {int wait_queue; } ;


 int FUNC_0 (struct cqhci_host*,int*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_0)
{
 struct cqhci_host *VAR_1 = VAR_0->cqe_private;
 int VAR_2;

 FUNC_1(VAR_1->wait_queue, FUNC_0(VAR_1, &VAR_2));

 return VAR_2;
}
