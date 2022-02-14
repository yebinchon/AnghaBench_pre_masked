
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int* data; int data_mutex; int d; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,int*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_1, u16 *VAR_2)
{
 struct dtt200u_fe_state *VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;

 FUNC_1(&VAR_3->data_mutex);
 VAR_3->data[0] = VAR_0;

 VAR_4 = FUNC_0(VAR_3->d, VAR_3->data, 1, VAR_3->data, 1, 0);
 if (VAR_4 >= 0)
  *VAR_2 = ~((VAR_3->data[0] << 8) | VAR_3->data[0]);

 FUNC_2(&VAR_3->data_mutex);
 return VAR_4;
}
