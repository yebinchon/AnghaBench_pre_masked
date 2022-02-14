
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int s_mutex; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct mcam_camera*) ;
 int VAR_0 ;
 int FUNC_1 (struct mcam_camera*) ;
 int FUNC_2 (struct mcam_camera*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct mcam_camera*,int ,int ,int) ;
 scalar_t__ FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 struct mcam_camera* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct mcam_camera *VAR_3 = FUNC_9(VAR_2);
 int VAR_4;

 FUNC_3(&VAR_3->s_mutex);
 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  goto out;
 if (FUNC_6(VAR_2)) {
  VAR_4 = FUNC_5(VAR_3, VAR_0, VAR_1, 1);
  if (VAR_4)
   goto out;
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
  FUNC_2(VAR_3, 1);
 }
out:
 FUNC_4(&VAR_3->s_mutex);
 if (VAR_4)
  FUNC_8(VAR_2);
 return VAR_4;
}
