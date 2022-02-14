
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; scalar_t__ type; int name; } ;
struct ivtv {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ivtv* itv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (struct ivtv*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_tuner *VAR_6)
{
 struct ivtv *VAR_7 = FUNC_0(VAR_5)->itv;

 if (VAR_6->index != 0)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_3, VAR_2, VAR_6);

 if (VAR_6->type == VAR_1)
  FUNC_2(VAR_6->name, "ivtv Radio Tuner", sizeof(VAR_6->name));
 else
  FUNC_2(VAR_6->name, "ivtv TV Tuner", sizeof(VAR_6->name));
 return 0;
}
