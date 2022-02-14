
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct mwifiex_tdls_init_cs_params {int periodicity; int reg_class; void* switch_timeout; void* switch_time; void* band; void* second_chan_offset; void* primary_chan; int peer_mac; } ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,void* const*) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_tdls_init_cs_params*,int) ;

int FUNC_3(struct mwifiex_private *VAR_6, const u8 *VAR_7,
     u8 VAR_8, u8 VAR_9, u8 VAR_10)
{
 struct mwifiex_tdls_init_cs_params VAR_11;

 FUNC_1(VAR_11.peer_mac, VAR_7);
 VAR_11.primary_chan = VAR_8;
 VAR_11.second_chan_offset = VAR_9;
 VAR_11.band = VAR_10;

 VAR_11.switch_time = FUNC_0(VAR_4);
 VAR_11.switch_timeout =
     FUNC_0(VAR_5);
 VAR_11.reg_class = VAR_3;
 VAR_11.periodicity = VAR_2;

 return FUNC_2(VAR_6, VAR_1,
    VAR_0, 0,
    &VAR_11, 1);
}
