
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_i2c_data {int regmap; int * kthread_vid_cap; } ;
struct vb2_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct video_i2c_data* FUNC_4 (struct vb2_queue*) ;
 int FUNC_5 (struct vb2_queue*,int ) ;

__attribute__((used)) static void FUNC_6(struct vb2_queue *VAR_1)
{
 struct video_i2c_data *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2->kthread_vid_cap == ((void*)0))
  return;

 FUNC_0(VAR_2->kthread_vid_cap);
 VAR_2->kthread_vid_cap = ((void*)0);
 FUNC_1(FUNC_3(VAR_2->regmap));
 FUNC_2(FUNC_3(VAR_2->regmap));

 FUNC_5(VAR_1, VAR_0);
}
