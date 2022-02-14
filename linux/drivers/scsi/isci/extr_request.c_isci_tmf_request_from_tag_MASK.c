
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct isci_tmf {int dummy; } ;
struct TYPE_2__ {struct isci_tmf* tmf_task_ptr; } ;
struct isci_request {int flags; TYPE_1__ ttype_ptr; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 struct isci_request* FUNC_0 (struct isci_host*,int ) ;
 int FUNC_1 (int ,int *) ;

struct isci_request *FUNC_2(struct isci_host *VAR_1,
            struct isci_tmf *VAR_2,
            u16 VAR_3)
{
 struct isci_request *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 VAR_4->ttype_ptr.tmf_task_ptr = VAR_2;
 FUNC_1(VAR_0, &VAR_4->flags);

 return VAR_4;
}
