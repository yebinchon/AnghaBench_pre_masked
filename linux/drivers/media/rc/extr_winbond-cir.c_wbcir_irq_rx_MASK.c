
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbcir_data {scalar_t__ rxstate; unsigned int pulse_duration; int dev; scalar_t__ carrier_report_enabled; scalar_t__ sbase; } ;
struct pnp_dev {int dummy; } ;
struct ir_raw_event {int pulse; int duration; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ir_raw_event*) ;

__attribute__((used)) static void
FUNC_4(struct wbcir_data *VAR_4, struct pnp_dev *VAR_5)
{
 u8 VAR_6;
 struct ir_raw_event VAR_7 = {};
 unsigned VAR_8;


 while (FUNC_1(VAR_4->sbase + VAR_0) & VAR_3) {
  VAR_6 = FUNC_1(VAR_4->sbase + VAR_1);
  if (VAR_4->rxstate == VAR_2)
   continue;

  VAR_8 = ((VAR_6 & 0x7F) + 1) *
   (VAR_4->carrier_report_enabled ? 2 : 10);
  VAR_7.pulse = VAR_6 & 0x80 ? 0 : 1;
  VAR_7.duration = FUNC_0(VAR_8);

  if (VAR_7.pulse)
   VAR_4->pulse_duration += VAR_8;

  FUNC_3(VAR_4->dev, &VAR_7);
 }

 FUNC_2(VAR_4->dev);
}
