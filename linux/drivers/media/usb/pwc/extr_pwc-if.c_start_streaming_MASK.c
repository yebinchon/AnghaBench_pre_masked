
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct pwc_device {int v4l2_lock; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pwc_device*,int) ;
 int FUNC_3 (struct pwc_device*,int ) ;
 int FUNC_4 (struct pwc_device*) ;
 int FUNC_5 (struct pwc_device*,int ,int ) ;
 struct pwc_device* FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_7(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct pwc_device *VAR_6 = FUNC_6(VAR_4);
 int VAR_7;

 if (!VAR_6->udev)
  return -VAR_0;

 if (FUNC_0(&VAR_6->v4l2_lock))
  return -VAR_1;

 FUNC_2(VAR_6, 1);
 FUNC_5(VAR_6, VAR_3[0], VAR_3[1]);

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {

  FUNC_5(VAR_6, 0, 0);
  FUNC_2(VAR_6, 0);

  FUNC_3(VAR_6, VAR_2);
 }
 FUNC_1(&VAR_6->v4l2_lock);

 return VAR_7;
}
