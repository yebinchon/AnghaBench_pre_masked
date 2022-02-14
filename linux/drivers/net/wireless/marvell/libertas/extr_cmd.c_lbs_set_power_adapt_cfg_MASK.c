
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_pa_cfg {int enable; void* P2; void* P1; void* P0; void* action; TYPE_1__ hdr; } ;
typedef void* int8_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_pa_cfg*) ;
 int FUNC_2 (struct cmd_ds_802_11_pa_cfg*,int ,int) ;

int FUNC_3(struct lbs_private *VAR_2, int VAR_3, int8_t VAR_4,
  int8_t VAR_5, int8_t VAR_6)
{
 struct cmd_ds_802_11_pa_cfg VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.hdr.size = FUNC_0(sizeof(VAR_7));
 VAR_7.action = FUNC_0(VAR_1);
 VAR_7.enable = !!VAR_3;
 VAR_7.P0 = VAR_4;
 VAR_7.P1 = VAR_5;
 VAR_7.P2 = VAR_6;

 VAR_8 = FUNC_1(VAR_2, VAR_0 , &VAR_7);

 return VAR_8;
}
