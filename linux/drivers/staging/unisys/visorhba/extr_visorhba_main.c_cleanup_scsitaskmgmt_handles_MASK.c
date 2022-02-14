
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ notifyresult_handle; scalar_t__ notify_handle; } ;
struct uiscmdrsp {TYPE_1__ scsitaskmgmt; } ;
struct idr {int dummy; } ;


 int FUNC_0 (struct idr*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct idr *VAR_0,
      struct uiscmdrsp *VAR_1)
{
 if (VAR_1->scsitaskmgmt.notify_handle)
  FUNC_0(VAR_0, VAR_1->scsitaskmgmt.notify_handle);
 if (VAR_1->scsitaskmgmt.notifyresult_handle)
  FUNC_0(VAR_0, VAR_1->scsitaskmgmt.notifyresult_handle);
}
