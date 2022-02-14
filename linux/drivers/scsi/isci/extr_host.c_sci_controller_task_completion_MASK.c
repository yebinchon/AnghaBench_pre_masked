
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct isci_request {scalar_t__ io_tag; int flags; } ;
struct isci_host {scalar_t__* io_request_sequence; struct isci_request** reqs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct isci_request*,size_t) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct isci_host *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);
 struct isci_request *VAR_5 = VAR_2->reqs[VAR_4];


 if (FUNC_3(VAR_0, &VAR_5->flags) &&
     VAR_5->io_tag != VAR_1 &&
     FUNC_0(VAR_5->io_tag) == VAR_2->io_request_sequence[VAR_4])



  FUNC_2(VAR_5, VAR_3);
}
