
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int data_mutex; int * data; int d; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_1)
{
 struct dtt200u_fe_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 FUNC_1(&VAR_2->data_mutex);
 VAR_2->data[0] = VAR_0;

 VAR_3 = FUNC_0(VAR_2->d, VAR_2->data, 1);
 FUNC_2(&VAR_2->data_mutex);

 return VAR_3;
}
