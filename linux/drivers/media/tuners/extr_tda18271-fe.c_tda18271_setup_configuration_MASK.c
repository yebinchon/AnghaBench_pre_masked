
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {int output_opt; int small_i2c; int config; int role; int gate; } ;
struct tda18271_config {int output_opt; int small_i2c; int config; int role; int gate; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_4,
     struct tda18271_config *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_4->tuner_priv;

 VAR_6->gate = (VAR_5) ? VAR_5->gate : VAR_1;
 VAR_6->role = (VAR_5) ? VAR_5->role : VAR_2;
 VAR_6->config = (VAR_5) ? VAR_5->config : 0;
 VAR_6->small_i2c = (VAR_5) ?
  VAR_5->small_i2c : VAR_0;
 VAR_6->output_opt = (VAR_5) ?
  VAR_5->output_opt : VAR_3;

 return 0;
}
