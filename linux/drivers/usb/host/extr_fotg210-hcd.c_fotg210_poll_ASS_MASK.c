
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fotg210_hcd {scalar_t__ rh_state; int command; scalar_t__ async_count; scalar_t__ ASS_poll_count; TYPE_1__* regs; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct fotg210_hcd*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct fotg210_hcd*,int ,int) ;
 unsigned int FUNC_2 (struct fotg210_hcd*,int *) ;
 int FUNC_3 (struct fotg210_hcd*,int) ;

__attribute__((used)) static void FUNC_4(struct fotg210_hcd *VAR_5)
{
 unsigned VAR_6, VAR_7;


 if (VAR_5->rh_state != VAR_3)
  return;

 VAR_7 = (VAR_5->command & VAR_0) ? VAR_4 : 0;
 VAR_6 = FUNC_2(VAR_5, &VAR_5->regs->status) & VAR_4;

 if (VAR_7 != VAR_6) {


  if (VAR_5->ASS_poll_count++ < 20) {
   FUNC_1(VAR_5, VAR_2,
     1);
   return;
  }
  FUNC_0(VAR_5, "Waited too long for the async schedule status (%x/%x), giving up\n",
    VAR_7, VAR_6);
 }
 VAR_5->ASS_poll_count = 0;


 if (VAR_7 == 0) {
  if (VAR_5->async_count > 0)
   FUNC_3(VAR_5, VAR_0);

 } else {
  if (VAR_5->async_count == 0) {


   FUNC_1(VAR_5,
     VAR_1,
     1);
  }
 }
}
