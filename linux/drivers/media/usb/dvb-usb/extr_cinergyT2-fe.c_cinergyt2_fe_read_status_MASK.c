
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cinergyt2_fe_state* demodulator_priv; } ;
struct TYPE_2__ {int lock_bits; int gain; } ;
struct cinergyt2_fe_state {TYPE_1__ status; int data_mutex; int * data; int d; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int,int *,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_6,
        enum fe_status *VAR_7)
{
 struct cinergyt2_fe_state *VAR_8 = VAR_6->demodulator_priv;
 int VAR_9;

 FUNC_3(&VAR_8->data_mutex);
 VAR_8->data[0] = VAR_0;

 VAR_9 = FUNC_0(VAR_8->d, VAR_8->data, 1,
     VAR_8->data, sizeof(VAR_8->status), 0);
 if (!VAR_9)
  FUNC_2(&VAR_8->status, VAR_8->data, sizeof(VAR_8->status));
 FUNC_4(&VAR_8->data_mutex);

 if (VAR_9 < 0)
  return VAR_9;

 *VAR_7 = 0;

 if (0xffff - FUNC_1(VAR_8->status.gain) > 30)
  *VAR_7 |= VAR_3;
 if (VAR_8->status.lock_bits & (1 << 6))
  *VAR_7 |= VAR_2;
 if (VAR_8->status.lock_bits & (1 << 5))
  *VAR_7 |= VAR_4;
 if (VAR_8->status.lock_bits & (1 << 4))
  *VAR_7 |= VAR_1;
 if (VAR_8->status.lock_bits & (1 << 1))
  *VAR_7 |= VAR_5;

 if ((*VAR_7 & (VAR_1 | VAR_5 | VAR_4)) !=
   (VAR_1 | VAR_5 | VAR_4))
  *VAR_7 &= ~VAR_2;

 return 0;
}
