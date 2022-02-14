
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bm2835_mmal_dev {int v4l2_dev; scalar_t__* ctrls; } ;
struct TYPE_3__ {int (* setter ) (struct bm2835_mmal_dev*,scalar_t__,TYPE_1__*) ;int ignore_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bm2835_mmal_dev*,scalar_t__,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,int ,int *,char*,int) ;

int FUNC_2(struct bm2835_mmal_dev *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((VAR_3->ctrls[VAR_4]) && (VAR_2[VAR_4].setter)) {
   VAR_5 = VAR_2[VAR_4].setter(VAR_3, VAR_3->ctrls[VAR_4],
         &VAR_2[VAR_4]);
   if (!VAR_2[VAR_4].ignore_errors && VAR_5) {
    FUNC_1(1, VAR_1, &VAR_3->v4l2_dev,
      "Failed when setting default values for ctrl %d\n",
      VAR_4);
    break;
   }
  }
 }
 return VAR_5;
}
