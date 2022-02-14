
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lpum; } ;
struct TYPE_6__ {TYPE_1__ esw1; } ;
struct TYPE_8__ {scalar_t__ sesq; } ;
struct TYPE_7__ {TYPE_4__ tm; } ;
struct irb {TYPE_2__ esw; TYPE_3__ scsw; } ;
struct dasd_eckd_private {int fcx_max_data; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dasd_device*,int ) ;
 int FUNC_2 (struct dasd_device*) ;
 scalar_t__ FUNC_3 (struct dasd_device*,int ) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_device*,int ) ;
 int FUNC_6 (struct dasd_device*) ;

__attribute__((used)) static void FUNC_7(struct dasd_device *VAR_4,
           struct irb *VAR_5)
{
 struct dasd_eckd_private *VAR_6 = VAR_4->private;

 if (!VAR_6->fcx_max_data) {

  FUNC_0(VAR_1, VAR_4, "%s",
         "Trying to disable HPF for a non HPF device");
  return;
 }
 if (VAR_5->scsw.tm.sesq == VAR_2) {
  FUNC_2(VAR_4);
 } else if (VAR_5->scsw.tm.sesq == VAR_3) {
  if (FUNC_3(VAR_4, VAR_5->esw.esw1.lpum))
   return;
  FUNC_2(VAR_4);
  FUNC_5(VAR_4,
      FUNC_4(VAR_4));
 }




 FUNC_1(VAR_4, VAR_0);
 FUNC_6(VAR_4);
}
