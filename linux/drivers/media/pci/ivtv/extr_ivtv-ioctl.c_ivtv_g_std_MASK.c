
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct ivtv {int std; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ivtv* itv; } ;


 TYPE_1__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct ivtv *VAR_3 = FUNC_0(VAR_1)->itv;

 *VAR_2 = VAR_3->std;
 return 0;
}
