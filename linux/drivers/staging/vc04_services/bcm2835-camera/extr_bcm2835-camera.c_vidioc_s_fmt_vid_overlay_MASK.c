
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct bm2835_mmal_dev {TYPE_2__** component; int overlay; } ;
struct TYPE_4__ {int * input; scalar_t__ enabled; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bm2835_mmal_dev*,int *) ;
 struct bm2835_mmal_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
        struct v4l2_format *VAR_3)
{
 struct bm2835_mmal_dev *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_4->overlay = VAR_3->fmt.win;
 if (VAR_4->component[VAR_0]->enabled) {
  FUNC_0(VAR_4,
       &VAR_4->component[VAR_0]->input[0]);
 }

 return 0;
}
