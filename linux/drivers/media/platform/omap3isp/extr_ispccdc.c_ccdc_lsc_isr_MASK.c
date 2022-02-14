
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct isp_pipeline {int error; } ;
struct TYPE_4__ {scalar_t__ state; int req_lock; int * request; } ;
struct TYPE_3__ {int entity; } ;
struct isp_ccdc_device {TYPE_2__ lsc; TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct isp_ccdc_device*,int ) ;
 int FUNC_1 (struct isp_ccdc_device*) ;
 int FUNC_2 (struct isp_ccdc_device*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct isp_ccdc_device*) ;
 struct isp_pipeline* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct isp_ccdc_device *VAR_7, u32 VAR_8)
{
 unsigned long VAR_9;

 if (VAR_8 & VAR_2) {
  struct isp_pipeline *VAR_10 =
   FUNC_7(&VAR_7->subdev.entity);

  FUNC_2(VAR_7);
  VAR_10->error = 1;
  FUNC_3(FUNC_6(VAR_7), "lsc prefetch error\n");
 }

 if (!(VAR_8 & VAR_1))
  return;





 FUNC_4(&VAR_7->lsc.req_lock, VAR_9);

 if (VAR_7->lsc.state == VAR_6)
  VAR_7->lsc.state = VAR_5;

 if (FUNC_0(VAR_7, VAR_0))
  goto done;

 if (VAR_7->lsc.state != VAR_4)
  goto done;


 VAR_7->lsc.state = VAR_5;





 if (VAR_8 & VAR_3)
  goto done;




 if (VAR_7->lsc.request == ((void*)0))
  goto done;

 FUNC_1(VAR_7);

done:
 FUNC_5(&VAR_7->lsc.req_lock, VAR_9);
}
