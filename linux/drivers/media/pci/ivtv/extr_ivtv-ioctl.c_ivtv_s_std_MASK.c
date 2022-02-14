
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ v4l2_std_id ;
struct ivtv {scalar_t__ std; int v4l2_cap; int decoding; int capturing; int i_flags; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (void*) ;
 int FUNC_3 (struct ivtv*,scalar_t__) ;
 int FUNC_4 (struct ivtv*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_5, void *VAR_6, v4l2_std_id VAR_7)
{
 struct ivtv *VAR_8 = FUNC_2(VAR_6)->itv;

 if ((VAR_7 & VAR_4) == 0)
  return -VAR_1;

 if (VAR_7 == VAR_8->std)
  return 0;

 if (FUNC_5(VAR_2, &VAR_8->i_flags) ||
     FUNC_1(&VAR_8->capturing) > 0 ||
     FUNC_1(&VAR_8->decoding) > 0) {


  return -VAR_0;
 }

 FUNC_0("Switching standard to %llx.\n",
  (unsigned long long)VAR_8->std);

 FUNC_4(VAR_8, VAR_7);
 if (VAR_8->v4l2_cap & VAR_3)
  FUNC_3(VAR_8, VAR_7);

 return 0;
}
