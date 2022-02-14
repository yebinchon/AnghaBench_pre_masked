
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct isci_request {scalar_t__ num_sg_entries; scalar_t__ flags; int * io_request_completion; int io_tag; } ;
struct isci_host {struct isci_request** reqs; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static struct isci_request *FUNC_1(struct isci_host *VAR_0, u16 VAR_1)
{
 struct isci_request *VAR_2;

 VAR_2 = VAR_0->reqs[FUNC_0(VAR_1)];
 VAR_2->io_tag = VAR_1;
 VAR_2->io_request_completion = ((void*)0);
 VAR_2->flags = 0;
 VAR_2->num_sg_entries = 0;

 return VAR_2;
}
