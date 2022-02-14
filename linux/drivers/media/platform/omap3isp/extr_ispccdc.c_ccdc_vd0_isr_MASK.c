
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isp_pipeline {int frame_number; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int entity; } ;
struct isp_ccdc_device {scalar_t__ state; int output; int lock; int shadow_update; TYPE_2__ lsc; scalar_t__ bt656; TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct isp_ccdc_device*,int ) ;
 int FUNC_1 (struct isp_ccdc_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct isp_ccdc_device*) ;
 int FUNC_4 (struct isp_ccdc_device*) ;
 scalar_t__ FUNC_5 (struct isp_ccdc_device*,int ) ;
 int FUNC_6 (struct isp_ccdc_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct isp_pipeline* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct isp_ccdc_device *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;




 if (VAR_5->bt656) {
  struct isp_pipeline *VAR_8 =
   FUNC_9(&VAR_5->subdev.entity);

  FUNC_2(&VAR_8->frame_number);
 }





 if (VAR_5->bt656) {
  FUNC_7(&VAR_5->lock, VAR_6);
  if (VAR_5->state == VAR_3 &&
      VAR_5->output & VAR_2) {
   if (VAR_5->lsc.state != VAR_4)
    FUNC_1(VAR_5, 0);
   FUNC_0(VAR_5, 0);
  }
  FUNC_5(VAR_5, VAR_1);
  FUNC_8(&VAR_5->lock, VAR_6);
 }

 if (VAR_5->output & VAR_2)
  VAR_7 = FUNC_6(VAR_5);

 FUNC_7(&VAR_5->lock, VAR_6);

 if (FUNC_5(VAR_5, VAR_0)) {
  FUNC_8(&VAR_5->lock, VAR_6);
  return;
 }

 if (!VAR_5->shadow_update)
  FUNC_3(VAR_5);
 FUNC_8(&VAR_5->lock, VAR_6);

 if (VAR_7)
  FUNC_4(VAR_5);
}
