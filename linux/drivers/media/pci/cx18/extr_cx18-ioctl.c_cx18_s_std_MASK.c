
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct TYPE_3__ {int count; int* start; } ;
struct TYPE_4__ {int width; int height; } ;
struct cx18 {int std; int is_60hz; int is_50hz; TYPE_1__ vbi; TYPE_2__ cxhdl; int ana_capturing; int i_flags; } ;


 int FUNC_0 (char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cx18*,int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 struct cx18_open_id* FUNC_4 (void*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_6 ;

int FUNC_6(struct file *VAR_7, void *VAR_8, v4l2_std_id VAR_9)
{
 struct cx18_open_id *VAR_10 = FUNC_4(VAR_8);
 struct cx18 *VAR_11 = VAR_10->cx;

 if ((VAR_9 & VAR_4) == 0)
  return -VAR_2;

 if (VAR_9 == VAR_11->std)
  return 0;

 if (FUNC_5(VAR_0, &VAR_11->i_flags) ||
     FUNC_1(&VAR_11->ana_capturing) > 0) {



  return -VAR_1;
 }

 VAR_11->std = VAR_9;
 VAR_11->is_60hz = (VAR_9 & VAR_3) ? 1 : 0;
 VAR_11->is_50hz = !VAR_11->is_60hz;
 FUNC_3(&VAR_11->cxhdl, VAR_11->is_50hz);
 VAR_11->cxhdl.width = 720;
 VAR_11->cxhdl.height = VAR_11->is_50hz ? 576 : 480;
 VAR_11->vbi.count = VAR_11->is_50hz ? 18 : 12;
 VAR_11->vbi.start[0] = VAR_11->is_50hz ? 6 : 10;
 VAR_11->vbi.start[1] = VAR_11->is_50hz ? 318 : 273;
 FUNC_0("Switching standard to %llx.\n",
   (unsigned long long) VAR_11->std);


 FUNC_2(VAR_11, VAR_6, VAR_5, VAR_11->std);
 return 0;
}
