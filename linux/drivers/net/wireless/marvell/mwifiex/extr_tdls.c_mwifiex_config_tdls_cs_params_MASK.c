
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_tdls_config_cs_params {int thr_directlink; int thr_otherlink; int unit_time; } ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_tdls_config_cs_params*,int) ;

int FUNC_1(struct mwifiex_private *VAR_5)
{
 struct mwifiex_tdls_config_cs_params VAR_6;

 VAR_6.unit_time = VAR_3;
 VAR_6.thr_otherlink = VAR_2;
 VAR_6.thr_directlink = VAR_4;

 return FUNC_0(VAR_5, VAR_1,
    VAR_0, 0,
    &VAR_6, 1);
}
