
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct ivtv_open_id* FUNC_0 (void*) ;
 int FUNC_1 (struct ivtv*,int ,int ,struct v4l2_tuner const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, const struct v4l2_tuner *VAR_5)
{
 struct ivtv_open_id *VAR_6 = FUNC_0(VAR_4);
 struct ivtv *VAR_7 = VAR_6->itv;

 if (VAR_5->index != 0)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_2, VAR_1, VAR_5);

 return 0;
}
