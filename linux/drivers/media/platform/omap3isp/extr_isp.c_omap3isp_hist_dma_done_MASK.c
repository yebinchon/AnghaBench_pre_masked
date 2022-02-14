
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf_err; } ;
struct isp_device {int dev; TYPE_1__ isp_hist; int isp_ccdc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct isp_device *VAR_0)
{
 if (FUNC_2(&VAR_0->isp_ccdc) ||
     FUNC_3(&VAR_0->isp_hist)) {

  FUNC_0(&VAR_0->isp_hist.buf_err, 1);
  FUNC_1(VAR_0->dev,
   "hist: Out of synchronization with CCDC. Ignoring next buffer.\n");
 }
}
