
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct serial_rs485 {int flags; void* delay_rts_after_send; void* delay_rts_before_send; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,void**,int) ;

void FUNC_2(struct device *VAR_4, struct serial_rs485 *VAR_5)
{
 u32 VAR_6[2];
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, "rs485-rts-delay",
          VAR_6, 2);
 if (!VAR_7) {
  VAR_5->delay_rts_before_send = VAR_6[0];
  VAR_5->delay_rts_after_send = VAR_6[1];
 } else {
  VAR_5->delay_rts_before_send = 0;
  VAR_5->delay_rts_after_send = 0;
 }





 VAR_5->flags &= ~(VAR_3 | VAR_0 |
         VAR_1);
 VAR_5->flags |= VAR_2;

 if (FUNC_0(VAR_4, "rs485-rx-during-tx"))
  VAR_5->flags |= VAR_3;

 if (FUNC_0(VAR_4, "linux,rs485-enabled-at-boot-time"))
  VAR_5->flags |= VAR_0;

 if (FUNC_0(VAR_4, "rs485-rts-active-low")) {
  VAR_5->flags &= ~VAR_2;
  VAR_5->flags |= VAR_1;
 }
}
