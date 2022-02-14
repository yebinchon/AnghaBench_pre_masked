
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {scalar_t__ ebase; scalar_t__ pulse_duration; int dev; } ;
struct ir_raw_event {int carrier_report; int carrier; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct ir_raw_event*) ;
 int FUNC_3 (scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_4(struct wbcir_data *VAR_5)
{
 unsigned VAR_6 = FUNC_1(VAR_5->ebase + VAR_4) |
   FUNC_1(VAR_5->ebase + VAR_3) << 8;

 if (VAR_6 > 0 && VAR_6 < 0xffff) {
  struct ir_raw_event VAR_7 = {
   .carrier_report = 1,
   .carrier = FUNC_0(VAR_6 * 1000000u,
      VAR_5->pulse_duration)
  };

  FUNC_2(VAR_5->dev, &VAR_7);
 }


 VAR_5->pulse_duration = 0;
 FUNC_3(VAR_5->ebase + VAR_2, VAR_1,
      VAR_0 | VAR_1);
 FUNC_3(VAR_5->ebase + VAR_2, VAR_0,
      VAR_0 | VAR_1);
}
