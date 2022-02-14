
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int req_lock; int * request; } ;
struct isp_ccdc_device {int state; int output; TYPE_1__ lsc; int stopping; scalar_t__ bt656; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct isp_ccdc_device*,int ) ;
 int FUNC_1 (struct isp_ccdc_device*,int ) ;
 scalar_t__ FUNC_2 (struct isp_ccdc_device*,int ) ;
 int FUNC_3 (struct isp_ccdc_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct isp_ccdc_device *VAR_6)
{
 unsigned long VAR_7;
 if (VAR_6->bt656)
  return;

 FUNC_4(&VAR_6->lsc.req_lock, VAR_7);
 switch (VAR_6->state) {
 case 129:
  VAR_6->stopping = VAR_2;
  break;

 case 130:
  if (VAR_6->output & VAR_1) {
   if (VAR_6->lsc.state != VAR_5)
    FUNC_1(VAR_6, 0);
   FUNC_0(VAR_6, 0);
  }
  break;

 case 128:
  break;
 }

 if (FUNC_2(VAR_6, VAR_0))
  goto done;

 if (VAR_6->lsc.request == ((void*)0))
  goto done;





 if (VAR_6->lsc.state == VAR_4) {
  FUNC_1(VAR_6, 0);
  VAR_6->lsc.state = VAR_3;
  goto done;
 }


 if (VAR_6->lsc.state == VAR_5)
  FUNC_3(VAR_6);

done:
 FUNC_5(&VAR_6->lsc.req_lock, VAR_7);
}
