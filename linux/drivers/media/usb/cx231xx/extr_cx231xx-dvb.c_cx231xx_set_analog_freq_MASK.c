
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dvb_tuner_ops {int (* set_analog_params ) (TYPE_3__*,struct analog_parameters*) ;} ;
struct cx231xx {TYPE_2__* dvb; int norm; } ;
struct analog_parameters {scalar_t__ mode; int std; int frequency; } ;
struct TYPE_4__ {struct dvb_tuner_ops tuner_ops; } ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_5__ {TYPE_3__** frontend; } ;


 int FUNC_0 (TYPE_3__*,struct analog_parameters*) ;

int FUNC_1(struct cx231xx *VAR_0, u32 VAR_1)
{
 if (VAR_0->dvb && VAR_0->dvb->frontend[0]) {

  struct dvb_tuner_ops *VAR_2 = &VAR_0->dvb->frontend[0]->ops.tuner_ops;

  if (VAR_2->set_analog_params != ((void*)0)) {
   struct analog_parameters VAR_3;

   VAR_3.frequency = VAR_1;
   VAR_3.std = VAR_0->norm;
   VAR_3.mode = 0;



   VAR_2->set_analog_params(VAR_0->dvb->frontend[0], &VAR_3);
  }

 }

 return 0;
}
