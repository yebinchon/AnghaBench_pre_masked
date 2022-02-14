
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap3isp_stat_data {scalar_t__ buf_size; int buf; } ;
struct ispstat_buffer {int empty; scalar_t__ buf_size; int virt_addr; } ;
struct TYPE_4__ {int name; } ;
struct ispstat {TYPE_2__ subdev; TYPE_1__* isp; struct ispstat_buffer* locked_buf; } ;
struct TYPE_3__ {int dev; int stat_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ispstat_buffer* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (struct ispstat*,struct ispstat_buffer*) ;
 struct ispstat_buffer* FUNC_6 (struct ispstat*) ;
 int FUNC_7 (struct ispstat*) ;
 int FUNC_8 (struct ispstat*,struct ispstat_buffer*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static struct ispstat_buffer *FUNC_11(struct ispstat *VAR_3,
            struct omap3isp_stat_data *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 struct ispstat_buffer *VAR_7;

 FUNC_9(&VAR_3->isp->stat_lock, VAR_6);

 while (1) {
  VAR_7 = FUNC_6(VAR_3);
  if (!VAR_7) {
   FUNC_10(&VAR_3->isp->stat_lock, VAR_6);
   FUNC_2(VAR_3->isp->dev, "%s: cannot find a buffer.\n",
    VAR_3->subdev.name);
   return FUNC_0(-VAR_0);
  }
  if (FUNC_5(VAR_3, VAR_7)) {
   FUNC_2(VAR_3->isp->dev,
    "%s: current buffer has corrupted data\n.",
    VAR_3->subdev.name);

   VAR_7->empty = 1;
  } else {

   break;
  }
 }

 VAR_3->locked_buf = VAR_7;

 FUNC_10(&VAR_3->isp->stat_lock, VAR_6);

 if (VAR_7->buf_size > VAR_4->buf_size) {
  FUNC_4(VAR_3->isp->dev,
    "%s: userspace's buffer size is not enough.\n",
    VAR_3->subdev.name);
  FUNC_7(VAR_3);
  return FUNC_0(-VAR_2);
 }

 FUNC_8(VAR_3, VAR_7);

 VAR_5 = FUNC_1(VAR_4->buf,
       VAR_7->virt_addr,
       VAR_7->buf_size);

 if (VAR_5) {
  FUNC_3(VAR_3->isp->dev,
    "%s: failed copying %d bytes of stat data\n",
    VAR_3->subdev.name, VAR_5);
  VAR_7 = FUNC_0(-VAR_1);
  FUNC_7(VAR_3);
 }

 return VAR_7;
}
