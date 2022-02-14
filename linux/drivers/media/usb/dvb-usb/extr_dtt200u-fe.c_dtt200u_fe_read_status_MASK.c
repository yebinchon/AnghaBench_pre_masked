
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int* data; int data_mutex; int d; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int*,int,int*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_7,
      enum fe_status *VAR_8)
{
 struct dtt200u_fe_state *VAR_9 = VAR_7->demodulator_priv;
 int VAR_10;

 FUNC_1(&VAR_9->data_mutex);
 VAR_9->data[0] = VAR_6;

 VAR_10 = FUNC_0(VAR_9->d, VAR_9->data, 1, VAR_9->data, 3, 0);
 if (VAR_10 < 0) {
  *VAR_8 = 0;
  FUNC_2(&VAR_9->data_mutex);
  return VAR_10;
 }

 switch (VAR_9->data[0]) {
  case 0x01:
   *VAR_8 = VAR_2 | VAR_0 |
    VAR_4 | VAR_3 | VAR_1;
   break;
  case 0x00:
   *VAR_8 = VAR_5;
   break;
  default:
  case 0x02:
   *VAR_8 = 0;
   break;
 }
 FUNC_2(&VAR_9->data_mutex);
 return 0;
}
