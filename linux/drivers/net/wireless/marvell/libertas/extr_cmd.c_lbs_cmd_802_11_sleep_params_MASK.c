
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sleep_params {int sp_error; int sp_offset; int sp_stabletime; int sp_reserved; int sp_extsleepclk; int sp_calcontrol; } ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_sleep_params {void* reserved; int externalsleepclk; int calcontrol; void* stabletime; void* offset; void* error; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_sleep_params*) ;
 int FUNC_2 (char*,void*,void*,void*,int ,int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (struct cmd_ds_802_11_sleep_params*,int ,int) ;

int FUNC_5(struct lbs_private *VAR_2, uint16_t VAR_3,
    struct sleep_params *VAR_4)
{
 struct cmd_ds_802_11_sleep_params VAR_5;
 int VAR_6;

 if (VAR_3 == VAR_1) {
  FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 } else {
  VAR_5.error = FUNC_0(VAR_4->sp_error);
  VAR_5.offset = FUNC_0(VAR_4->sp_offset);
  VAR_5.stabletime = FUNC_0(VAR_4->sp_stabletime);
  VAR_5.calcontrol = VAR_4->sp_calcontrol;
  VAR_5.externalsleepclk = VAR_4->sp_extsleepclk;
  VAR_5.reserved = FUNC_0(VAR_4->sp_reserved);
 }
 VAR_5.hdr.size = FUNC_0(sizeof(VAR_5));
 VAR_5.action = FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_2, VAR_0, &VAR_5);

 if (!VAR_6) {
  FUNC_2("error 0x%x, offset 0x%x, stabletime 0x%x, "
       "calcontrol 0x%x extsleepclk 0x%x\n",
       FUNC_3(VAR_5.error), FUNC_3(VAR_5.offset),
       FUNC_3(VAR_5.stabletime), VAR_5.calcontrol,
       VAR_5.externalsleepclk);

  VAR_4->sp_error = FUNC_3(VAR_5.error);
  VAR_4->sp_offset = FUNC_3(VAR_5.offset);
  VAR_4->sp_stabletime = FUNC_3(VAR_5.stabletime);
  VAR_4->sp_calcontrol = VAR_5.calcontrol;
  VAR_4->sp_extsleepclk = VAR_5.externalsleepclk;
  VAR_4->sp_reserved = FUNC_3(VAR_5.reserved);
 }

 return VAR_6;
}
