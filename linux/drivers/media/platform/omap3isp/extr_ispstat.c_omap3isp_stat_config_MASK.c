
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ispstat_generic_config {int buf_size; scalar_t__ config_counter; } ;
struct TYPE_6__ {int name; } ;
struct ispstat {int configured; int ioctl_lock; TYPE_3__ subdev; TYPE_2__* isp; scalar_t__ inc_config; scalar_t__ config_counter; TYPE_1__* ops; struct ispstat_generic_config* recover_priv; } ;
struct TYPE_5__ {int dev; int stat_lock; } ;
struct TYPE_4__ {int (* validate_params ) (struct ispstat*,void*) ;int (* set_params ) (struct ispstat*,void*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ispstat*) ;
 scalar_t__ FUNC_1 (struct ispstat*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct ispstat*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ispstat*,void*) ;
 int FUNC_10 (struct ispstat*,void*) ;

int FUNC_11(struct ispstat *VAR_3, void *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 struct ispstat_generic_config *VAR_7 = VAR_4;
 u32 VAR_8 = VAR_7->buf_size;

 FUNC_5(&VAR_3->ioctl_lock);

 FUNC_3(VAR_3->isp->dev,
  "%s: configuring module with buffer size=0x%08lx\n",
  VAR_3->subdev.name, (unsigned long)VAR_8);

 VAR_5 = VAR_3->ops->validate_params(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_6(&VAR_3->ioctl_lock);
  FUNC_3(VAR_3->isp->dev, "%s: configuration values are invalid.\n",
   VAR_3->subdev.name);
  return VAR_5;
 }

 if (VAR_8 != VAR_7->buf_size)
  FUNC_3(VAR_3->isp->dev,
   "%s: driver has corrected buffer size request to 0x%08lx\n",
   VAR_3->subdev.name,
   (unsigned long)VAR_7->buf_size);
 if (FUNC_0(VAR_3)) {
  VAR_8 = VAR_7->buf_size * 2 + VAR_1;
  if (FUNC_1(VAR_3))




   VAR_8 += VAR_0 * (VAR_2 + 2);
  if (VAR_3->recover_priv) {
   struct ispstat_generic_config *VAR_9 =
    VAR_3->recover_priv;
   VAR_8 += VAR_9->buf_size *
        VAR_2;
  }
  VAR_8 = FUNC_2(VAR_8);
 } else {
  VAR_8 = FUNC_2(VAR_7->buf_size + VAR_1);
 }

 VAR_5 = FUNC_4(VAR_3, VAR_8);
 if (VAR_5) {
  FUNC_6(&VAR_3->ioctl_lock);
  return VAR_5;
 }

 FUNC_7(&VAR_3->isp->stat_lock, VAR_6);
 VAR_3->ops->set_params(VAR_3, VAR_4);
 FUNC_8(&VAR_3->isp->stat_lock, VAR_6);





 VAR_7->config_counter = VAR_3->config_counter + VAR_3->inc_config;


 VAR_3->configured = 1;
 FUNC_3(VAR_3->isp->dev,
  "%s: module has been successfully configured.\n",
  VAR_3->subdev.name);

 FUNC_6(&VAR_3->ioctl_lock);

 return 0;
}
