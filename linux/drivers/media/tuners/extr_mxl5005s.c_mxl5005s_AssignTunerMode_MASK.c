
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxl5005s_state {struct mxl5005s_config* config; } ;
struct mxl5005s_config {int tracking_filter; int rssi_enable; int cap_select; int div_out; int clock_out; int output_load; int top; int agc_mode; int xtal_freq; int if_freq; int if_mode; int mod_mode; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 VAR_1,
 u32 VAR_2)
{
 struct mxl5005s_state *VAR_3 = VAR_0->tuner_priv;
 struct mxl5005s_config *VAR_4 = VAR_3->config;

 FUNC_0(VAR_0);


 FUNC_1(
  VAR_0,
  VAR_4->mod_mode,
  VAR_4->if_mode,
  VAR_2,
  VAR_4->if_freq,
  VAR_4->xtal_freq,
  VAR_4->agc_mode,
  VAR_4->top,
  VAR_4->output_load,
  VAR_4->clock_out,
  VAR_4->div_out,
  VAR_4->cap_select,
  VAR_4->rssi_enable,
  VAR_1,
  VAR_4->tracking_filter);

 return 0;
}
