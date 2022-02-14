
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct pwc_device {int v4l2_lock; TYPE_1__* fill_buf; scalar_t__ udev; } ;
struct TYPE_4__ {int vb2_buf; } ;
struct TYPE_3__ {TYPE_2__ vb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pwc_device*,int ) ;
 int FUNC_3 (struct pwc_device*,int ) ;
 int FUNC_4 (struct pwc_device*) ;
 int FUNC_5 (struct pwc_device*,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 struct pwc_device* FUNC_7 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_8(struct vb2_queue *VAR_1)
{
 struct pwc_device *VAR_2 = FUNC_7(VAR_1);

 FUNC_0(&VAR_2->v4l2_lock);
 if (VAR_2->udev) {
  FUNC_5(VAR_2, 0, 0);
  FUNC_2(VAR_2, 0);
  FUNC_4(VAR_2);
 }

 FUNC_3(VAR_2, VAR_0);
 if (VAR_2->fill_buf)
  FUNC_6(&VAR_2->fill_buf->vb.vb2_buf,
    VAR_0);
 FUNC_1(&VAR_2->v4l2_lock);
}
