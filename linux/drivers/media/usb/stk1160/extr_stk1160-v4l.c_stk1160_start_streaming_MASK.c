
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_bufs; int * urb; } ;
struct stk1160 {int v4l_lock; int udev; scalar_t__ sequence; int v4l2_dev; TYPE_1__ isoc_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct stk1160*) ;
 int FUNC_3 (struct stk1160*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (struct stk1160*) ;
 int FUNC_7 (struct stk1160*) ;
 int FUNC_8 (struct stk1160*,scalar_t__,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ,int ,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct stk1160 *VAR_6)
{
 bool VAR_7;
 int VAR_8 = 0;
 int VAR_9;


 if (!VAR_6->udev)
  return -VAR_0;

 if (FUNC_0(&VAR_6->v4l_lock))
  return -VAR_1;





 VAR_7 = FUNC_6(VAR_6);






 if (!VAR_6->isoc_ctl.num_bufs || VAR_7) {
  VAR_8 = FUNC_2(VAR_6);
  if (VAR_8 < 0)
   goto out_stop_hw;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6->isoc_ctl.num_bufs; VAR_9++) {
  VAR_8 = FUNC_10(VAR_6->isoc_ctl.urb[VAR_9], VAR_2);
  if (VAR_8) {
   FUNC_5("cannot submit urb[%d] (%d)\n", VAR_9, VAR_8);
   goto out_uninit;
  }
 }


 FUNC_11(&VAR_6->v4l2_dev, 0, VAR_5, VAR_4, 1);

 VAR_6->sequence = 0;


 FUNC_8(VAR_6, VAR_3, 0xb3);
 FUNC_8(VAR_6, VAR_3+3, 0x00);

 FUNC_4("streaming started\n");

 FUNC_1(&VAR_6->v4l_lock);

 return 0;

out_uninit:
 FUNC_7(VAR_6);
out_stop_hw:
 FUNC_9(VAR_6->udev, 0, 0);
 FUNC_3(VAR_6);

 FUNC_1(&VAR_6->v4l_lock);

 return VAR_8;
}
