
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_4__ {int stream_mode; } ;
struct TYPE_5__ {TYPE_1__ camera_state; } ;
struct camera_data {TYPE_3__* curbuff; int wq_stream; TYPE_2__ params; int streaming; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_6__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct camera_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct file*,int *) ;

__poll_t FUNC_4(struct camera_data *VAR_3, struct file *VAR_4,
   poll_table *VAR_5)
{
 __poll_t VAR_6 = FUNC_3(VAR_4, VAR_5);

 if ((FUNC_1(VAR_5) & (VAR_0 | VAR_1)) &&
   !VAR_3->streaming) {

  FUNC_0(VAR_3,
           VAR_3->params.camera_state.stream_mode);
 }

 FUNC_2(VAR_4, &VAR_3->wq_stream, VAR_5);

 if (VAR_3->curbuff->status == VAR_2)
  VAR_6 |= VAR_0 | VAR_1;

 return VAR_6;
}
