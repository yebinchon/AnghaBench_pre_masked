
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esas2r_request {scalar_t__ req_stat; TYPE_2__* vrq; scalar_t__ interrupt_cx; } ;
struct esas2r_ioctl_fs {scalar_t__ driver_error; int status; } ;
struct esas2r_adapter {int dummy; } ;
struct TYPE_3__ {scalar_t__ sub_func; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct esas2r_adapter*) ;

__attribute__((used)) static void FUNC_1(struct esas2r_adapter *VAR_4,
         struct esas2r_request *VAR_5)
{
 struct esas2r_ioctl_fs *VAR_6 =
  (struct esas2r_ioctl_fs *)VAR_5->interrupt_cx;

 if (VAR_5->vrq->flash.sub_func == VAR_3)
  FUNC_0(VAR_4);

 VAR_6->driver_error = VAR_5->req_stat;

 if (VAR_6->driver_error == VAR_2)
  VAR_6->status = VAR_1;
 else
  VAR_6->status = VAR_0;
}
