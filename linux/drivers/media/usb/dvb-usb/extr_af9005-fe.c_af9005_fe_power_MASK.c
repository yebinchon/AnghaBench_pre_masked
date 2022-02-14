
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; } ;


 int FUNC_0 (int ,int,int*,int,int *,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct af9005_fe_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3 = VAR_1;
 int VAR_4;
 FUNC_1("power %s tuner\n", VAR_1 ? "on" : "off");
 VAR_4 = FUNC_0(VAR_2->d, 0x03, &VAR_3, 1, ((void*)0), 0);
 return VAR_4;
}
