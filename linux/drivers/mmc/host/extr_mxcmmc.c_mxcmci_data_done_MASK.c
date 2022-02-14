
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int * cmd; int lock; struct mmc_request* req; int data; } ;
struct mmc_request {scalar_t__ stop; } ;


 int FUNC_0 (struct mxcmci_host*,unsigned int) ;
 int FUNC_1 (struct mxcmci_host*,struct mmc_request*) ;
 int FUNC_2 (struct mxcmci_host*,unsigned int) ;
 scalar_t__ FUNC_3 (struct mxcmci_host*,scalar_t__,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mxcmci_host *VAR_0, unsigned int VAR_1)
{
 struct mmc_request *VAR_2;
 int VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_0->lock, VAR_4);

 if (!VAR_0->data) {
  FUNC_5(&VAR_0->lock, VAR_4);
  return;
 }

 if (!VAR_0->req) {
  FUNC_5(&VAR_0->lock, VAR_4);
  return;
 }

 VAR_2 = VAR_0->req;
 if (!VAR_2->stop)
  VAR_0->req = ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_5(&VAR_0->lock, VAR_4);

 if (VAR_3)
  return;

 FUNC_2(VAR_0, VAR_1);
 VAR_0->cmd = ((void*)0);

 if (VAR_2->stop) {
  if (FUNC_3(VAR_0, VAR_2->stop, 0)) {
   FUNC_1(VAR_0, VAR_2);
   return;
  }
 } else {
  FUNC_1(VAR_0, VAR_2);
 }
}
