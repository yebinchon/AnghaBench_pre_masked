
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {scalar_t__ buffer_mode; int s_mutex; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mcam_camera*) ;
 int FUNC_2 (struct mcam_camera*) ;
 int FUNC_3 (struct mcam_camera*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct mcam_camera*,int ,int ,int ) ;
 int FUNC_7 (struct file*) ;
 struct mcam_camera* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_4)
{
 struct mcam_camera *VAR_5 = FUNC_8(VAR_4);
 bool VAR_6;

 FUNC_4(&VAR_5->s_mutex);
 VAR_6 = FUNC_7(VAR_4);
 FUNC_0(VAR_4, ((void*)0));
 if (VAR_6) {
  FUNC_2(VAR_5);
  FUNC_6(VAR_5, VAR_2, VAR_3, 0);
  FUNC_1(VAR_5);
  if (VAR_5->buffer_mode == VAR_0 && VAR_1)
   FUNC_3(VAR_5);
 }

 FUNC_5(&VAR_5->s_mutex);
 return 0;
}
