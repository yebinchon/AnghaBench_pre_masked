
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camera_data {int num_frames; TYPE_1__* buffers; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ ts; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct camera_data *VAR_1)
{
 int VAR_2;
 int VAR_3 = -1;
 for (VAR_2=0; VAR_2<VAR_1->num_frames; VAR_2++) {
  if(VAR_1->buffers[VAR_2].status == VAR_0) {
   if(VAR_3 < 0) {
    VAR_3 = VAR_2;
   } else {

    if (VAR_1->buffers[VAR_2].ts < VAR_1->buffers[VAR_3].ts)
     VAR_3 = VAR_2;
   }
  }
 }
 return VAR_3;
}
