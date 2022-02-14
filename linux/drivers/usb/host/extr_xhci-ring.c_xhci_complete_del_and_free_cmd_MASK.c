
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_command {scalar_t__ completion; int status; int cmd_list; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct xhci_command*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xhci_command *VAR_0, u32 VAR_1)
{
 FUNC_2(&VAR_0->cmd_list);

 if (VAR_0->completion) {
  VAR_0->status = VAR_1;
  FUNC_0(VAR_0->completion);
 } else {
  FUNC_1(VAR_0);
 }
}
