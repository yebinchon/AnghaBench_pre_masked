
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_loopback {scalar_t__ us_wait; scalar_t__ size; scalar_t__ iteration_max; int type; int wq; int jiffy_timeout; int timeout; int kfifo_lat; int dev; scalar_t__ error; scalar_t__ send_count; scalar_t__ iteration_count; scalar_t__ requests_completed; scalar_t__ requests_timedout; } ;
struct TYPE_2__ {scalar_t__ size_max; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (struct gb_loopback*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gb_loopback *VAR_5)
{
 if (VAR_5->us_wait > VAR_2)
  VAR_5->us_wait = VAR_2;
 if (VAR_5->size > VAR_3.size_max)
  VAR_5->size = VAR_3.size_max;
 VAR_5->requests_timedout = 0;
 VAR_5->requests_completed = 0;
 VAR_5->iteration_count = 0;
 VAR_5->send_count = 0;
 VAR_5->error = 0;

 if (VAR_4 < VAR_5->iteration_max) {
  FUNC_0(VAR_5->dev,
    "cannot log bytes %u kfifo_depth %u\n",
    VAR_5->iteration_max, VAR_4);
 }
 FUNC_2(&VAR_5->kfifo_lat);

 switch (VAR_5->type) {
 case 130:
 case 128:
 case 129:
  VAR_5->jiffy_timeout = FUNC_3(VAR_5->timeout);
  if (!VAR_5->jiffy_timeout)
   VAR_5->jiffy_timeout = VAR_1;
  else if (VAR_5->jiffy_timeout > VAR_0)
   VAR_5->jiffy_timeout = VAR_0;
  FUNC_1(VAR_5);
  FUNC_4(&VAR_5->wq);
  break;
 default:
  VAR_5->type = 0;
  break;
 }
}
