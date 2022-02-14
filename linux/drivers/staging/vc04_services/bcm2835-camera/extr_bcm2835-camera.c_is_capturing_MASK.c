
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * camera_port; } ;
struct bm2835_mmal_dev {TYPE_2__** component; TYPE_1__ capture; } ;
struct TYPE_4__ {int * output; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct bm2835_mmal_dev *VAR_2)
{
 return VAR_2->capture.camera_port ==
     &VAR_2->component[VAR_1]->output[VAR_0];
}
